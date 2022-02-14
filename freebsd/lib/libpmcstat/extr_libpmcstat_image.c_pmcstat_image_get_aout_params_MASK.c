
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmcstat_image {int pi_type; scalar_t__ pi_iskernelmodule; int pi_execpath; } ;
struct pmcstat_args {char* pa_fsroot; int pa_verbosity; } ;
struct exec {int dummy; } ;
typedef scalar_t__ ssize_t ;
typedef int ex ;
typedef int buffer ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct exec) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,char const*) ;
 int FUNC_4 (char*,int ,int ) ;
 char* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int,struct exec*,int) ;
 int FUNC_7 (char*,int,char*,char*,char const*) ;
 int FUNC_8 (char*,char const*) ;

void
FUNC_9(struct pmcstat_image *VAR_5,
    struct pmcstat_args *VAR_6)
{
 int VAR_7;
 ssize_t VAR_8;
 struct exec VAR_9;
 const char *VAR_10;
 char VAR_11[VAR_2];

 VAR_10 = FUNC_5(VAR_5->pi_execpath);
 FUNC_1(VAR_10 != ((void*)0));

 if (VAR_5->pi_iskernelmodule)
  FUNC_3(VAR_0,
      "ERROR: a.out kernel modules are unsupported \"%s\"", VAR_10);

 (void) FUNC_7(VAR_11, sizeof(VAR_11), "%s%s",
     VAR_6->pa_fsroot, VAR_10);

 if ((VAR_7 = FUNC_4(VAR_11, VAR_1, 0)) < 0 ||
     (VAR_8 = FUNC_6(VAR_7, &VAR_9, sizeof(VAR_9))) < 0) {
  if (VAR_6->pa_verbosity >= 2)
   FUNC_8("WARNING: Cannot determine type of \"%s\"",
       VAR_10);
  VAR_5->pi_type = VAR_4;
  if (VAR_7 != -1)
   (void) FUNC_2(VAR_7);
  return;
 }

 (void) FUNC_2(VAR_7);

 if ((unsigned) VAR_8 != sizeof(VAR_9) ||
     FUNC_0(VAR_9))
  return;

 VAR_5->pi_type = VAR_3;



 return;
}
