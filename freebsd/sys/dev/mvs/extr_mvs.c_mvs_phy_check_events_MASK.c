
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int path; } ;
union ccb {TYPE_1__ ccb_h; } ;
typedef int u_int32_t ;
struct mvs_channel {scalar_t__ pm_level; int sim; int r_mem; } ;
typedef int device_t ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (int ) ;
 struct mvs_channel* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 union ccb* FUNC_5 () ;
 scalar_t__ FUNC_6 (int *,int *,int ,int ,int ) ;
 int FUNC_7 (union ccb*) ;
 int FUNC_8 (union ccb*) ;

__attribute__((used)) static void
FUNC_9(device_t VAR_11, u_int32_t VAR_12)
{
 struct mvs_channel *VAR_13 = FUNC_2(VAR_11);

 if (VAR_13->pm_level == 0) {
  u_int32_t VAR_14 = FUNC_0(VAR_13->r_mem, VAR_3);
  union ccb *VAR_15;

  if (VAR_10) {
   if (((VAR_14 & VAR_4) == VAR_5) &&
       ((VAR_14 & VAR_8) != VAR_9) &&
       ((VAR_14 & VAR_7) == VAR_6)) {
    FUNC_3(VAR_11, "CONNECT requested\n");
   } else
    FUNC_3(VAR_11, "DISCONNECT requested\n");
  }
  FUNC_4(VAR_11);
  if ((VAR_15 = FUNC_5()) == ((void*)0))
   return;
  if (FUNC_6(&VAR_15->ccb_h.path, ((void*)0),
      FUNC_1(VAR_13->sim),
      VAR_2, VAR_0) != VAR_1) {
   FUNC_7(VAR_15);
   return;
  }
  FUNC_8(VAR_15);
 }
}
