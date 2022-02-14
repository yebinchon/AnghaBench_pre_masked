
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct win32_extension_fns {scalar_t__ ConnectEx; } ;
struct bufferevent {int ev_base; } ;


 scalar_t__ FUNC_0 (struct bufferevent*) ;
 scalar_t__ FUNC_1 (int ) ;
 struct win32_extension_fns* FUNC_2 () ;

int
FUNC_3(struct bufferevent *VAR_0)
{
 const struct win32_extension_fns *VAR_1 =
     FUNC_2();

 if (FUNC_0(VAR_0) &&
     FUNC_1(VAR_0->ev_base) &&
     VAR_1 && VAR_1->ConnectEx)
  return 1;

 return 0;
}
