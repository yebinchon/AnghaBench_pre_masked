
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int path; } ;
union ccb {TYPE_1__ ccb_h; } ;
struct ata_channel {int state_mtx; int * sim; } ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 struct ata_channel* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 union ccb* FUNC_5 () ;
 scalar_t__ FUNC_6 (int *,int *,int ,int ,int ) ;
 int FUNC_7 (union ccb*) ;
 int FUNC_8 (union ccb*) ;

__attribute__((used)) static void
FUNC_9(void *VAR_3, int VAR_4)
{
 device_t VAR_5 = (device_t)VAR_3;
 struct ata_channel *VAR_6 = FUNC_2(VAR_5);
 union ccb *VAR_7;

 FUNC_3(&VAR_6->state_mtx);
 if (VAR_6->sim == ((void*)0)) {
  FUNC_4(&VAR_6->state_mtx);
  return;
 }
 FUNC_0(VAR_5);
 if ((VAR_7 = FUNC_5()) == ((void*)0))
  return;
 if (FUNC_6(&VAR_7->ccb_h.path, ((void*)0),
     FUNC_1(VAR_6->sim),
     VAR_2, VAR_0) != VAR_1) {
  FUNC_7(VAR_7);
  return;
 }
 FUNC_8(VAR_7);
 FUNC_4(&VAR_6->state_mtx);
}
