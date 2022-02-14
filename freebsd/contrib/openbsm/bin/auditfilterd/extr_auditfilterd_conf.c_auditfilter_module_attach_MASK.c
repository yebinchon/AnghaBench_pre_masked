
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct auditfilter_module {scalar_t__ (* am_attach ) (struct auditfilter_module*,int ,int ) ;int * am_detach; int * am_rawrecord; int * am_record; int * am_reinit; int * am_cookie; int * am_dlhandle; int am_modulename; int am_argv; int am_argc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int * FUNC_2 (int ,int ) ;
 void* FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (struct auditfilter_module*,int ,int ) ;
 int FUNC_5 (char*,int ,...) ;

__attribute__((used)) static int
FUNC_6(struct auditfilter_module *VAR_7)
{

 VAR_7->am_dlhandle = FUNC_2(VAR_7->am_modulename, VAR_6);
 if (VAR_7->am_dlhandle == ((void*)0)) {
  FUNC_5("auditfilter_module_attach: %s: %s", VAR_7->am_modulename,
      FUNC_1());
  return (-1);
 }






 VAR_7->am_attach = FUNC_3(VAR_7->am_dlhandle, VAR_0);
 VAR_7->am_reinit = FUNC_3(VAR_7->am_dlhandle, VAR_4);
 VAR_7->am_record = FUNC_3(VAR_7->am_dlhandle, VAR_3);
 VAR_7->am_rawrecord = FUNC_3(VAR_7->am_dlhandle,
     VAR_2);
 VAR_7->am_detach = FUNC_3(VAR_7->am_dlhandle, VAR_1);

 if (VAR_7->am_attach != ((void*)0)) {
  if (VAR_7->am_attach(VAR_7, VAR_7->am_argc, VAR_7->am_argv)
      != VAR_5) {
   FUNC_5("auditfilter_module_attach: %s: failed",
       VAR_7->am_modulename);
   FUNC_0(VAR_7->am_dlhandle);
   VAR_7->am_dlhandle = ((void*)0);
   VAR_7->am_cookie = ((void*)0);
   VAR_7->am_attach = ((void*)0);
   VAR_7->am_reinit = ((void*)0);
   VAR_7->am_record = ((void*)0);
   VAR_7->am_rawrecord = ((void*)0);
   VAR_7->am_detach = ((void*)0);
   return (-1);
  }
 }

 return (0);
}
