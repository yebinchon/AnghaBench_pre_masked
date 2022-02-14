
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int path; } ;
union ccb {TYPE_1__ ccb_h; } ;
typedef int u_int32_t ;
struct ahci_channel {scalar_t__ pm_level; int sim; int dev; int r_mem; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct ahci_channel*) ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 union ccb* FUNC_4 () ;
 scalar_t__ FUNC_5 (int *,int *,int ,int ,int ) ;
 int FUNC_6 (union ccb*) ;
 int FUNC_7 (union ccb*) ;

__attribute__((used)) static void
FUNC_8(struct ahci_channel *VAR_7)
{
 u_int32_t VAR_8;
 union ccb *VAR_9;
 device_t VAR_10;

 if (VAR_7->pm_level == 0)
  return;

 VAR_8 = FUNC_0(VAR_7->r_mem, VAR_0);
 if ((VAR_8 & VAR_1) == 0)
  return;

 if (VAR_6) {
  VAR_10 = VAR_7->dev;
  if (VAR_8 & VAR_2) {
   FUNC_3(VAR_10, "COLD CONNECT requested\n");
  } else
   FUNC_3(VAR_10, "COLD DISCONNECT requested\n");
 }
 FUNC_1(VAR_7);
 if ((VAR_9 = FUNC_4()) == ((void*)0))
  return;
 if (FUNC_5(&VAR_9->ccb_h.path, ((void*)0), FUNC_2(VAR_7->sim),
     VAR_5, VAR_3) != VAR_4) {
  FUNC_6(VAR_9);
  return;
 }
 FUNC_7(VAR_9);
}
