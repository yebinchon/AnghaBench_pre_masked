
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufferevent {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct bufferevent*,int ) ;
 int FUNC_1 (struct bufferevent*) ;
 scalar_t__ FUNC_2 (int ,char const*) ;
 int FUNC_3 (void*,int *) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_4(struct bufferevent *VAR_2, void *VAR_3)
{
 const char *VAR_4 = "400 Bad Request";
 if (FUNC_2(FUNC_1(VAR_2), VAR_4)) {
  VAR_1 = 2;
  FUNC_0(VAR_2, VAR_0);
  FUNC_3(VAR_3, ((void*)0));
 }
}
