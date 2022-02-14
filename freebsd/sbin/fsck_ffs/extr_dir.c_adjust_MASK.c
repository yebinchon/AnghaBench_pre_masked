
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef union dinode {int dummy; } dinode ;
struct inodesc {scalar_t__ id_number; } ;
typedef int ino_t ;
struct TYPE_3__ {scalar_t__ value; int size; } ;


 int FUNC_0 (union dinode*,int ) ;
 int FUNC_1 (union dinode*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (struct inodesc*,char*,int) ;
 TYPE_1__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 union dinode* FUNC_3 (scalar_t__) ;
 int FUNC_4 (union dinode*) ;
 scalar_t__ VAR_9 ;
 char* VAR_10 ;
 scalar_t__ FUNC_5 (scalar_t__,int ,int *) ;
 int FUNC_6 (char*) ;
 scalar_t__ VAR_11 ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (scalar_t__,union dinode*) ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (char*) ;
 int VAR_12 ;
 int FUNC_11 (char*,scalar_t__) ;
 int FUNC_12 (int ,int ,int ,int ,TYPE_1__*,int) ;
 scalar_t__ VAR_13 ;

void
FUNC_13(struct inodesc *VAR_14, int VAR_15)
{
 union dinode *VAR_16;
 int VAR_17;

 VAR_16 = FUNC_3(VAR_14->id_number);
 if (FUNC_0(VAR_16, VAR_8) == VAR_15) {





  if (VAR_12 && (VAR_11 || VAR_4) && VAR_13) {
   FUNC_2(VAR_14, "UNREF", 1);
   return;
  } else {






   VAR_17 = VAR_12;
   if (FUNC_5(VAR_14->id_number, (ino_t)0, ((void*)0)) == 0) {
    VAR_12 = VAR_17;
    FUNC_2(VAR_14, "UNREF", 0);
    return;
   }



   VAR_16 = FUNC_3(VAR_14->id_number);
   VAR_15--;
  }
 }
 if (VAR_15 != 0) {
  FUNC_9("LINK COUNT %s", (VAR_9 == VAR_14->id_number) ? VAR_10 :
   ((FUNC_0(VAR_16, VAR_7) & VAR_1) == VAR_0 ? "DIR" : "FILE"));
  FUNC_8(VAR_14->id_number, VAR_16);
  FUNC_7(" COUNT %d SHOULD BE %d",
   FUNC_0(VAR_16, VAR_8), FUNC_0(VAR_16, VAR_8) - VAR_15);
  if (VAR_11 || VAR_13) {
   if (VAR_15 < 0) {
    FUNC_7("\n");
    FUNC_6("LINK COUNT INCREASING");
   }
   if (VAR_11)
    FUNC_7(" (ADJUSTED)\n");
  }
  if (VAR_11 || FUNC_10("ADJUST") == 1) {
   if (VAR_4 == 0) {
    FUNC_1(VAR_16, VAR_8, FUNC_0(VAR_16, VAR_8) - VAR_15);
    FUNC_4(VAR_16);
   } else {
    VAR_5.value = VAR_14->id_number;
    VAR_5.size = -VAR_15;
    if (VAR_6)
     FUNC_7("adjrefcnt ino %ld amt %lld\n",
         (long)VAR_5.value,
         (long long)VAR_5.size);
    if (FUNC_12(VAR_3, VAR_2, 0, 0,
        &VAR_5, sizeof VAR_5) == -1)
     FUNC_11("ADJUST INODE", VAR_5.value);
   }
  }
 }
}
