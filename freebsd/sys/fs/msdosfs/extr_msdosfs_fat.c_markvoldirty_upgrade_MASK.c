
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_long ;
struct msdosfsmount {int pm_flags; int pm_devvp; } ;
struct buf {int b_flags; int * b_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct msdosfsmount*) ;
 scalar_t__ FUNC_1 (struct msdosfsmount*) ;
 size_t FUNC_2 (struct msdosfsmount*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,size_t,size_t,int ,struct buf**) ;
 int FUNC_4 (struct buf*) ;
 int FUNC_5 (struct msdosfsmount*,size_t,size_t*,size_t*,size_t*) ;
 size_t FUNC_6 (int *) ;
 size_t FUNC_7 (int *) ;
 int FUNC_8 (int *,size_t) ;
 int FUNC_9 (int *,size_t) ;

int
FUNC_10(struct msdosfsmount *VAR_4, bool VAR_5, bool VAR_6)
{
 struct buf *VAR_7;
 u_long VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
 int VAR_13;





 if (FUNC_0(VAR_4))
  return (0);





 if ((VAR_4->pm_flags & VAR_2) != 0 && !VAR_6)
  return (VAR_1);





 VAR_11 = FUNC_2(VAR_4, 1);
 FUNC_5(VAR_4, VAR_11, &VAR_8, &VAR_10, &VAR_9);
 VAR_13 = FUNC_3(VAR_4->pm_devvp, VAR_8, VAR_10, VAR_3, &VAR_7);
 if (VAR_13)
  return (VAR_13);






 if (FUNC_1(VAR_4)) {

  VAR_12 = FUNC_6(&VAR_7->b_data[VAR_9]);
  if (VAR_5)
   VAR_12 &= 0xF7FFFFFF;
  else
   VAR_12 |= 0x08000000;
  FUNC_8(&VAR_7->b_data[VAR_9], VAR_12);
 } else {

  VAR_12 = FUNC_7(&VAR_7->b_data[VAR_9]);
  if (VAR_5)
   VAR_12 &= 0x7FFF;
  else
   VAR_12 |= 0x8000;
  FUNC_9(&VAR_7->b_data[VAR_9], VAR_12);
 }
 VAR_7->b_flags |= VAR_0;


 return (FUNC_4(VAR_7));
}
