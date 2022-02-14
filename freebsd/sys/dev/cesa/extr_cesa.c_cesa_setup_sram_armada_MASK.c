
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
struct simplebus_softc {int nranges; TYPE_1__* ranges; int scells; int acells; } ;
struct resource_list_entry {scalar_t__ start; scalar_t__ end; int count; } ;
struct resource_list {int dummy; } ;
struct cesa_softc {int sc_cesa_engine_id; scalar_t__ sc_sram_base_pa; scalar_t__ sc_sram_base_va; int sc_sram_size; int sc_dev; } ;
typedef int sram_handle ;
typedef int phandle_t ;
typedef scalar_t__ pcell_t ;
typedef scalar_t__ ihandle_t ;
typedef int device_t ;
struct TYPE_2__ {scalar_t__ bus; scalar_t__ size; scalar_t__ host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,void*,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (int *,int ) ;
 struct simplebus_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ,int ,struct resource_list*) ;
 void* FUNC_7 (scalar_t__,int ) ;
 struct resource_list_entry* FUNC_8 (struct resource_list*,int ,int ) ;
 int FUNC_9 (struct resource_list*) ;

__attribute__((used)) static int
FUNC_10(struct cesa_softc *VAR_3)
{
 phandle_t VAR_4;
 ihandle_t VAR_5;
 pcell_t VAR_6[2];
 void *VAR_7;
 int VAR_8, VAR_9;
 struct resource_list VAR_10;
 struct resource_list_entry *VAR_11;
 struct simplebus_softc *VAR_12;
 device_t VAR_13;


 VAR_8 = FUNC_0(FUNC_5(VAR_3->sc_dev), "marvell,crypto-srams",
     (void *)VAR_6, sizeof(VAR_6));
 if (VAR_8 <= 0)
  return (VAR_8);

 if (VAR_3->sc_cesa_engine_id >= 2)
  return (VAR_1);


 VAR_5 = (ihandle_t)VAR_6[VAR_3->sc_cesa_engine_id];
 VAR_4 = FUNC_1(VAR_5);


 VAR_13 = FUNC_3(((void*)0), FUNC_2(VAR_4));
 if (!VAR_13)
  return (VAR_1);

 VAR_12 = FUNC_4(VAR_13);

 FUNC_9(&VAR_10);

 FUNC_6(VAR_13, VAR_4, VAR_12->acells,
     VAR_12->scells, &VAR_10);


 VAR_11 = FUNC_8(&VAR_10, VAR_2, 0);
 if (VAR_11 == ((void*)0))
  return (VAR_1);


 for (VAR_9 = 0; VAR_9 < VAR_12->nranges; VAR_9++) {
  if (VAR_11->start >= VAR_12->ranges[VAR_9].bus &&
      VAR_11->end < VAR_12->ranges[VAR_9].bus + VAR_12->ranges[VAR_9].size) {
   VAR_11->start -= VAR_12->ranges[VAR_9].bus;
   VAR_11->start += VAR_12->ranges[VAR_9].host;
   VAR_11->end -= VAR_12->ranges[VAR_9].bus;
   VAR_11->end += VAR_12->ranges[VAR_9].host;
  }
 }

 VAR_3->sc_sram_base_pa = VAR_11->start;
 VAR_3->sc_sram_size = VAR_11->count;


 VAR_7 = FUNC_7(VAR_3->sc_sram_base_pa, VAR_3->sc_sram_size);
 if (VAR_7 == ((void*)0))
  return (VAR_0);
 VAR_3->sc_sram_base_va = (vm_offset_t)VAR_7;

 return (0);
}
