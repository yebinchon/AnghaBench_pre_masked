
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union ccb {int dummy; } ccb ;
typedef int u_int16_t ;
struct TYPE_2__ {int status; int func_code; } ;
struct ccb_pathinq {int target_sprt; int hba_inquiry; TYPE_1__ ccb_h; } ;
typedef int cpi ;
typedef int cam_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ccb_pathinq*,int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (union ccb*,int) ;
 int VAR_5 ;

__attribute__((used)) static cam_status
FUNC_3(u_int16_t *VAR_6)
{
 struct ccb_pathinq VAR_7;
 cam_status VAR_8;


 FUNC_0(&VAR_7, sizeof(VAR_7));
 VAR_7.ccb_h.func_code = VAR_4;
 FUNC_2((union ccb *)&VAR_7, 1);
 VAR_8 = VAR_7.ccb_h.status & VAR_2;
 if (VAR_8 != VAR_1) {
  FUNC_1(VAR_5, "CPI failed, status %#x\n", VAR_8);
  return (VAR_8);
 }


 if ((VAR_7.target_sprt & VAR_3) == 0) {
  FUNC_1(VAR_5, "HBA does not support target mode\n");
  VAR_8 = VAR_0;
  return (VAR_8);
 }

 *VAR_6 = VAR_7.hba_inquiry;
 return (VAR_8);
}
