
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef union dinode {int dummy; } dinode ;
typedef int uintmax_t ;
struct inodesc {int id_number; int id_func; int id_type; } ;
typedef int ino_t ;
struct TYPE_6__ {int ino_state; int ino_linkcnt; } ;
struct TYPE_5__ {int il_numalloced; } ;
struct TYPE_4__ {int fs_ncg; int fs_ipg; } ;


 int VAR_0 ;


 int FUNC_0 (union dinode*,int ) ;


 int VAR_1 ;



 int VAR_2 ;

 int FUNC_1 (struct inodesc*,short) ;
 char* VAR_3 ;
 int FUNC_2 (struct inodesc*,char*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,char*,int,int ) ;
 union dinode* FUNC_4 (int) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_3__* FUNC_5 (int) ;
 TYPE_2__* VAR_8 ;
 int FUNC_6 (struct inodesc*,int ,int) ;
 int VAR_9 ;
 int FUNC_7 (char*,char*,int,int,int) ;
 TYPE_1__ VAR_10 ;
 int FUNC_8 (char*,char*,int) ;

void
FUNC_9(void)
{
 ino_t VAR_11;
 union dinode *VAR_12;
 struct inodesc VAR_13;
 int VAR_14, VAR_15, VAR_16;

 FUNC_6(&VAR_13, 0, sizeof(struct inodesc));
 VAR_13.id_type = VAR_0;
 VAR_13.id_func = VAR_9;
 for (VAR_16 = 0; VAR_16 < VAR_10.fs_ncg; VAR_16++) {
  if (VAR_7) {
   FUNC_7("%s: phase 4: cyl group %d of %d (%d%%)\n",
       VAR_3, VAR_16, VAR_10.fs_ncg,
       VAR_16 * 100 / VAR_10.fs_ncg);
   VAR_7 = 0;
  }
  if (VAR_6) {
   FUNC_8("%s p4 %d%%", VAR_3,
       VAR_16 * 100 / VAR_10.fs_ncg);
   VAR_6 = 0;
  }
  VAR_11 = VAR_16 * VAR_10.fs_ipg;
  for (VAR_14 = 0; VAR_14 < VAR_8[VAR_16].il_numalloced; VAR_14++, VAR_11++) {
   if (VAR_11 < VAR_2)
    continue;
   VAR_13.id_number = VAR_11;
   switch (FUNC_5(VAR_11)->ino_state) {

   case 129:
   case 132:
    if (FUNC_5(VAR_11)->ino_linkcnt == 0) {
     FUNC_2(&VAR_13, "UNREF", 1);
     break;
    }


   case 130:
   case 134:
    VAR_15 = FUNC_5(VAR_11)->ino_linkcnt;
    if (VAR_15) {
     FUNC_1(&VAR_13, (short)VAR_15);
     break;
    }
    break;

   case 133:
    FUNC_2(&VAR_13, "UNREF", 1);
    break;

   case 135:

    if (VAR_4 != 0)
     break;
    VAR_12 = FUNC_4(VAR_11);
    if (FUNC_0(VAR_12, VAR_5) == 0) {
     FUNC_2(&VAR_13, "ZERO LENGTH", 1);
     break;
    }

   case 131:
    FUNC_2(&VAR_13, "BAD/DUP", 1);
    break;

   case 128:
    break;

   default:
    FUNC_3(VAR_1, "BAD STATE %d FOR INODE I=%ju",
        FUNC_5(VAR_11)->ino_state,
        (uintmax_t)VAR_11);
   }
  }
 }
}
