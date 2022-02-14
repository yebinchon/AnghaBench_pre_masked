
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int target_id; scalar_t__ target_lun; int status; } ;
union ccb {TYPE_1__ ccb_h; } ;
struct ahci_channel {int caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ahci_channel*,union ccb*) ;

__attribute__((used)) static int
FUNC_1(struct ahci_channel *VAR_3, union ccb *VAR_4)
{

 if (VAR_4->ccb_h.target_id > ((VAR_3->caps & VAR_0) ? 15 : 0)) {
  VAR_4->ccb_h.status = VAR_2;
  FUNC_0(VAR_3, VAR_4);
  return (-1);
 }
 if (VAR_4->ccb_h.target_lun != 0) {
  VAR_4->ccb_h.status = VAR_1;
  FUNC_0(VAR_3, VAR_4);
  return (-1);
 }
 return (0);
}
