
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct auditfilter_module {int * am_argv; int * am_arg_buffer; int * am_modulename; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct auditfilter_module *VAR_0)
{

 if (VAR_0->am_modulename != ((void*)0))
  FUNC_0(VAR_0->am_modulename);
 if (VAR_0->am_arg_buffer != ((void*)0))
  FUNC_0(VAR_0->am_arg_buffer);
 if (VAR_0->am_argv != ((void*)0))
  FUNC_0(VAR_0->am_argv);
}
