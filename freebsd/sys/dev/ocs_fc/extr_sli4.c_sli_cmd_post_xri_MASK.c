
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* uint16_t ;
struct TYPE_7__ {scalar_t__ auto_xfer_rdy; } ;
struct TYPE_8__ {TYPE_2__ config; } ;
typedef TYPE_3__ sli4_t ;
struct TYPE_6__ {int command; } ;
struct TYPE_9__ {void* val; void* enx; void* xri_count; void* xri_base; TYPE_1__ hdr; } ;
typedef TYPE_4__ sli4_cmd_post_xri_t ;
typedef int int32_t ;


 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (void*,int ,size_t) ;

int32_t
FUNC_1(sli4_t *VAR_2, void *VAR_3, size_t VAR_4, uint16_t VAR_5, uint16_t VAR_6)
{
 sli4_cmd_post_xri_t *VAR_7 = VAR_3;

 FUNC_0(VAR_3, 0, VAR_4);

 VAR_7->hdr.command = VAR_0;
 VAR_7->xri_base = VAR_5;
 VAR_7->xri_count = VAR_6;

 if (VAR_2->config.auto_xfer_rdy == 0) {
  VAR_7->enx = VAR_1;
  VAR_7->val = VAR_1;
 }

 return sizeof(sli4_cmd_post_xri_t);
}
