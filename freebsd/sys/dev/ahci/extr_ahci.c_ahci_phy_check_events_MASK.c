
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int path; } ;
union ccb {TYPE_1__ ccb_h; } ;
typedef int u_int32_t ;
struct ahci_channel {scalar_t__ pm_level; int sim; int dev; int r_mem; scalar_t__ listening; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct ahci_channel*) ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 union ccb* FUNC_4 () ;
 scalar_t__ FUNC_5 (int *,int *,int ,int ,int ) ;
 int FUNC_6 (union ccb*) ;
 int FUNC_7 (union ccb*) ;

__attribute__((used)) static int
FUNC_8(struct ahci_channel *VAR_9, u_int32_t VAR_10)
{

 if (((VAR_9->pm_level == 0) && (VAR_10 & VAR_2)) ||
     ((VAR_9->pm_level != 0 || VAR_9->listening) && (VAR_10 & VAR_1))) {
  u_int32_t VAR_11 = FUNC_0(VAR_9->r_mem, VAR_0);
  union ccb *VAR_12;

  if (VAR_8) {
   if ((VAR_11 & VAR_3) != VAR_4)
    FUNC_3(VAR_9->dev, "CONNECT requested\n");
   else
    FUNC_3(VAR_9->dev, "DISCONNECT requested\n");
  }
  FUNC_1(VAR_9);
  if ((VAR_12 = FUNC_4()) == ((void*)0))
   return (0);
  if (FUNC_5(&VAR_12->ccb_h.path, ((void*)0),
      FUNC_2(VAR_9->sim),
      VAR_7, VAR_5) != VAR_6) {
   FUNC_6(VAR_12);
   return (0);
  }
  FUNC_7(VAR_12);
  return (1);
 }
 return (0);
}
