
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
struct cesa_softc {scalar_t__ sc_soc_id; scalar_t__ sc_sram_base_va; void* sc_sram_size; void* sc_sram_base_pa; int sc_dev; } ;
typedef int sram_reg ;
typedef int sram_handle ;
typedef int phandle_t ;
typedef void* pcell_t ;
typedef scalar_t__ ihandle_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*,void*,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (void*,void*) ;

__attribute__((used)) static int
FUNC_4(struct cesa_softc *VAR_4)
{
 phandle_t VAR_5;
 ihandle_t VAR_6;
 pcell_t VAR_7, VAR_8[2];
 void *VAR_9;
 int VAR_10;

 VAR_10 = FUNC_0(FUNC_2(VAR_4->sc_dev), "sram-handle",
     (void *)&VAR_7, sizeof(VAR_7));
 if (VAR_10 <= 0)
  return (VAR_10);

 VAR_6 = (ihandle_t)VAR_7;
 VAR_5 = FUNC_1(VAR_6);

 VAR_10 = FUNC_0(VAR_5, "reg", (void *)VAR_8, sizeof(VAR_8));
 if (VAR_10 <= 0)
  return (VAR_10);

 VAR_4->sc_sram_base_pa = VAR_8[0];

 VAR_4->sc_sram_size = VAR_8[1];

 if (VAR_4->sc_soc_id != VAR_3 &&
     VAR_4->sc_soc_id != VAR_2 &&
     VAR_4->sc_soc_id != VAR_1)
  return (0);


 VAR_9 = FUNC_3(VAR_4->sc_sram_base_pa, VAR_4->sc_sram_size);
 if (VAR_9 == ((void*)0))
  return (VAR_0);
 VAR_4->sc_sram_base_va = (vm_offset_t)VAR_9;

 return (0);
}
