
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
typedef int sli4_t ;
struct TYPE_3__ {int command; } ;
struct TYPE_4__ {int vfi; int fcfi; int vpi; int vp; TYPE_1__ hdr; } ;
typedef TYPE_2__ sli4_cmd_init_vfi_t ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,int ,size_t) ;

int32_t
FUNC_1(sli4_t *VAR_2, void *VAR_3, size_t VAR_4, uint16_t VAR_5,
  uint16_t VAR_6, uint16_t VAR_7)
{
 sli4_cmd_init_vfi_t *VAR_8 = VAR_3;

 FUNC_0(VAR_3, 0, VAR_4);

 VAR_8->hdr.command = VAR_0;

 VAR_8->vfi = VAR_5;
 VAR_8->fcfi = VAR_6;





 if (0xffff != VAR_7) {
  VAR_8->vp = VAR_1;
  VAR_8->vpi = VAR_7;
 }

 return sizeof(sli4_cmd_init_vfi_t);
}
