
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int ,int ,char*) ;
 int FUNC_1 (char*,int ,char*) ;
 int FUNC_2 (char*,int ,int ,char*,char*,int *) ;
 int FUNC_3 (int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

void
FUNC_4 (void)
{
  FUNC_0 ("sharedlibrary", VAR_1, VAR_4,
    "Load shared object library symbols for files matching REGEXP.");
  FUNC_1 ("sharedlibrary", VAR_6,
     "Status of loaded shared object libraries");

  FUNC_3
    (FUNC_2 ("auto-solib-add", VAR_2, VAR_7,
    (char *) &VAR_0,
    "Set autoloading of shared library symbols.\nIf \"on\", symbols from all shared object libraries will be loaded\nautomatically when the inferior begins execution, when the dynamic linker\ninforms gdb that a new library has been loaded, or when attaching to the\ninferior.  Otherwise, symbols must be loaded manually, using `sharedlibrary'.",




    &VAR_3),
     &VAR_5);
}
