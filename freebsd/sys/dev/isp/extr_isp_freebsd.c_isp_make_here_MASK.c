
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int path; } ;
union ccb {TYPE_1__ ccb_h; } ;
struct isp_fc {int sim; } ;
typedef int ispsoftc_t ;
typedef int fcportdb_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct isp_fc* FUNC_0 (int *,int) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,char*,...) ;
 union ccb* FUNC_3 () ;
 scalar_t__ FUNC_4 (int *,int *,int ,int,int ) ;
 int FUNC_5 (union ccb*) ;
 int FUNC_6 (union ccb*) ;

__attribute__((used)) static void
FUNC_7(ispsoftc_t *VAR_3, fcportdb_t *VAR_4, int VAR_5, int VAR_6)
{
 union ccb *VAR_7;
 struct isp_fc *VAR_8 = FUNC_0(VAR_3, VAR_5);




 VAR_7 = FUNC_3();
 if (VAR_7 == ((void*)0)) {
  FUNC_2(VAR_3, VAR_2, "Chan %d unable to alloc CCB for rescan", VAR_5);
  return;
 }
 if (FUNC_4(&VAR_7->ccb_h.path, ((void*)0), FUNC_1(VAR_8->sim),
     VAR_6, VAR_0) != VAR_1) {
  FUNC_2(VAR_3, VAR_2, "unable to create path for rescan");
  FUNC_5(VAR_7);
  return;
 }
 FUNC_6(VAR_7);
}
