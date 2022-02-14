
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufferevent {int dummy; } ;
struct basic_test_data {int base; } ;


 struct bufferevent* FUNC_0 (struct bufferevent*,int *,int *,int ,int *,int *) ;
 int FUNC_1 (struct bufferevent*) ;
 struct bufferevent* FUNC_2 (int ,int,int ) ;
 int FUNC_3 (struct bufferevent*) ;

__attribute__((used)) static void
FUNC_4(void *VAR_0)
{
 struct basic_test_data *VAR_1 = VAR_0;
 struct bufferevent *VAR_2 = ((void*)0), *VAR_3 = ((void*)0);

 VAR_2 = FUNC_2(VAR_1->base, -1, 0);
 FUNC_3(VAR_2);
 VAR_3 = FUNC_0(VAR_2, ((void*)0), ((void*)0), 0, ((void*)0), ((void*)0));
 FUNC_3(VAR_3);

end:
 if (VAR_3)
  FUNC_1(VAR_3);
 if (VAR_2)
  FUNC_1(VAR_2);
}
