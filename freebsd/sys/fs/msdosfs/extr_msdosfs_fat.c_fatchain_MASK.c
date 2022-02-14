
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct msdosfsmount {int pm_maxcluster; int pm_fatmask; int pm_fmod; int pm_devvp; } ;
struct buf {int b_data; } ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (struct msdosfsmount*,int) ;
 int VAR_2 ;
 int FUNC_1 (int ,int,int,int ,struct buf**) ;
 int FUNC_2 (struct msdosfsmount*,int,int*,int*,int*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,struct msdosfsmount*,int,int,int) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (struct msdosfsmount*,struct buf*,int) ;

__attribute__((used)) static int
FUNC_9(struct msdosfsmount *VAR_3, u_long VAR_4, u_long VAR_5, u_long VAR_6)
{
 int VAR_7;
 u_long VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
 struct buf *VAR_14;
 if (VAR_4 < VAR_0 || VAR_4 + VAR_5 - 1 > VAR_3->pm_maxcluster)
  return (VAR_1);

 while (VAR_5 > 0) {
  VAR_11 = FUNC_0(VAR_3, VAR_4);
  FUNC_2(VAR_3, VAR_11, &VAR_8, &VAR_10, &VAR_9);
  VAR_7 = FUNC_1(VAR_3->pm_devvp, VAR_8, VAR_10, VAR_2, &VAR_14);
  if (VAR_7) {
   return (VAR_7);
  }
  while (VAR_5 > 0) {
   VAR_4++;
   VAR_13 = --VAR_5 > 0 ? VAR_4 : VAR_6;
   switch (VAR_3->pm_fatmask) {
   case 130:
    VAR_12 = FUNC_4(VAR_14->b_data + VAR_9);
    if (VAR_4 & 1) {
     VAR_12 &= 0xf000;
     VAR_12 |= VAR_13 & 0xfff;
    } else {
     VAR_12 &= 0x000f;
     VAR_12 |= VAR_13 << 4;
    }
    FUNC_7(VAR_14->b_data + VAR_9, VAR_12);
    VAR_9++;
    if (!(VAR_4 & 1))
     VAR_9++;
    break;
   case 129:
    FUNC_7(VAR_14->b_data + VAR_9, VAR_13);
    VAR_9 += 2;
    break;
   case 128:
    VAR_12 = FUNC_3(VAR_14->b_data + VAR_9);
    VAR_12 &= ~VAR_3->pm_fatmask;
    VAR_12 |= VAR_13 & VAR_3->pm_fatmask;
    FUNC_6(VAR_14->b_data + VAR_9, VAR_12);
    VAR_9 += 4;
    break;
   }
   if (VAR_9 >= VAR_10)
    break;
  }
  FUNC_8(VAR_3, VAR_14, VAR_8);
 }
 VAR_3->pm_fmod = 1;
 return (0);
}
