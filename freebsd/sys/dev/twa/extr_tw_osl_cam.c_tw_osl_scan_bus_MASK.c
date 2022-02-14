
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twa_softc {int dummy; } ;
struct tw_cl_ctlr_handle {struct twa_softc* osl_ctlr_ctxt; } ;
typedef int TW_VOID ;
typedef int TW_INT32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct twa_softc*,char*,int ,int ,int,char*,int ) ;
 int FUNC_1 (struct twa_softc*) ;

TW_VOID
FUNC_2(struct tw_cl_ctlr_handle *VAR_2)
{
 struct twa_softc *VAR_3 = VAR_2->osl_ctlr_ctxt;
 TW_INT32 VAR_4;

 if ((VAR_4 = FUNC_1(VAR_3)))
  FUNC_0(VAR_3, "error = %d",
   VAR_1,
   VAR_0,
   0x2109,
   "Bus scan request to CAM failed",
   VAR_4);
}
