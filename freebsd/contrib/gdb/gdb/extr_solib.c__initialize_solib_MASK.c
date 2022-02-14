
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmd_list_element {int dummy; } ;


 int FUNC_0 (char*,int ,int ,char*) ;
 int FUNC_1 (char*,int ,char*) ;
 struct cmd_list_element* FUNC_2 (char*,int ,int ,char*,char*,int *) ;
 int FUNC_3 (struct cmd_list_element*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (struct cmd_list_element*,int ) ;
 int FUNC_5 (struct cmd_list_element*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_6 (int ) ;

void
FUNC_7 (void)
{
  struct cmd_list_element *VAR_16;

  FUNC_0 ("sharedlibrary", VAR_1, VAR_9,
    "Load shared object library symbols for files matching REGEXP.");
  FUNC_1 ("sharedlibrary", VAR_5,
     "Status of loaded shared object libraries.");
  FUNC_0 ("nosharedlibrary", VAR_1, VAR_6,
    "Unload all shared object library symbols.");

  FUNC_3
    (FUNC_2 ("auto-solib-add", VAR_2, VAR_13,
    (char *) &VAR_0,
    "Set autoloading of shared library symbols.\nIf \"on\", symbols from all shared object libraries will be loaded\nautomatically when the inferior begins execution, when the dynamic linker\ninforms gdb that a new library has been loaded, or when attaching to the\ninferior.  Otherwise, symbols must be loaded manually, using `sharedlibrary'.",




    &VAR_8),
     &VAR_10);

  VAR_16 = FUNC_2 ("solib-absolute-prefix", VAR_2, VAR_14,
     (char *) &VAR_11,
     "Set prefix for loading absolute shared library symbol files.\nFor other (relative) files, you can add values using `set solib-search-path'.",

     &VAR_8);
  FUNC_3 (VAR_16, &VAR_10);
  FUNC_4 (VAR_16, VAR_7);
  FUNC_5 (VAR_16, VAR_3);



  VAR_11 = FUNC_6 (VAR_4);

  VAR_16 = FUNC_2 ("solib-search-path", VAR_2, VAR_15,
     (char *) &VAR_12,
     "Set the search path for loading non-absolute shared library symbol files.\nThis takes precedence over the environment variables PATH and LD_LIBRARY_PATH.",

     &VAR_8);
  FUNC_3 (VAR_16, &VAR_10);
  FUNC_4 (VAR_16, VAR_7);
  FUNC_5 (VAR_16, VAR_3);
}
