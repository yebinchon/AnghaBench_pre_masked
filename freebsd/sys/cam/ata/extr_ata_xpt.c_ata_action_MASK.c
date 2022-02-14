
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int func_code; int status; TYPE_5__* path; } ;
struct TYPE_9__ {int cdb_len; } ;
struct TYPE_7__ {int flags; } ;
union ccb {TYPE_4__ ccb_h; TYPE_3__ csio; int cts; TYPE_1__ crcn; } ;
typedef int uint16_t ;
typedef int u_int ;
struct TYPE_8__ {int config; } ;
struct cam_ed {int flags; TYPE_2__ ident_data; int protocol; } ;
struct TYPE_11__ {struct cam_ed* device; int periph; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;







 int FUNC_0 (union ccb*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,union ccb*) ;
 int FUNC_3 (int ,TYPE_5__*,int ,union ccb*) ;
 int FUNC_4 (int *,TYPE_5__*,int ) ;
 int FUNC_5 (union ccb*) ;
 int FUNC_6 (union ccb*) ;

__attribute__((used)) static void
FUNC_7(union ccb *VAR_8)
{

 switch (VAR_8->ccb_h.func_code) {
 case 128:
 {
  FUNC_4(&VAR_8->cts,
        VAR_8->ccb_h.path,
                        VAR_6);
  break;
 }
 case 132:
 case 130:
  FUNC_2(VAR_8->ccb_h.path->periph, VAR_8);
  break;
 case 131:
  FUNC_3(VAR_8->ccb_h.path->periph,
         VAR_8->ccb_h.path, VAR_8->crcn.flags,
         VAR_8);
  break;
 case 133:
 {
  FUNC_1(&VAR_8->cts);
  break;
 }
 case 129:
 {
  struct cam_ed *VAR_9;
  u_int VAR_10 = 0;

  VAR_9 = VAR_8->ccb_h.path->device;
  if (VAR_9->protocol == VAR_7 &&
      (VAR_9->flags & VAR_4)) {
   uint16_t VAR_11 =
       VAR_9->ident_data.config & VAR_3;

   VAR_10 =
       (VAR_9->ident_data.config == VAR_2) ? 0 :
       (VAR_11 == VAR_1) ? 16 :
       (VAR_11 == VAR_0) ? 12 : 0;
  }
  if (VAR_8->csio.cdb_len > VAR_10) {
   VAR_8->ccb_h.status = VAR_5;
   FUNC_6(VAR_8);
   break;
  }
  FUNC_5(VAR_8);
  break;
 }
 case 134:
 {
  FUNC_0(VAR_8);
  break;
 }
 default:
  FUNC_5(VAR_8);
  break;
 }
}
