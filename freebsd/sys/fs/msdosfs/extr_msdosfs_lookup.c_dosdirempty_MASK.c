
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_long ;
struct msdosfsmount {int pm_devvp; } ;
struct direntry {scalar_t__* deName; int deAttributes; } ;
struct denode {struct msdosfsmount* de_pmp; } ;
struct buf {char* b_data; } ;
typedef int daddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__*,char*,int) ;
 int FUNC_1 (int ,int ,int,int ,struct buf**) ;
 int FUNC_2 (struct buf*) ;
 int FUNC_3 (struct denode*,scalar_t__,int *,int ,int*) ;
 int FUNC_4 (char*,scalar_t__,scalar_t__) ;

int
FUNC_5(struct denode *VAR_5)
{
 int VAR_6;
 int VAR_7;
 u_long VAR_8;
 daddr_t VAR_9;
 struct buf *VAR_10;
 struct msdosfsmount *VAR_11 = VAR_5->de_pmp;
 struct direntry *VAR_12;






 for (VAR_8 = 0;; VAR_8++) {
  if ((VAR_7 = FUNC_3(VAR_5, VAR_8, &VAR_9, 0, &VAR_6)) != 0) {
   if (VAR_7 == VAR_1)
    return (1);
   return (0);
  }
  VAR_7 = FUNC_1(VAR_11->pm_devvp, VAR_9, VAR_6, VAR_2, &VAR_10);
  if (VAR_7) {
   return (0);
  }
  for (VAR_12 = (struct direntry *)VAR_10->b_data;
       (char *)VAR_12 < VAR_10->b_data + VAR_6;
       VAR_12++) {
   if (VAR_12->deName[0] != VAR_3 &&
       (VAR_12->deAttributes & VAR_0) == 0) {







    if (VAR_12->deName[0] == VAR_4) {
     FUNC_2(VAR_10);
     return (1);
    }




    if (FUNC_0(VAR_12->deName, ".          ", 11) &&
        FUNC_0(VAR_12->deName, "..         ", 11)) {
     FUNC_2(VAR_10);




     return (0);
    }
   }
  }
  FUNC_2(VAR_10);
 }

}
