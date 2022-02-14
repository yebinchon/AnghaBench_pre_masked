
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsrv_descript {int nd_flag; } ;
struct nfsexstuff {int nes_numsecflavor; scalar_t__* nes_secflavors; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

int
FUNC_0(struct nfsrv_descript *VAR_7, struct nfsexstuff *VAR_8)
{
 int VAR_9;







 if (VAR_8->nes_numsecflavor == 0)
  return (0);

 for (VAR_9 = 0; VAR_9 < VAR_8->nes_numsecflavor; VAR_9++) {




  if (VAR_8->nes_secflavors[VAR_9] == VAR_6 &&
      (VAR_7->nd_flag & VAR_3))
   return (0);
  if (VAR_8->nes_secflavors[VAR_9] == VAR_5 &&
      (VAR_7->nd_flag & VAR_2))
   return (0);
  if (VAR_8->nes_secflavors[VAR_9] == VAR_4 &&
      (VAR_7->nd_flag & VAR_1))
   return (0);
  if (VAR_8->nes_secflavors[VAR_9] == VAR_0 &&
      (VAR_7->nd_flag & VAR_1) == 0)
   return (0);
 }
 return (1);
}
