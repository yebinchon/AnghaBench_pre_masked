
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int blk_size; } ;
typedef TYPE_1__ ocs_scsi_dif_info_t ;
uint32_t
FUNC_0(ocs_scsi_dif_info_t *VAR_0)
{
 uint32_t VAR_1 = 0;

 switch(VAR_0->blk_size) {
 case 129: VAR_1 = 512; break;
 case 133: VAR_1 = 1024; break;
 case 132: VAR_1 = 2048; break;
 case 131: VAR_1 = 4096; break;
 case 128: VAR_1 = 520; break;
 case 130: VAR_1 = 4104; break;
 default:
  break;
 }

 return VAR_1;
}
