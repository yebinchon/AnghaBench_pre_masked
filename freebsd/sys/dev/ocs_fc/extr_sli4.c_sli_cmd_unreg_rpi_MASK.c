
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_6__ {int os; } ;
typedef TYPE_2__ sli4_t ;
typedef int sli4_resource_e ;
struct TYPE_5__ {int command; } ;
struct TYPE_7__ {int destination_n_port_id; int index; int ii; int dp; TYPE_1__ hdr; } ;
typedef TYPE_3__ sli4_cmd_unreg_rpi_t ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (void*,int ,size_t) ;

int32_t
FUNC_2(sli4_t *VAR_7, void *VAR_8, size_t VAR_9, uint16_t VAR_10, sli4_resource_e VAR_11,
  uint32_t VAR_12)
{
 sli4_cmd_unreg_rpi_t *VAR_13 = VAR_8;
 uint8_t VAR_14 = 0;

 if (!VAR_7 || !VAR_8) {
  return 0;
 }

 FUNC_1(VAR_8, 0, VAR_9);

 VAR_13->hdr.command = VAR_0;

 switch (VAR_11) {
 case 130:
  VAR_14 = VAR_2;
  if (VAR_12 != VAR_6) {
   VAR_13->dp = VAR_5;
   VAR_13->destination_n_port_id = VAR_12 & 0x00ffffff;
  }
  break;
 case 128:
  VAR_14 = VAR_4;
  break;
 case 129:
  VAR_14 = VAR_3;
  break;
 case 131:
  VAR_14 = VAR_1;
  break;
 default:
  FUNC_0(VAR_7->os, "unknown type %#x\n", VAR_11);
  return 0;
 }

 VAR_13->ii = VAR_14;
 VAR_13->index = VAR_10;

 return sizeof(sli4_cmd_unreg_rpi_t);
}
