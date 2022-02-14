
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twa_softc {int bus_handle; int bus_tag; } ;
struct tw_cl_ctlr_handle {scalar_t__ osl_ctlr_ctxt; } ;
typedef int bus_space_tag_t ;
typedef int bus_space_handle_t ;
typedef int TW_UINT32 ;
typedef int TW_INT32 ;


 scalar_t__ FUNC_0 (int ,int ,int) ;
 scalar_t__ FUNC_1 (int ,int ,int) ;
 scalar_t__ FUNC_2 (int ,int ,int) ;

__attribute__((used)) static __inline TW_UINT32
FUNC_3(struct tw_cl_ctlr_handle *VAR_0,
 TW_INT32 VAR_1, TW_INT32 VAR_2)
{
 bus_space_tag_t VAR_3 =
  ((struct twa_softc *)(VAR_0->osl_ctlr_ctxt))->bus_tag;
 bus_space_handle_t VAR_4 =
  ((struct twa_softc *)(VAR_0->osl_ctlr_ctxt))->bus_handle;

 if (VAR_2 == 4)
  return((TW_UINT32)FUNC_2(VAR_3, VAR_4,
   VAR_1));
 else if (VAR_2 == 2)
  return((TW_UINT32)FUNC_1(VAR_3, VAR_4,
   VAR_1));
 else
  return((TW_UINT32)FUNC_0(VAR_3, VAR_4,
   VAR_1));
}
