
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int io_pool; } ;
typedef TYPE_1__ ocs_xport_t ;
struct TYPE_6__ {int ctrlmask; int hw; TYPE_1__* xport; } ;
typedef TYPE_2__ ocs_t ;
typedef int ocs_scsi_property_e ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;







 int FUNC_0 (int *,int ,int*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,char*,int) ;

uint32_t
FUNC_3(ocs_t *VAR_7, ocs_scsi_property_e VAR_8)
{
 ocs_xport_t *VAR_9 = VAR_7->xport;
 uint32_t VAR_10;

 switch (VAR_8) {
 case 129:
  if (0 == FUNC_0(&VAR_7->hw, VAR_4, &VAR_10)) {
   return VAR_10;
  }
  break;
 case 128:
  if (VAR_7->ctrlmask & VAR_0) {




   return (VAR_1);
  }
  if (0 == FUNC_0(&VAR_7->hw, VAR_5, &VAR_10)) {
   return VAR_10;
  }
  break;
 case 130:
  return FUNC_1(VAR_9->io_pool);
 case 134:
         if (0 == FUNC_0(&VAR_7->hw, VAR_2, &VAR_10)) {
                 return VAR_10;
         }
  break;
 case 131:
  return 0;
 case 133:
         if (FUNC_0(&VAR_7->hw, VAR_3, &VAR_10) == 0) {
                 return VAR_10;
         }
  break;
 case 132:

  if (FUNC_0(&VAR_7->hw, VAR_6, &VAR_10) == 0) {
   return ! VAR_10;
  }
  break;
 default:
  break;
 }

 FUNC_2(VAR_7, "invalid property request %d\n", VAR_8);
 return 0;
}
