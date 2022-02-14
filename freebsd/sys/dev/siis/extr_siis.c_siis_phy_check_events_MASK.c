
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int path; } ;
union ccb {TYPE_1__ ccb_h; } ;
typedef int u_int32_t ;
struct siis_channel {scalar_t__ pm_level; int sim; int r_mem; } ;
typedef int device_t ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (int ) ;
 struct siis_channel* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 union ccb* FUNC_5 () ;
 scalar_t__ FUNC_6 (int *,int *,int ,int ,int ) ;
 int FUNC_7 (union ccb*) ;
 int FUNC_8 (union ccb*) ;

__attribute__((used)) static void
FUNC_9(device_t VAR_11)
{
 struct siis_channel *VAR_12 = FUNC_2(VAR_11);


 if (VAR_12->pm_level == 0) {
  u_int32_t VAR_13 = FUNC_0(VAR_12->r_mem, VAR_9);
  union ccb *VAR_14;

  if (VAR_10) {
   if (((VAR_13 & VAR_0) == VAR_1) &&
       ((VAR_13 & VAR_4) != VAR_5) &&
       ((VAR_13 & VAR_3) == VAR_2)) {
    FUNC_3(VAR_11, "CONNECT requested\n");
   } else
    FUNC_3(VAR_11, "DISCONNECT requested\n");
  }
  FUNC_4(VAR_11);
  if ((VAR_14 = FUNC_5()) == ((void*)0))
   return;
  if (FUNC_6(&VAR_14->ccb_h.path, ((void*)0),
      FUNC_1(VAR_12->sim),
      VAR_8, VAR_6) != VAR_7) {
   FUNC_7(VAR_14);
   return;
  }
  FUNC_8(VAR_14);
 }
}
