
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct auditfilter_module {scalar_t__ (* am_reinit ) (struct auditfilter_module*,int ,int ) ;int am_modulename; int am_argv; int am_argc; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct auditfilter_module*,int ,int ) ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static int
FUNC_2(struct auditfilter_module *VAR_1)
{

 if (VAR_1->am_reinit == ((void*)0))
  return (0);

 if (VAR_1->am_reinit(VAR_1, VAR_1->am_argc, VAR_1->am_argv) !=
     VAR_0) {
  FUNC_1("auditfilter_module_reinit: %s: failed",
      VAR_1->am_modulename);
  return (-1);
 }

 return (0);
}
