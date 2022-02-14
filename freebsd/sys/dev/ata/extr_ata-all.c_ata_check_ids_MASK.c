
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ata_flags; } ;
struct TYPE_4__ {int target_id; scalar_t__ target_lun; scalar_t__ func_code; int status; } ;
union ccb {TYPE_1__ ataio; TYPE_2__ ccb_h; } ;
struct ata_channel {int flags; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_4 ;
 struct ata_channel* FUNC_1 (int ) ;
 int FUNC_2 (union ccb*) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_5, union ccb *VAR_6)
{
 struct ata_channel *VAR_7 = FUNC_1(VAR_5);

 if (VAR_6->ccb_h.target_id > ((VAR_7->flags & VAR_1) ? 0 : 1)) {
  VAR_6->ccb_h.status = VAR_3;
  FUNC_2(VAR_6);
  return (-1);
 }
 if (VAR_6->ccb_h.target_lun != 0) {
  VAR_6->ccb_h.status = VAR_2;
  FUNC_2(VAR_6);
  return (-1);
 }



 FUNC_0(VAR_6->ccb_h.func_code != VAR_4 ||
     ((VAR_6->ataio.ata_flags & VAR_0) == 0),
     ("AUX register unsupported"));
 return (0);
}
