
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union ccb {int dummy; } ccb ;
struct TYPE_4__ {int status; } ;
struct ccb_immediate_notify {int arg; TYPE_2__ ccb_h; } ;
typedef int cam_status ;
struct TYPE_3__ {int tqe; } ;






 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,TYPE_2__*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;
 scalar_t__ VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_2 (union ccb*,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (char*,...) ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_5(struct ccb_immediate_notify *VAR_7)
{
 cam_status VAR_8;

 if (VAR_4)
  FUNC_4("Working on INOT %p", VAR_7);

 VAR_8 = VAR_7->ccb_h.status;
 VAR_8 &= VAR_0;

 switch (VAR_8) {
 case 137:
  FUNC_3(VAR_1, VAR_3);
  FUNC_1();
  break;
 case 140:
  FUNC_3(VAR_1, VAR_2);
  FUNC_1();
  break;
 case 139:
  switch (VAR_7->arg) {
  case 128:
  case 133:
  case 135:
  case 132:
  case 131:
  case 130:
  case 129:
  case 136:
  case 134:
  default:
   FUNC_4("INOT message %#x", VAR_7->arg);
   break;
  }
  break;
 case 138:
  FUNC_4("INOT %p aborted", VAR_7);
  break;
 default:
  FUNC_4("Unhandled INOT status %#x", VAR_8);
  break;
 }


 FUNC_0(&VAR_6, &VAR_7->ccb_h, VAR_5.tqe);
 FUNC_2((union ccb *)VAR_7, 1);

 return (1);
}
