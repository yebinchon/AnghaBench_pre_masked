
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char* uintmax_t ;
typedef scalar_t__ time_t ;
struct stat {scalar_t__ st_mtime; char* st_size; int st_rdev; int st_uid; scalar_t__ st_nlink; int st_gid; int st_mode; } ;
struct TYPE_3__ {char* name; scalar_t__ type; char* ln_name; struct stat sb; } ;
typedef int FILE ;
typedef TYPE_1__ ARCHD ;


 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 char* VAR_5 ;
 char* VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (scalar_t__*) ;
 int FUNC_5 (int ,int) ;
 char* FUNC_6 (int ,int) ;
 char* FUNC_7 (int ) ;
 int FUNC_8 (char,int *) ;
 scalar_t__ FUNC_9 (char*,int,char const*,int ) ;
 int FUNC_10 (int ,char*) ;
 int VAR_14 ;

void
FUNC_11(ARCHD *VAR_15, time_t VAR_16, FILE *VAR_17)
{
 struct stat *VAR_18;
 char VAR_19[VAR_4];
 char VAR_20[VAR_2];
 const char *VAR_21;




 if (!VAR_14) {
  (void)FUNC_3(VAR_17, "%s\n", VAR_15->name);
  (void)FUNC_2(VAR_17);
  return;
 }

 if (VAR_13 < 0)
  VAR_13 = (*FUNC_7(VAR_3) == 'd');



 VAR_18 = &(VAR_15->sb);
 FUNC_10(VAR_18->st_mode, VAR_19);




 if ((VAR_18->st_mtime + VAR_12) <= VAR_16)
  VAR_21 = VAR_13 ? VAR_5 : VAR_6;
 else
  VAR_21 = VAR_13 ? VAR_0 : VAR_1;




 if (FUNC_9(VAR_20,VAR_2,VAR_21,FUNC_4(&(VAR_18->st_mtime))) == 0)
  VAR_20[0] = '\0';
 (void)FUNC_3(VAR_17, "%s%2ju %-12s %-12s ", VAR_19,
  (uintmax_t)VAR_18->st_nlink,
  FUNC_6(VAR_18->st_uid, 1), FUNC_5(VAR_18->st_gid, 1));




 if ((VAR_15->type == VAR_8) || (VAR_15->type == VAR_7))




  (void)FUNC_3(VAR_17, "%4lu,%4lu ", (unsigned long)FUNC_0(VAR_18->st_rdev),
      (unsigned long)FUNC_1(VAR_18->st_rdev));

 else {



  (void)FUNC_3(VAR_17, "%9ju ", (uintmax_t)VAR_18->st_size);

 }




 (void)FUNC_3(VAR_17, "%s %s", VAR_20, VAR_15->name);
 if ((VAR_15->type == VAR_9) || (VAR_15->type == VAR_10))
  (void)FUNC_3(VAR_17, " == %s\n", VAR_15->ln_name);
 else if (VAR_15->type == VAR_11)
  (void)FUNC_3(VAR_17, " => %s\n", VAR_15->ln_name);
 else
  (void)FUNC_8('\n', VAR_17);
 (void)FUNC_2(VAR_17);
 return;
}
