
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int64_t ;
typedef size_t u_int32_t ;
struct hpt_iop_request_header {int flags; int context; int type; int size; } ;
struct TYPE_5__ {int inlist_wptr; size_t list_count; TYPE_1__* inlist; } ;
struct TYPE_6__ {TYPE_2__ mvfrey; } ;
struct hpt_iop_hba {int ctlcfgcmd_phy; scalar_t__ config_done; TYPE_3__ u; } ;
struct TYPE_4__ {int addr; int intrfc_len; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct hpt_iop_hba*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_4(struct hpt_iop_hba *VAR_6,
     void *VAR_7, u_int32_t VAR_8)
{
 u_int32_t VAR_9, VAR_10;
 u_int64_t VAR_11;
 struct hpt_iop_request_header *VAR_12 =
          (struct hpt_iop_request_header *)VAR_7;

 VAR_6->config_done = 0;

 VAR_11 = VAR_6->ctlcfgcmd_phy;
 VAR_12->flags = VAR_4
     | VAR_3
     | VAR_2
     | ((VAR_11 >> 16) & 0xffff0000);
 VAR_12->context = ((VAR_11 & 0xffffffff) << 32 )
     | VAR_1 | VAR_12->type;

 VAR_6->u.mvfrey.inlist_wptr++;
 VAR_10 = VAR_6->u.mvfrey.inlist_wptr & 0x3fff;

 if (VAR_10 == VAR_6->u.mvfrey.list_count) {
  VAR_10 = 0;
  VAR_6->u.mvfrey.inlist_wptr &= ~0x3fff;
  VAR_6->u.mvfrey.inlist_wptr ^= VAR_0;
 }

 VAR_6->u.mvfrey.inlist[VAR_10].addr = VAR_11;
 VAR_6->u.mvfrey.inlist[VAR_10].intrfc_len = (VAR_12->size + 3) / 4;

 FUNC_1(VAR_5, VAR_6->u.mvfrey.inlist_wptr);
 FUNC_0(VAR_5);

 for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
  FUNC_3(VAR_6);
  if (VAR_6->config_done)
   return 0;
  FUNC_2(1000);
 }
 return -1;
}
