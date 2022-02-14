
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef int sli4_t ;
struct TYPE_5__ {int command; } ;
struct TYPE_6__ {int ii; int index; TYPE_1__ hdr; } ;
typedef TYPE_2__ sli4_cmd_unreg_vfi_t ;
struct TYPE_7__ {int fcf_indicator; int indicator; } ;
typedef TYPE_3__ ocs_domain_t ;
typedef int int32_t ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*,int ,size_t) ;

int32_t
FUNC_1(sli4_t *VAR_3, void *VAR_4, size_t VAR_5, ocs_domain_t *VAR_6, uint32_t VAR_7)
{
 sli4_cmd_unreg_vfi_t *VAR_8 = VAR_4;

 if (!VAR_3 || !VAR_4 || !VAR_6) {
  return 0;
 }

 FUNC_0(VAR_4, 0, VAR_5);

 VAR_8->hdr.command = VAR_0;
 switch (VAR_7) {
 case 129:
  VAR_8->index = VAR_6->indicator;
  break;
 case 128:
  VAR_8->index = VAR_6->fcf_indicator;
  break;
 case 130:
  VAR_8->index = VAR_2;
  break;
 default:
  return 0;
 }

 if (129 != VAR_7) {
  VAR_8->ii = VAR_1;
 }

 return sizeof(sli4_cmd_unreg_vfi_t);
}
