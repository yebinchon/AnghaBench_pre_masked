
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int status; int path; } ;
union ccb {TYPE_1__ ccb_h; } ;
struct mvs_channel {union ccb* frozen; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct mvs_channel* FUNC_0 (int ) ;
 int FUNC_1 (union ccb*) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void
FUNC_3(device_t VAR_3)
{
 struct mvs_channel *VAR_4 = FUNC_0(VAR_3);
 union ccb *VAR_5 = VAR_4->frozen;

 if (VAR_5) {
  VAR_4->frozen = ((void*)0);
  VAR_5->ccb_h.status = VAR_2 | VAR_1;
  if (!(VAR_5->ccb_h.status & VAR_0)) {
   FUNC_2(VAR_5->ccb_h.path, 1);
   VAR_5->ccb_h.status |= VAR_0;
  }
  FUNC_1(VAR_5);
 }
}
