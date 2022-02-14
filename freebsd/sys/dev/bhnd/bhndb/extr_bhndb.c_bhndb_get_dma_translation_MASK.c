
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ u_int ;
struct TYPE_4__ {int chip_caps; } ;
struct bhndb_softc {TYPE_3__* bus_res; TYPE_1__ chipid; } ;
struct bhndb_hwcfg {struct bhnd_dma_translation* dma_translations; } ;
struct bhnd_dma_translation {int base_addr; int flags; int addr_mask; int addrext_mask; } ;
typedef int device_t ;
typedef int * bus_dma_tag_t ;
typedef int bhnd_addr_t ;
struct TYPE_6__ {TYPE_2__* res; struct bhndb_hwcfg* cfg; } ;
struct TYPE_5__ {size_t num_dma_tags; int ** dma_tags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 struct bhndb_softc* FUNC_1 (int ) ;

__attribute__((used)) static inline int
FUNC_2(device_t VAR_4, device_t VAR_5, u_int VAR_6,
    uint32_t VAR_7, bus_dma_tag_t *VAR_8,
    struct bhnd_dma_translation *VAR_9)
{
 struct bhndb_softc *VAR_10;
 const struct bhndb_hwcfg *VAR_11;
 const struct bhnd_dma_translation *VAR_12;
 bus_dma_tag_t VAR_13;
 bhnd_addr_t VAR_14, VAR_15;

 VAR_10 = FUNC_1(VAR_4);
 VAR_11 = VAR_10->bus_res->cfg;


 if (VAR_10->bus_res->res->dma_tags == ((void*)0))
  return (VAR_2);


 if (VAR_6 > VAR_1) {

  if (!(VAR_10->chipid.chip_caps & VAR_0))
   VAR_6 = VAR_1;
 }


 VAR_14 = FUNC_0(VAR_6);

 VAR_12 = ((void*)0);
 VAR_15 = 0x0;
 VAR_13 = ((void*)0);

 for (size_t VAR_16 = 0; VAR_16 < VAR_10->bus_res->res->num_dma_tags; VAR_16++) {
  const struct bhnd_dma_translation *VAR_17;
  bhnd_addr_t VAR_18;

  VAR_17 = &VAR_11->dma_translations[VAR_16];


  if ((VAR_17->base_addr & VAR_14) != VAR_17->base_addr)
   continue;


  if ((VAR_17->flags & VAR_7) != VAR_7)
   continue;



  VAR_18 = (VAR_17->addr_mask | VAR_17->addrext_mask) & VAR_14;
  if (VAR_18 == 0)
   continue;


  if (VAR_12 == ((void*)0) || VAR_18 > VAR_15) {
   VAR_12 = VAR_17;
   VAR_15 = VAR_18;
   VAR_13 = VAR_10->bus_res->res->dma_tags[VAR_16];
  }
 }

 if (VAR_12 == ((void*)0) || VAR_15 == 0)
  return (VAR_3);

 if (VAR_8 != ((void*)0))
  *VAR_8 = VAR_13;

 if (VAR_9 != ((void*)0))
  *VAR_9 = *VAR_12;

 return (0);
}
