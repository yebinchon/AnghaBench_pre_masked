
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int flags; } ;
struct TYPE_6__ {int cbfcnp; int func_code; } ;
union ccb {TYPE_2__ crcn; TYPE_3__ ccb_h; } ;
struct TYPE_4__ {int sim; } ;
struct pqisrc_softstate {TYPE_1__ os_specific; } ;
struct cam_path {int dummy; } ;
typedef scalar_t__ cam_status ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 int FUNC_2 (union ccb*,int) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int FUNC_4 (union ccb*) ;
 union ccb* FUNC_5 () ;
 scalar_t__ FUNC_6 (struct cam_path**,int *,int ,int,int) ;
 int FUNC_7 (union ccb*) ;
 int FUNC_8 (TYPE_3__*,struct cam_path*,int) ;

__attribute__((used)) static void FUNC_9(struct pqisrc_softstate *VAR_4, int VAR_5,
   int VAR_6)
{
 union ccb *VAR_7 = ((void*)0);
 cam_status VAR_8 = 0;
 struct cam_path *VAR_9 = ((void*)0);

 FUNC_1("IN\n");

 VAR_7 = FUNC_5();
 VAR_8 = FUNC_6(&VAR_9, ((void*)0),
    FUNC_3(VAR_4->os_specific.sim), VAR_5, VAR_6);
 if (VAR_8 != VAR_1) {
  FUNC_0("xpt_create_path status(%d) != CAM_REQ_CMP \n",
     VAR_8);
  FUNC_7(VAR_7);
  return;
 }

 FUNC_2(VAR_7, sizeof(union ccb));
 FUNC_8(&VAR_7->ccb_h, VAR_9, 5);
 VAR_7->ccb_h.func_code = VAR_2;
 VAR_7->ccb_h.cbfcnp = VAR_3;
 VAR_7->crcn.flags = VAR_0;

 FUNC_4(VAR_7);

 FUNC_1("OUT\n");
}
