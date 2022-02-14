
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int fileargs_t ;
typedef int cap_rights_t ;
struct TYPE_4__ {int def_filename; } ;
struct TYPE_3__ {int * fileargs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int ,char*) ;
 int * FUNC_5 (int,char**,int ,int ,int *,int ) ;
 TYPE_2__ VAR_5 ;
 TYPE_1__ VAR_6 ;
 char* FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(int VAR_7, char **VAR_8)
{
 cap_rights_t VAR_9;
 fileargs_t *VAR_10;
 char *VAR_11;

 FUNC_0(&VAR_9, VAR_0, VAR_1);

 if (VAR_7 == 0) {
  VAR_11 = FUNC_6(VAR_5.def_filename);
  if (VAR_11 == ((void*)0))
   FUNC_4(VAR_2, "strdup");
  VAR_7 = 1;
  VAR_8 = &VAR_11;
 }

 VAR_10 = FUNC_5(VAR_7, VAR_8, VAR_4, 0, &VAR_9, VAR_3);
 if (VAR_10 == ((void*)0))
  FUNC_4(VAR_2, "failed to initialize fileargs");

 FUNC_1();
 if (FUNC_3() < 0)
  FUNC_4(VAR_2, "failed to limit stdio rights");
 if (FUNC_2() < 0)
  FUNC_4(VAR_2, "failed to enter capability mode");

 VAR_6.fileargs = VAR_10;
}
