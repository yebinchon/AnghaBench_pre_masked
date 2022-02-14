
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union dinode {int dummy; } dinode ;
struct inodesc {scalar_t__ id_number; int id_func; int id_type; } ;
typedef scalar_t__ ino_t ;
struct TYPE_4__ {scalar_t__ ino_state; } ;
struct TYPE_3__ {int fs_ncg; int fs_ipg; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 char* VAR_4 ;
 int FUNC_0 (union dinode*,struct inodesc*) ;
 int VAR_5 ;
 int VAR_6 ;
 union dinode* FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 TYPE_2__* FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct inodesc*,int ,int) ;
 int VAR_9 ;
 int FUNC_4 (char*,char*,int,int,int) ;
 int VAR_10 ;
 TYPE_1__ VAR_11 ;
 int FUNC_5 (char*,char*,int) ;

void
FUNC_6(void)
{
 int VAR_12, VAR_13;
 union dinode *VAR_14;
 struct inodesc VAR_15;
 ino_t VAR_16;

 FUNC_3(&VAR_15, 0, sizeof(struct inodesc));
 VAR_15.id_type = VAR_0;
 VAR_15.id_func = VAR_9;
 VAR_5 = VAR_6;
 VAR_16 = 0;
 for (VAR_12 = 0; VAR_12 < VAR_11.fs_ncg; VAR_12++) {
  if (VAR_8) {
   FUNC_4("%s: phase 1b: cyl group %d of %d (%d%%)\n",
       VAR_4, VAR_12, VAR_11.fs_ncg,
       VAR_12 * 100 / VAR_11.fs_ncg);
   VAR_8 = 0;
  }
  if (VAR_7) {
   FUNC_5("%s p1b %d%%", VAR_4,
       VAR_12 * 100 / VAR_11.fs_ncg);
   VAR_7 = 0;
  }
  for (VAR_13 = 0; VAR_13 < VAR_11.fs_ipg; VAR_13++, VAR_16++) {
   if (VAR_16 < VAR_2)
    continue;
   VAR_14 = FUNC_1(VAR_16);
   if (VAR_14 == ((void*)0))
    continue;
   VAR_15.id_number = VAR_16;
   if (FUNC_2(VAR_16)->ino_state != VAR_3 &&
       (FUNC_0(VAR_14, &VAR_15) & VAR_1)) {
    VAR_10 = 1;
    return;
   }
  }
 }
}
