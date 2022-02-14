
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct statfs {int f_mntfromname; } ;
struct TYPE_3__ {int rm_eo; int rm_so; } ;
typedef TYPE_1__ regmatch_t ;
typedef int regex_t ;
typedef int dev ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,char*,...) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (char*,int,int) ;
 int FUNC_4 (char*,char*,scalar_t__) ;
 int FUNC_5 (int *,char*,int ) ;
 int FUNC_6 (int *,char*,int,TYPE_1__*,int ) ;
 int FUNC_7 (char*,struct statfs*) ;
 int FUNC_8 (char*,int,int) ;
 scalar_t__ FUNC_9 (char*) ;
 char* FUNC_10 (char*,char*) ;

__attribute__((used)) static char *
FUNC_11(void)
{
 struct statfs VAR_3;
 regex_t VAR_4;

 regmatch_t VAR_5[2];
 char VAR_6[VAR_1], *VAR_7;
 int VAR_8;

 if (FUNC_7("/", &VAR_3) == -1)
  FUNC_0(1, "statfs(\"/\")");

 if ((VAR_8 = FUNC_5(&VAR_4, "^(/dev/[a-z/]+[0-9]*)([sp][0-9]+)?[a-h]?(\\.journal)?$",
      VAR_2)) != 0)
  FUNC_1(1, "regcomp() failed (%d)", VAR_8);
 FUNC_8(VAR_6, VAR_3.f_mntfromname, sizeof (VAR_6));
 if ((VAR_7 = FUNC_10(VAR_6, ".eli")) != ((void*)0))
     FUNC_4(VAR_7, VAR_7+4, FUNC_9(VAR_7 + 4) + 1);

 if ((VAR_8 = FUNC_6(&VAR_4, VAR_6, 2, VAR_5, 0)) != 0)
  FUNC_1(1,
"mounted root fs resource doesn't match expectations (regexec returned %d)",
      VAR_8);
 if ((VAR_7 = FUNC_2(VAR_5[1].rm_eo - VAR_5[1].rm_so + 1)) == ((void*)0))
  FUNC_1(1, "out of memory");
 FUNC_3(VAR_7, VAR_3.f_mntfromname + VAR_5[1].rm_so,
     VAR_5[1].rm_eo - VAR_5[1].rm_so);
 VAR_7[VAR_5[1].rm_eo - VAR_5[1].rm_so] = 0;

 return VAR_7;
}
