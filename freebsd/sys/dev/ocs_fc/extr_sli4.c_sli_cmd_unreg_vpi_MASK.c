
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
typedef int sli4_t ;
struct TYPE_3__ {int command; } ;
struct TYPE_4__ {void* ii; int index; TYPE_1__ hdr; } ;
typedef TYPE_2__ sli4_cmd_unreg_vpi_t ;
typedef int int32_t ;


 int VAR_0 ;




 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (void*,int ,size_t) ;

int32_t
FUNC_1(sli4_t *VAR_5, void *VAR_6, size_t VAR_7, uint16_t VAR_8, uint32_t VAR_9)
{
 sli4_cmd_unreg_vpi_t *VAR_10 = VAR_6;

 if (!VAR_5 || !VAR_6) {
  return 0;
 }

 FUNC_0(VAR_6, 0, VAR_7);

 VAR_10->hdr.command = VAR_0;
 VAR_10->index = VAR_8;
 switch (VAR_9) {
 case 128:
  VAR_10->ii = VAR_3;
  break;
 case 130:
  VAR_10->ii = VAR_2;
  break;
 case 129:
  VAR_10->ii = VAR_1;
  break;
 case 131:
  VAR_10->index = VAR_4;
  VAR_10->ii = VAR_1;
  break;
 default:
  return 0;
 }

 return sizeof(sli4_cmd_unreg_vpi_t);
}
