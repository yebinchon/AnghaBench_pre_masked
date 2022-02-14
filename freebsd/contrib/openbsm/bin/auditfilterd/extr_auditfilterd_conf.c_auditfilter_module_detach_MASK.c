
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct auditfilter_module {int * am_dlhandle; int * am_cookie; int (* am_detach ) (struct auditfilter_module*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct auditfilter_module*) ;

__attribute__((used)) static void
FUNC_2(struct auditfilter_module *VAR_0)
{

 if (VAR_0->am_detach != ((void*)0))
  VAR_0->am_detach(VAR_0);
 VAR_0->am_cookie = ((void*)0);
 (void)FUNC_0(VAR_0->am_dlhandle);
 VAR_0->am_dlhandle = ((void*)0);
}
