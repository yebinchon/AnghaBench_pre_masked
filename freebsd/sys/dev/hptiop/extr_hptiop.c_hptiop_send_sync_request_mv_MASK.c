
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int64_t ;
typedef scalar_t__ u_int32_t ;
struct TYPE_2__ {int flags; } ;
struct hpt_iop_request_get_config {TYPE_1__ header; } ;
struct hpt_iop_hba {int ctlcfgcmd_phy; scalar_t__ config_done; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct hpt_iop_hba*) ;
 int FUNC_3 (int,struct hpt_iop_hba*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_4(struct hpt_iop_hba *VAR_4,
     void *VAR_5, u_int32_t VAR_6)
{
 u_int32_t VAR_7;
 u_int64_t VAR_8;
 VAR_4->config_done = 0;

 VAR_8 = VAR_4->ctlcfgcmd_phy |
   (u_int64_t)VAR_2;
 ((struct hpt_iop_request_get_config *)VAR_5)->header.flags |=
  VAR_1 |
  VAR_0;
 FUNC_3(VAR_8, VAR_4);
 FUNC_0(VAR_3);

 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
  FUNC_2(VAR_4);
  if (VAR_4->config_done)
   return 0;
  FUNC_1(1000);
 }
 return -1;
}
