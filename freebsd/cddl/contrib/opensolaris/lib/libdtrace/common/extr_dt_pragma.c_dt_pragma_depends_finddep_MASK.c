
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct stat {int dummy; } ;
struct TYPE_7__ {char* dir_path; } ;
struct TYPE_6__ {TYPE_2__ dt_lib_path; } ;
typedef TYPE_1__ dtrace_hdl_t ;
typedef TYPE_2__ dt_dirpath_t ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (char*,size_t,char*,char*,char const*) ;
 scalar_t__ FUNC_2 (char*,struct stat*) ;
 int FUNC_3 (int ,char*,char const*) ;

__attribute__((used)) static void
FUNC_4(dtrace_hdl_t *VAR_1, const char *VAR_2, char *VAR_3,
    size_t VAR_4)
{
 dt_dirpath_t *VAR_5;
 struct stat VAR_6;
 int VAR_7 = 0;

 for (VAR_5 = FUNC_0(&VAR_1->dt_lib_path); VAR_5 != ((void*)0);
     VAR_5 = FUNC_0(VAR_5)) {
  (void) FUNC_1(VAR_3, VAR_4, "%s/%s", VAR_5->dir_path, VAR_2);

  if (FUNC_2(VAR_3, &VAR_6) == 0) {
   VAR_7 = 1;
   break;
  }
 }

 if (!VAR_7)
  FUNC_3(VAR_0,
      "failed to find dependency in libpath: %s", VAR_2);
}
