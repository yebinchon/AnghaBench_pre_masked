
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_3__ {int inlist_phy; int outlist_phy; int outlist_cptr_phy; int inlist_wptr; int list_count; int* outlist_cptr; int outlist_rptr; } ;
struct TYPE_4__ {TYPE_1__ mvfrey; } ;
struct hpt_iop_hba {TYPE_2__ u; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct hpt_iop_hba*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_3(struct hpt_iop_hba *VAR_8)
{
 u_int32_t VAR_9 = 100;

 if (FUNC_2(VAR_8, VAR_1, 3000))
  return -1;


 while(VAR_9--) {
  FUNC_1(1000);
 }

 FUNC_0(VAR_2,
       VAR_8->u.mvfrey.inlist_phy & 0xffffffff);
 FUNC_0(VAR_3,
       (VAR_8->u.mvfrey.inlist_phy >> 16) >> 16);

 FUNC_0(VAR_4,
       VAR_8->u.mvfrey.outlist_phy & 0xffffffff);
 FUNC_0(VAR_5,
       (VAR_8->u.mvfrey.outlist_phy >> 16) >> 16);

 FUNC_0(VAR_6,
       VAR_8->u.mvfrey.outlist_cptr_phy & 0xffffffff);
 FUNC_0(VAR_7,
       (VAR_8->u.mvfrey.outlist_cptr_phy >> 16) >> 16);

 VAR_8->u.mvfrey.inlist_wptr = (VAR_8->u.mvfrey.list_count - 1)
        | VAR_0;
 *VAR_8->u.mvfrey.outlist_cptr = (VAR_8->u.mvfrey.list_count - 1)
        | VAR_0;
 VAR_8->u.mvfrey.outlist_rptr = VAR_8->u.mvfrey.list_count - 1;

 return 0;
}
