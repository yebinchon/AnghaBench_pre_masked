
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct utimbuf {int modtime; int actime; } ;
typedef int off_t ;
struct TYPE_6__ {int type; char* name; char* path; } ;
typedef TYPE_1__ GNode ;
typedef int Boolean ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_13 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,char*,...) ;
 int FUNC_6 (int,int ,int ) ;
 int VAR_14 ;
 int FUNC_7 (char*,int,int) ;
 int FUNC_8 (int,char*,int) ;
 int VAR_15 ;
 char* FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (char*,struct utimbuf*) ;
 int FUNC_11 (int,char*,int) ;

void
FUNC_12(GNode *VAR_16, Boolean VAR_17)
{
    int VAR_18;
    struct utimbuf VAR_19;

    if (VAR_16->type & (VAR_3|VAR_8|VAR_9|VAR_2|VAR_5|
 VAR_7|VAR_6)) {




 return;
    }

    if (!VAR_17 || FUNC_2(VAR_16)) {
 (void)FUNC_5(VAR_15, "touch %s\n", VAR_16->name);
 (void)FUNC_4(VAR_15);
    }

    if (FUNC_2(VAR_16)) {
 return;
    }

    if (VAR_16->type & VAR_1) {
 FUNC_0(VAR_16);
    } else if (VAR_16->type & VAR_4) {
 FUNC_1(VAR_16);
    } else {
 char *VAR_20 = VAR_16->path ? VAR_16->path : VAR_16->name;

 VAR_19.actime = VAR_19.modtime = VAR_14;
 if (FUNC_10(VAR_20, &VAR_19) < 0){
     VAR_18 = FUNC_7(VAR_20, VAR_11 | VAR_10, 0666);

     if (VAR_18 >= 0) {
  char VAR_21;





  if (FUNC_8(VAR_18, &VAR_21, 1) == 1) {
      (void)FUNC_6(VAR_18, (off_t)0, VAR_12);
      while (FUNC_11(VAR_18, &VAR_21, 1) == -1 && VAR_13 == VAR_0)
   continue;
  }

  (void)FUNC_3(VAR_18);
     } else {
  (void)FUNC_5(VAR_15, "*** couldn't touch %s: %s",
          VAR_20, FUNC_9(VAR_13));
  (void)FUNC_4(VAR_15);
     }
 }
    }
}
