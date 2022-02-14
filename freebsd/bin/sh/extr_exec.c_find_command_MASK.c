
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int index; } ;
struct tblentry {scalar_t__ cmdtype; int special; TYPE_1__ param; } ;
struct stat {int st_mode; scalar_t__ st_uid; scalar_t__ st_gid; } ;
struct cmdentry {scalar_t__ cmdtype; int special; TYPE_1__ u; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 struct tblentry* FUNC_2 (char const*,int) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (char*,char const*,char*) ;
 int FUNC_4 (char const*,int*) ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ FUNC_6 () ;
 int VAR_13 ;
 int FUNC_7 (int ,char*,char const*,...) ;
 char* FUNC_8 (char const**,char const**,char const*) ;
 int FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (char*,struct stat*) ;
 int * FUNC_11 (char const*,char) ;
 int FUNC_12 (int) ;
 scalar_t__ FUNC_13 (char const*,char*,int) ;
 int FUNC_14 (char*) ;

void
FUNC_15(const char *VAR_14, struct cmdentry *VAR_15, int VAR_16,
    const char *VAR_17)
{
 struct tblentry *VAR_18, VAR_19;
 int VAR_20;
 const char *VAR_21;
 char *VAR_22;
 struct stat VAR_23;
 int VAR_24;
 int VAR_25;
 int VAR_26;
 int VAR_27;


 if (FUNC_11(VAR_14, '/') != ((void*)0)) {
  VAR_15->cmdtype = VAR_2;
  VAR_15->u.index = 0;
  VAR_15->special = 0;
  return;
 }

 VAR_27 = 0;


 if ((VAR_18 = FUNC_2(VAR_14, 0)) != ((void*)0)) {
  if (VAR_18->cmdtype == VAR_1 && VAR_16 & VAR_5)
   VAR_18 = ((void*)0);
  else
   goto success;
 }


 if ((VAR_25 = FUNC_4(VAR_14, &VAR_26)) >= 0) {
  VAR_9;
  VAR_18 = FUNC_2(VAR_14, 1);
  if (VAR_18->cmdtype == VAR_1)
   VAR_18 = &VAR_19;
  VAR_18->cmdtype = VAR_0;
  VAR_18->param.index = VAR_25;
  VAR_18->special = VAR_26;
  VAR_10;
  goto success;
 }



 VAR_24 = VAR_7;
 VAR_20 = -1;
 for (;(VAR_22 = FUNC_8(&VAR_17, &VAR_21, VAR_14)) != ((void*)0);
     FUNC_14(VAR_22)) {
  VAR_20++;
  if (VAR_21) {
   if (FUNC_13(VAR_21, "func", 4) == 0) {

   } else {
    continue;
   }
  }
  if (VAR_22[0] != '/')
   VAR_27 = 1;
  if (FUNC_10(VAR_22, &VAR_23) < 0) {
   if (VAR_12 != VAR_7 && VAR_12 != VAR_8)
    VAR_24 = VAR_12;
   continue;
  }
  VAR_24 = VAR_6;
  if (!FUNC_0(VAR_23.st_mode))
   continue;
  if (VAR_21) {
   FUNC_9(VAR_22);
   if ((VAR_18 = FUNC_2(VAR_14, 0)) == ((void*)0) || VAR_18->cmdtype != VAR_1)
    FUNC_3("%s not defined in %s", VAR_14, VAR_22);
   FUNC_14(VAR_22);
   goto success;
  }
  FUNC_1(("searchexec \"%s\" returns \"%s\"\n", VAR_14, VAR_22));
  VAR_9;
  FUNC_14(VAR_22);
  VAR_18 = FUNC_2(VAR_14, 1);
  if (VAR_18->cmdtype == VAR_1)
   VAR_18 = &VAR_19;
  VAR_18->cmdtype = VAR_2;
  VAR_18->param.index = VAR_20;
  VAR_18->special = 0;
  VAR_10;
  goto success;
 }

 if (VAR_16 & VAR_4) {
  if (VAR_24 == VAR_7 || VAR_24 == VAR_8)
   FUNC_7(VAR_13, "%s: not found\n", VAR_14);
  else
   FUNC_7(VAR_13, "%s: %s\n", VAR_14, FUNC_12(VAR_24));
 }
 VAR_15->cmdtype = VAR_3;
 VAR_15->u.index = 0;
 VAR_15->special = 0;
 return;

success:
 if (VAR_27)
  VAR_11 = 1;
 VAR_15->cmdtype = VAR_18->cmdtype;
 VAR_15->u = VAR_18->param;
 VAR_15->special = VAR_18->special;
}
