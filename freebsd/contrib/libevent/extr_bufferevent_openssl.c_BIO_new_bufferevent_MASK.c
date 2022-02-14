
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufferevent {int dummy; } ;
typedef int BIO ;


 int * FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,struct bufferevent*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static BIO *
FUNC_5(struct bufferevent *VAR_0, int VAR_1)
{
 BIO *VAR_2;
 if (!VAR_0)
  return ((void*)0);
 if (!(VAR_2 = FUNC_0(FUNC_1())))
  return ((void*)0);
 FUNC_3(VAR_2, 1);
 FUNC_2(VAR_2, VAR_0);
 FUNC_4(VAR_2, VAR_1 ? 1 : 0);
 return VAR_2;
}
