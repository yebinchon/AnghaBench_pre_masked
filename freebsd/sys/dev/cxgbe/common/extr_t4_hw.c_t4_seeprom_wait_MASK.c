
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {unsigned int vpd_cap_addr; } ;
struct TYPE_4__ {TYPE_1__ pci; } ;
struct adapter {int vpd_flag; scalar_t__ vpd_busy; TYPE_2__ params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct adapter*,scalar_t__,int*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct adapter *VAR_5)
{
 unsigned int VAR_6 = VAR_5->params.pci.vpd_cap_addr;
 int VAR_7;





 if (!VAR_5->vpd_busy)
  return 0;





 VAR_7 = VAR_1;
 do {
  u16 VAR_8;

  FUNC_1(VAR_0);
  FUNC_0(VAR_5, VAR_6 + VAR_3, &VAR_8);





  if ((VAR_8 & VAR_4) == VAR_5->vpd_flag) {
   VAR_5->vpd_busy = 0;
   return 0;
  }
 } while (--VAR_7);
 return -VAR_2;
}
