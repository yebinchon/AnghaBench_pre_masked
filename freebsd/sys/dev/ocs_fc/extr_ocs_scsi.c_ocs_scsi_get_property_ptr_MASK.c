
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_10__ {int hw; TYPE_2__* domain; } ;
typedef TYPE_3__ ocs_t ;
typedef int ocs_scsi_property_e ;
struct TYPE_9__ {TYPE_1__* sport; } ;
struct TYPE_8__ {int * wwnn_str; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;






 void* FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (int *,int ,int *) ;
 void* FUNC_2 (int *,int ) ;
 int FUNC_3 (TYPE_3__*,char*,int) ;
 int FUNC_4 (TYPE_3__*,char*) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (TYPE_3__*,char*) ;

void *FUNC_7(ocs_t *VAR_6, ocs_scsi_property_e VAR_7)
{
 void *VAR_8 = ((void*)0);

 switch (VAR_7) {
 case 129:
  VAR_8 = FUNC_2(&VAR_6->hw, VAR_4);
  break;
 case 128:
  VAR_8 = FUNC_2(&VAR_6->hw, VAR_5);
  break;
 case 131:
  VAR_8 = FUNC_2(&VAR_6->hw, VAR_1);
  break;
 case 133:
  VAR_8 = FUNC_2(&VAR_6->hw, VAR_0);
  break;
 default:
  break;
 }

 if (VAR_8 == ((void*)0)) {
  FUNC_3(VAR_6, "invalid property request %d\n", VAR_7);
 }
 return VAR_8;
}
