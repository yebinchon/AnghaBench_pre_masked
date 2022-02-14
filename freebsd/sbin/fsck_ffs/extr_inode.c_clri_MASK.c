
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef union dinode {int dummy; } dinode ;
struct inodesc {scalar_t__ id_number; } ;
struct TYPE_5__ {int ino_state; } ;
struct TYPE_4__ {int size; scalar_t__ value; } ;


 int FUNC_0 (union dinode*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (union dinode*,struct inodesc*) ;
 int FUNC_2 (union dinode*) ;
 TYPE_1__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 union dinode* FUNC_3 (scalar_t__) ;
 int FUNC_4 (union dinode*) ;
 TYPE_2__* FUNC_5 (scalar_t__) ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (scalar_t__,union dinode*) ;
 int FUNC_8 (char*,char const*,char*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,scalar_t__) ;
 int FUNC_11 (int ,int ,int ,int ,TYPE_1__*,int) ;

void
FUNC_12(struct inodesc *VAR_12, const char *VAR_13, int VAR_14)
{
 union dinode *VAR_15;

 VAR_15 = FUNC_3(VAR_12->id_number);
 if (VAR_14 == 1) {
  FUNC_8("%s %s", VAR_13,
      (FUNC_0(VAR_15, VAR_8) & VAR_1) == VAR_0 ? "DIR" : "FILE");
  FUNC_7(VAR_12->id_number, VAR_15);
  FUNC_6("\n");
 }
 if (VAR_11 || FUNC_9("CLEAR") == 1) {
  if (VAR_11)
   FUNC_6(" (CLEARED)\n");
  VAR_10--;
  if (VAR_5 == 0) {
   (void)FUNC_1(VAR_15, VAR_12);
   FUNC_5(VAR_12->id_number)->ino_state = VAR_3;
   FUNC_2(VAR_15);
   FUNC_4(VAR_15);
  } else {
   VAR_6.value = VAR_12->id_number;
   VAR_6.size = -FUNC_0(VAR_15, VAR_9);
   if (VAR_7)
    FUNC_6("adjrefcnt ino %ld amt %lld\n",
        (long)VAR_6.value, (long long)VAR_6.size);
   if (FUNC_11(VAR_4, VAR_2, 0, 0,
       &VAR_6, sizeof VAR_6) == -1)
    FUNC_10("ADJUST INODE", VAR_6.value);
  }
 }
}
