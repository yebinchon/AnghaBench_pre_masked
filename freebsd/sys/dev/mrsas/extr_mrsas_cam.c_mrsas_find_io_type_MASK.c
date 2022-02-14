
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* cdb_bytes; } ;
struct ccb_scsiio {TYPE_1__ cdb_io; } ;
union ccb {struct ccb_scsiio csio; } ;
struct cam_sim {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;




 int FUNC_0 (struct cam_sim*) ;

int
FUNC_1(struct cam_sim *VAR_4, union ccb *VAR_5)
{
 struct ccb_scsiio *VAR_6 = &(VAR_5->csio);

 switch (VAR_6->cdb_io.cdb_bytes[0]) {
 case 135:
 case 131:
 case 134:
 case 130:
 case 132:
 case 128:
 case 133:
 case 129:
  return (FUNC_0(VAR_4) ?
      VAR_3 : VAR_2);
 default:
  return (FUNC_0(VAR_4) ?
      VAR_1 : VAR_0);
 }
}
