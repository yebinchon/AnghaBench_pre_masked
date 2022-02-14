
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_14__ ;


typedef int time_t ;
struct stat {scalar_t__ st_mtime; scalar_t__ st_ctime; } ;
typedef scalar_t__ off_t ;
struct TYPE_18__ {scalar_t__ st_mtime; scalar_t__ st_ctime; } ;
struct TYPE_20__ {scalar_t__ type; TYPE_2__* pat; scalar_t__ pad; scalar_t__ skip; int name; TYPE_1__ sb; } ;
struct TYPE_19__ {int * chdname; } ;
struct TYPE_17__ {scalar_t__ (* options ) () ;scalar_t__ (* st_rd ) () ;int (* rd_data ) (TYPE_3__*,int,scalar_t__*) ;int (* end_rd ) () ;} ;
typedef TYPE_3__ ARCHD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_8 ;
 scalar_t__ FUNC_2 () ;
 int VAR_9 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (TYPE_3__*,int) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int ,int ) ;
 TYPE_14__* VAR_10 ;
 scalar_t__ FUNC_7 () ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*,int ,int ) ;
 scalar_t__ FUNC_10 (int ,struct stat*) ;
 int FUNC_11 (TYPE_3__*) ;
 scalar_t__ FUNC_12 () ;
 scalar_t__ FUNC_13 (TYPE_3__*) ;
 int FUNC_14 (TYPE_3__*) ;
 int FUNC_15 () ;
 int FUNC_16 (TYPE_3__*) ;
 scalar_t__ FUNC_17 (TYPE_3__*) ;
 int FUNC_18 () ;
 int FUNC_19 (TYPE_3__*) ;
 int FUNC_20 (char,int ) ;
 int FUNC_21 (scalar_t__) ;
 int VAR_13 ;
 scalar_t__ FUNC_22 (TYPE_3__*) ;
 int FUNC_23 (int ,int *,int *) ;
 scalar_t__ FUNC_24 () ;
 scalar_t__ FUNC_25 () ;
 int FUNC_26 (TYPE_3__*,int,scalar_t__*) ;
 int FUNC_27 () ;
 int FUNC_28 (int,int ,char*,...) ;
 int FUNC_29 (int *) ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;

void
FUNC_30(void)
{
 ARCHD *VAR_17;
 int VAR_18;
 off_t VAR_19;
 ARCHD VAR_20;
 struct stat VAR_21;
 int VAR_22;
 time_t VAR_23;

 VAR_17 = &VAR_20;





 if ((FUNC_7() < 0) || ((*VAR_10->options)() < 0) ||
     ((*VAR_10->st_rd)() < 0) || (FUNC_2() < 0))
  return;





 if (VAR_11 && (FUNC_12() < 0))
  return;

 VAR_23 = FUNC_29(((void*)0));





 while (FUNC_13(VAR_17) == 0) {





  if ((VAR_18 = FUNC_16(VAR_17)) < 0)
   break;

  if ((VAR_18 > 0) || (FUNC_22(VAR_17) != 0)) {




   (void)FUNC_21(VAR_17->skip + VAR_17->pad);
   continue;
  }
  if ((VAR_14 || VAR_0) && ((FUNC_10(VAR_17->name, &VAR_21) == 0))) {
   if (VAR_14 && VAR_0) {
    if ((VAR_17->sb.st_mtime <= VAR_21.st_mtime) &&
        (VAR_17->sb.st_ctime <= VAR_21.st_ctime)) {
     (void)FUNC_21(VAR_17->skip + VAR_17->pad);
     continue;
    }
   } else if (VAR_0) {
    if (VAR_17->sb.st_ctime <= VAR_21.st_ctime) {
     (void)FUNC_21(VAR_17->skip + VAR_17->pad);
     continue;
    }
   } else if (VAR_17->sb.st_mtime <= VAR_21.st_mtime) {
    (void)FUNC_21(VAR_17->skip + VAR_17->pad);
    continue;
   }
  }




  if ((FUNC_17(VAR_17) < 0) || ((VAR_18 = FUNC_11(VAR_17)) < 0))
   break;
  if (VAR_18 > 0) {



   FUNC_19(VAR_17);
   (void)FUNC_21(VAR_17->skip + VAR_17->pad);
   continue;
  }





  if ((VAR_6 || VAR_7) && ((FUNC_10(VAR_17->name, &VAR_21) == 0))) {
   if (VAR_6 && VAR_7) {
    if ((VAR_17->sb.st_mtime <= VAR_21.st_mtime) &&
        (VAR_17->sb.st_ctime <= VAR_21.st_ctime)) {
     (void)FUNC_21(VAR_17->skip + VAR_17->pad);
     continue;
    }
   } else if (VAR_6) {
    if (VAR_17->sb.st_ctime <= VAR_21.st_ctime) {
     (void)FUNC_21(VAR_17->skip + VAR_17->pad);
     continue;
    }
   } else if (VAR_17->sb.st_mtime <= VAR_21.st_mtime) {
    (void)FUNC_21(VAR_17->skip + VAR_17->pad);
    continue;
   }
  }

  if (VAR_15) {
   if (VAR_15 > 1)
    FUNC_9(VAR_17, VAR_23, VAR_12);
   else {
    (void)FUNC_6(VAR_17->name, VAR_12);
    VAR_16 = 1;
   }
  }




  if ((VAR_17->pat != ((void*)0)) && (VAR_17->pat->chdname != ((void*)0)))
   if (FUNC_1(VAR_17->pat->chdname) != 0)
    FUNC_28(1, VAR_9, "Cannot chdir to %s",
        VAR_17->pat->chdname);




  if ((VAR_17->type != VAR_4) && (VAR_17->type != VAR_1)) {





   if ((VAR_17->type == VAR_2) || (VAR_17->type == VAR_3))
    VAR_18 = FUNC_8(VAR_17);
   else
    VAR_18 = FUNC_14(VAR_17);

   (void)FUNC_21(VAR_17->skip + VAR_17->pad);
   if (VAR_18 < 0)
    FUNC_19(VAR_17);

   if (VAR_15 && VAR_16) {
    (void)FUNC_20('\n', VAR_12);
    VAR_16 = 0;
   }
   continue;
  }




  if ((VAR_22 = FUNC_5(VAR_17)) < 0) {
   (void)FUNC_21(VAR_17->skip + VAR_17->pad);
   FUNC_19(VAR_17);
   continue;
  }




  VAR_18 = (*VAR_10->rd_data)(VAR_17, VAR_22, &VAR_19);
  FUNC_4(VAR_17, VAR_22);
  if (VAR_15 && VAR_16) {
   (void)FUNC_20('\n', VAR_12);
   VAR_16 = 0;
  }
  if (!VAR_18)
   (void)FUNC_21(VAR_19 + VAR_17->pad);




  if ((VAR_17->pat != ((void*)0)) && (VAR_17->pat->chdname != ((void*)0)))
   if (FUNC_3(VAR_8) != 0)
    FUNC_28(1, VAR_9,
        "Can't fchdir to starting directory");
 }






 (void)(*VAR_10->end_rd)();
 (void)FUNC_23(VAR_5, &VAR_13, ((void*)0));
 FUNC_0();
 FUNC_18();
 FUNC_15();
}
