
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct ahci_channel {int listening; scalar_t__ pm_level; int caps; int r_mem; scalar_t__ pm_present; TYPE_1__* user; } ;
struct TYPE_2__ {int revision; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ahci_channel*,int ) ;
 int FUNC_4 (struct ahci_channel*) ;

__attribute__((used)) static int
FUNC_5(struct ahci_channel *VAR_12)
{
 int VAR_13;
 uint32_t VAR_14, VAR_15;

 if (VAR_12->listening) {
  VAR_14 = FUNC_0(VAR_12->r_mem, VAR_1);
  VAR_14 |= VAR_2;
  FUNC_1(VAR_12->r_mem, VAR_1, VAR_14);
  VAR_12->listening = 0;
 }
 VAR_13 = VAR_12->user[VAR_12->pm_present ? 15 : 0].revision;
 if (VAR_13 == 1)
  VAR_14 = VAR_9;
 else if (VAR_13 == 2)
  VAR_14 = VAR_10;
 else if (VAR_13 == 3)
  VAR_14 = VAR_11;
 else
  VAR_14 = 0;
 VAR_15 = FUNC_3(VAR_12, VAR_6);
 FUNC_1(VAR_12->r_mem, VAR_3,
     VAR_15 | VAR_14 |
     VAR_7 | VAR_8);
 FUNC_2(1000);
 VAR_15 = FUNC_3(VAR_12, VAR_5);
 FUNC_1(VAR_12->r_mem, VAR_3,
     VAR_15 | VAR_14 | ((VAR_12->pm_level > 0) ? 0 :
     (VAR_7 | VAR_8)));
 if (!FUNC_4(VAR_12)) {
  if (VAR_12->caps & VAR_0) {
   VAR_14 = FUNC_0(VAR_12->r_mem, VAR_1);
   VAR_14 &= ~VAR_2;
   FUNC_1(VAR_12->r_mem, VAR_1, VAR_14);
   VAR_12->listening = 1;
  } else if (VAR_12->pm_level > 0)
   FUNC_1(VAR_12->r_mem, VAR_3, VAR_4);
  return (0);
 }
 return (1);
}
