
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xpt_opcode ;
struct TYPE_2__ {int * targ_descr; int cbfcnp; int func_code; } ;
union ccb {TYPE_1__ ccb_h; } ;
struct targ_softc {int path; } ;


 int FUNC_0 (int ,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (union ccb*,int ) ;
 union ccb* FUNC_2 (int,int ,int ) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int * FUNC_4 (struct targ_softc*) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;

__attribute__((used)) static union ccb *
FUNC_6(struct targ_softc *VAR_4, xpt_opcode VAR_5, int VAR_6)
{
 union ccb *VAR_7;
 int VAR_8;

 VAR_8 = FUNC_3(VAR_5);
 VAR_7 = FUNC_2(VAR_8, VAR_2, VAR_1);
 FUNC_0(VAR_4->path, VAR_0, ("getccb %p\n", VAR_7));
 if (VAR_7 == ((void*)0)) {
  return (VAR_7);
 }
 FUNC_5(&VAR_7->ccb_h, VAR_4->path, VAR_6);
 VAR_7->ccb_h.func_code = VAR_5;
 VAR_7->ccb_h.cbfcnp = VAR_3;
 VAR_7->ccb_h.targ_descr = FUNC_4(VAR_4);
 if (VAR_7->ccb_h.targ_descr == ((void*)0)) {
  FUNC_1 (VAR_7, VAR_2);
  VAR_7 = ((void*)0);
 }
 return (VAR_7);
}
