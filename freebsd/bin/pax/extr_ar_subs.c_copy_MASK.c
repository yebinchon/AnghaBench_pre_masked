
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct stat {scalar_t__ st_mtime; scalar_t__ st_ctime; int st_mode; } ;
typedef int dirbuf ;
struct TYPE_18__ {scalar_t__ st_mtime; scalar_t__ st_ctime; } ;
struct TYPE_19__ {char* name; int nlen; scalar_t__ type; char* org_name; TYPE_1__ sb; } ;
typedef TYPE_2__ ARCHD ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int,int) ;
 int FUNC_5 () ;
 int FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 () ;
 char* VAR_10 ;
 int VAR_11 ;
 int FUNC_8 (TYPE_2__*,int) ;
 int FUNC_9 (TYPE_2__*) ;
 int VAR_12 ;
 int FUNC_10 (char*,int ) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 (TYPE_2__*) ;
 scalar_t__ FUNC_14 () ;
 scalar_t__ VAR_13 ;
 int FUNC_15 (char*,char*,int) ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int FUNC_16 (TYPE_2__*) ;
 scalar_t__ FUNC_17 () ;
 scalar_t__ FUNC_18 (char*,struct stat*) ;
 int FUNC_19 (TYPE_2__*) ;
 scalar_t__ FUNC_20 () ;
 scalar_t__ FUNC_21 (TYPE_2__*) ;
 int FUNC_22 (TYPE_2__*) ;
 int FUNC_23 (char*,int ,int ) ;
 int FUNC_24 (int,char*,char*) ;
 int FUNC_25 () ;
 int FUNC_26 (TYPE_2__*) ;
 int FUNC_27 (char,int ) ;
 int FUNC_28 (TYPE_2__*,int*) ;
 int VAR_16 ;
 scalar_t__ FUNC_29 (TYPE_2__*) ;
 scalar_t__ FUNC_30 (TYPE_2__*,char*,int) ;
 int FUNC_31 (int ,int *,int *) ;
 scalar_t__ FUNC_32 (char*,struct stat*) ;
 int FUNC_33 (char*,char*,int) ;
 int FUNC_34 (int,int ,char*,char*) ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;

void
FUNC_35(void)
{
 ARCHD *VAR_20;
 int VAR_21;
 int VAR_22;
 char *VAR_23;
 int VAR_24;
 int VAR_25;
 int VAR_26 = -1;
 struct stat VAR_27;
 ARCHD VAR_28;
 char VAR_29[VAR_2+1];

 VAR_20 = &VAR_28;




 VAR_24 = FUNC_15(VAR_29, VAR_10, sizeof(VAR_29) - 1);
 VAR_23 = VAR_29 + VAR_24;
 if (*(VAR_23-1) != '/') {
  *VAR_23++ = '/';
  ++VAR_24;
 }
 *VAR_23 = '\0';
 VAR_25 = VAR_2 - VAR_24;

 if (FUNC_32(VAR_10, &VAR_27) < 0) {
  FUNC_34(1, VAR_11, "Cannot access destination directory %s",
   VAR_10);
  return;
 }
 if (!FUNC_0(VAR_27.st_mode)) {
  FUNC_24(1, "Destination is not a directory %s", VAR_10);
  return;
 }





 if ((FUNC_17() < 0) || (FUNC_14() < 0) || (FUNC_7() < 0))
  return;





 if (VAR_13 && (FUNC_20() < 0))
  return;




 FUNC_5();




 while (FUNC_21(VAR_20) == 0) {
  VAR_26 = -1;




  if (FUNC_29(VAR_20) != 0) {
   FUNC_12();
   continue;
  }
  if (VAR_17 || VAR_0) {



   if (*(VAR_20->name) == '/')
    VAR_21 = 1;
   else
    VAR_21 = 0;
   if ((VAR_20->nlen - VAR_21) > VAR_25) {
    FUNC_24(1, "Destination pathname too long %s",
     VAR_20->name);
    continue;
   }
   (void)FUNC_33(VAR_23, VAR_20->name + VAR_21, VAR_25);
   VAR_29[VAR_2] = '\0';




   VAR_21 = FUNC_18(VAR_29, &VAR_27);
   *VAR_23 = '\0';

       if (VAR_21 == 0) {
    if (VAR_17 && VAR_0) {
     if ((VAR_20->sb.st_mtime<=VAR_27.st_mtime) &&
             (VAR_20->sb.st_ctime<=VAR_27.st_ctime))
      continue;
    } else if (VAR_0) {
     if (VAR_20->sb.st_ctime <= VAR_27.st_ctime)
      continue;
    } else if (VAR_20->sb.st_mtime <= VAR_27.st_mtime)
     continue;
   }
  }






  FUNC_13(VAR_20);
  if ((FUNC_2(VAR_20) < 0) || ((VAR_21 = FUNC_19(VAR_20)) < 0))
   break;
  if ((VAR_21 > 0) || (FUNC_30(VAR_20, VAR_29, VAR_24) < 0)) {



   FUNC_26(VAR_20);
   continue;
  }





  if ((VAR_8 || VAR_9) && ((FUNC_18(VAR_20->name, &VAR_27) == 0))) {
   if (VAR_8 && VAR_9) {
    if ((VAR_20->sb.st_mtime <= VAR_27.st_mtime) &&
        (VAR_20->sb.st_ctime <= VAR_27.st_ctime))
     continue;
   } else if (VAR_8) {
    if (VAR_20->sb.st_ctime <= VAR_27.st_ctime)
     continue;
   } else if (VAR_20->sb.st_mtime <= VAR_27.st_mtime)
    continue;
  }

  if (VAR_18) {
   (void)FUNC_10(VAR_20->name, VAR_15);
   VAR_19 = 1;
  }
  ++VAR_12;





  if (VAR_14)
   VAR_21 = FUNC_6(VAR_20);
  else
   VAR_21 = FUNC_3(VAR_20);
  if (VAR_21 <= 0) {
   if (VAR_18 && VAR_19) {
    (void)FUNC_27('\n', VAR_15);
    VAR_19 = 0;
   }
   continue;
  }




  if ((VAR_20->type != VAR_6) && (VAR_20->type != VAR_3)) {



   if ((VAR_20->type == VAR_4) || (VAR_20->type == VAR_5))
    VAR_21 = FUNC_16(VAR_20);
   else
    VAR_21 = FUNC_22(VAR_20);
   if (VAR_21 < 0)
    FUNC_26(VAR_20);
   if (VAR_18 && VAR_19) {
    (void)FUNC_27('\n', VAR_15);
    VAR_19 = 0;
   }
   continue;
  }





  if ((VAR_26 = FUNC_23(VAR_20->org_name, VAR_1, 0)) < 0) {
   FUNC_34(1, VAR_11, "Unable to open %s to read",
       VAR_20->org_name);
   FUNC_26(VAR_20);
   continue;
  }
  if ((VAR_22 = FUNC_9(VAR_20)) < 0) {
   FUNC_28(VAR_20, &VAR_26);
   FUNC_26(VAR_20);
   continue;
  }




  FUNC_4(VAR_20, VAR_26, VAR_22);
  FUNC_8(VAR_20, VAR_22);
  FUNC_28(VAR_20, &VAR_26);

  if (VAR_18 && VAR_19) {
   (void)FUNC_27('\n', VAR_15);
   VAR_19 = 0;
  }
 }






 (void)FUNC_31(VAR_7, &VAR_16, ((void*)0));
 FUNC_1();
 FUNC_25();
 FUNC_11();
}
