
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twa_softc {int bus_handle; int bus_tag; } ;
struct tw_cl_ctlr_handle {scalar_t__ osl_ctlr_ctxt; } ;
typedef int bus_space_tag_t ;
typedef int bus_space_handle_t ;
typedef int TW_VOID ;
typedef int TW_INT8 ;
typedef int TW_INT32 ;
typedef int TW_INT16 ;


 int FUNC_0 (int ,int ,int,int ) ;
 int FUNC_1 (int ,int ,int,int ) ;
 int FUNC_2 (int ,int ,int,int) ;

__attribute__((used)) static __inline TW_VOID
FUNC_3(struct tw_cl_ctlr_handle *VAR_0,
 TW_INT32 VAR_1, TW_INT32 VAR_2, TW_INT32 VAR_3)
{
 bus_space_tag_t VAR_4 =
  ((struct twa_softc *)(VAR_0->osl_ctlr_ctxt))->bus_tag;
 bus_space_handle_t VAR_5 =
  ((struct twa_softc *)(VAR_0->osl_ctlr_ctxt))->bus_handle;

 if (VAR_3 == 4)
  FUNC_2(VAR_4, VAR_5, VAR_1, VAR_2);
 else if (VAR_3 == 2)
  FUNC_1(VAR_4, VAR_5, VAR_1, (TW_INT16)VAR_2);
 else
  FUNC_0(VAR_4, VAR_5, VAR_1, (TW_INT8)VAR_2);
}
