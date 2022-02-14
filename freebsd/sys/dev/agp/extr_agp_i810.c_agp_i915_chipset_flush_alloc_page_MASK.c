
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
typedef scalar_t__ uint64_t ;
struct agp_i810_softc {int sc_flush_page_rid; int sc_flush_page_vaddr; int * sc_flush_page_res; } ;
typedef int device_t ;


 int * FUNC_0 (int ,int ,int ,int*,scalar_t__,scalar_t__,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ) ;
 struct agp_i810_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int ,...) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_5, uint64_t VAR_6, uint64_t VAR_7)
{
 struct agp_i810_softc *VAR_8;
 device_t VAR_9;

 VAR_8 = FUNC_2(VAR_5);
 VAR_9 = FUNC_1(VAR_5);
 VAR_8->sc_flush_page_rid = 100;
 VAR_8->sc_flush_page_res = FUNC_0(FUNC_1(VAR_9), VAR_5,
     VAR_3, &VAR_8->sc_flush_page_rid, VAR_6, VAR_7, VAR_1,
     VAR_2);
 if (VAR_8->sc_flush_page_res == ((void*)0)) {
  FUNC_3(VAR_5, "Failed to allocate flush page at 0x%jx\n",
      (uintmax_t)VAR_6);
  return (VAR_0);
 }
 VAR_8->sc_flush_page_vaddr = FUNC_5(VAR_8->sc_flush_page_res);
 if (VAR_4) {
  FUNC_3(VAR_5, "Allocated flush page phys 0x%jx virt %p\n",
      (uintmax_t)FUNC_4(VAR_8->sc_flush_page_res),
      VAR_8->sc_flush_page_vaddr);
 }
 return (0);
}
