
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; } ;
struct TYPE_4__ {int cbfcnp; int func_code; } ;
union ccb {TYPE_1__ crcn; TYPE_2__ ccb_h; } ;
struct cam_path {int dummy; } ;
struct AdapterControlBlock {int psim; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (union ccb*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (union ccb*) ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 (struct cam_path**,int *,int ,int,int) ;
 int FUNC_5 (union ccb*) ;
 int FUNC_6 (TYPE_2__*,struct cam_path*,int) ;

__attribute__((used)) static void FUNC_7(struct AdapterControlBlock *VAR_4, int VAR_5, int VAR_6)
{
 struct cam_path *VAR_7;
 union ccb *VAR_8;

 if ((VAR_8 = (union ccb *)FUNC_3()) == ((void*)0))
   return;
 if (FUNC_4(&VAR_7, ((void*)0), FUNC_1(VAR_4->psim), VAR_5, VAR_6) != VAR_1)
 {
  FUNC_5(VAR_8);
  return;
 }

 FUNC_0(VAR_8, sizeof(union ccb));
 FUNC_6(&VAR_8->ccb_h, VAR_7, 5);
 VAR_8->ccb_h.func_code = VAR_2;
 VAR_8->ccb_h.cbfcnp = VAR_3;
 VAR_8->crcn.flags = VAR_0;
 FUNC_2(VAR_8);
}
