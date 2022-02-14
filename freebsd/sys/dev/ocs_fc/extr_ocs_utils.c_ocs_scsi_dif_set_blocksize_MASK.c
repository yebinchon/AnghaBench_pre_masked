
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int blk_size; } ;
typedef TYPE_1__ ocs_scsi_dif_info_t ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

int32_t
FUNC_0(ocs_scsi_dif_info_t *VAR_6, uint32_t VAR_7)
{
 int32_t VAR_8 = 0;

 switch(VAR_7) {
 case 512: VAR_6->blk_size = VAR_4; break;
 case 1024: VAR_6->blk_size = VAR_0; break;
 case 2048: VAR_6->blk_size = VAR_1; break;
 case 4096: VAR_6->blk_size = VAR_2; break;
 case 520: VAR_6->blk_size = VAR_5; break;
 case 4104: VAR_6->blk_size = VAR_3; break;
 default:
  VAR_8 = -1;
  break;
 }
 return VAR_8;

}
