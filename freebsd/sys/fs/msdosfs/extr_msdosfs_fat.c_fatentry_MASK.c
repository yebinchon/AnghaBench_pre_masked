
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct msdosfsmount {int pm_maxcluster; int pm_fatmask; int pm_fmod; int pm_devvp; } ;
struct buf {int b_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct msdosfsmount*) ;


 scalar_t__ FUNC_1 (struct msdosfsmount*) ;

 int FUNC_2 (struct msdosfsmount*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,int,int,int ,struct buf**) ;
 int FUNC_4 (struct buf*) ;
 int FUNC_5 (struct msdosfsmount*,int,int*,int*,int*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (int,int) ;
 int FUNC_10 (int,int) ;
 int FUNC_11 (struct msdosfsmount*,struct buf*,int) ;

int
FUNC_12(int VAR_6, struct msdosfsmount *VAR_7, u_long VAR_8, u_long *VAR_9,
    u_long VAR_10)
{
 int VAR_11;
 u_long VAR_12;
 u_long VAR_13, VAR_14, VAR_15, VAR_16;
 struct buf *VAR_17;
 if (VAR_8 < VAR_0 || VAR_8 > VAR_7->pm_maxcluster)
  return (VAR_2);

 VAR_16 = FUNC_2(VAR_7, VAR_8);
 FUNC_5(VAR_7, VAR_16, &VAR_13, &VAR_15, &VAR_14);
 VAR_11 = FUNC_3(VAR_7->pm_devvp, VAR_13, VAR_15, VAR_5, &VAR_17);
 if (VAR_11) {
  return (VAR_11);
 }

 if (VAR_6 & VAR_3) {
  if (FUNC_1(VAR_7))
   VAR_12 = FUNC_6(VAR_17->b_data + VAR_14);
  else
   VAR_12 = FUNC_7(VAR_17->b_data + VAR_14);
  if (FUNC_0(VAR_7) & (VAR_8 & 1))
   VAR_12 >>= 4;
  VAR_12 &= VAR_7->pm_fatmask;

  if ((VAR_12 | ~VAR_7->pm_fatmask) >= VAR_1)
   VAR_12 |= ~VAR_7->pm_fatmask;
  *VAR_9 = VAR_12;
 }
 if (VAR_6 & VAR_4) {
  switch (VAR_7->pm_fatmask) {
  case 130:
   VAR_12 = FUNC_7(VAR_17->b_data + VAR_14);
   if (VAR_8 & 1) {
    VAR_12 &= 0x000f;
    VAR_12 |= VAR_10 << 4;
   } else {
    VAR_12 &= 0xf000;
    VAR_12 |= VAR_10 & 0xfff;
   }
   FUNC_10(VAR_17->b_data + VAR_14, VAR_12);
   break;
  case 129:
   FUNC_10(VAR_17->b_data + VAR_14, VAR_10);
   break;
  case 128:




   VAR_12 = FUNC_6(VAR_17->b_data + VAR_14);
   VAR_12 &= ~128;
   VAR_12 |= VAR_10 & 128;
   FUNC_9(VAR_17->b_data + VAR_14, VAR_12);
   break;
  }
  FUNC_11(VAR_7, VAR_17, VAR_13);
  VAR_17 = ((void*)0);
  VAR_7->pm_fmod = 1;
 }
 if (VAR_17)
  FUNC_4(VAR_17);
 return (0);
}
