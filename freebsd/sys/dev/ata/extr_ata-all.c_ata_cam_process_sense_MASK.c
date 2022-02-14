
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int status; } ;
union ccb {TYPE_1__ ccb_h; } ;
struct ata_request {int flags; int status; scalar_t__ result; union ccb* ccb; } ;
struct ata_channel {scalar_t__ requestsense; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 struct ata_channel* FUNC_1 (int ) ;
 int FUNC_2 (union ccb*) ;

__attribute__((used)) static void
FUNC_3(device_t VAR_5, struct ata_request *VAR_6)
{
 struct ata_channel *VAR_7 = FUNC_1(VAR_5);
 union ccb *VAR_8 = VAR_6->ccb;
 int VAR_9 = 0;

 VAR_7->requestsense = 0;

 if (VAR_6->flags & VAR_0)
  VAR_9 = 1;
 if ((VAR_6->flags & VAR_0) == 0 &&
     (VAR_6->status & VAR_1) == 0 &&
     VAR_6->result == 0) {
  VAR_8->ccb_h.status |= VAR_3;
 } else {
  VAR_8->ccb_h.status &= ~VAR_4;
  VAR_8->ccb_h.status |= VAR_2;
 }

 FUNC_2(VAR_8);

 if (VAR_9)
  FUNC_0(VAR_5);
}
