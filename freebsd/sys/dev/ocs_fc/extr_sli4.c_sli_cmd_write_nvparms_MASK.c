
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int sli4_t ;
struct TYPE_3__ {int command; } ;
struct TYPE_4__ {int preferred_d_id; int hard_alpa; int wwnn; int wwpn; TYPE_1__ hdr; } ;
typedef TYPE_2__ sli4_cmd_write_nvparms_t ;
typedef int int32_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int) ;
 int FUNC_1 (void*,int ,size_t) ;

int32_t
FUNC_2(sli4_t *VAR_1, void *VAR_2, size_t VAR_3, uint8_t *VAR_4, uint8_t *VAR_5, uint8_t VAR_6,
  uint32_t VAR_7)
{
 sli4_cmd_write_nvparms_t *VAR_8 = VAR_2;

 FUNC_1(VAR_2, 0, VAR_3);

 VAR_8->hdr.command = VAR_0;
 FUNC_0(VAR_8->wwpn, VAR_4, 8);
 FUNC_0(VAR_8->wwnn, VAR_5, 8);
 VAR_8->hard_alpa = VAR_6;
 VAR_8->preferred_d_id = VAR_7;

 return sizeof(sli4_cmd_write_nvparms_t);
}
