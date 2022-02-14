
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uintmax_t ;
typedef size_t u_int ;
struct resource {int dummy; } ;
struct TYPE_9__ {char* rm_descr; void* rm_type; void* rm_end; scalar_t__ rm_start; } ;
struct bhndb_resources {int dwa_count; int rnid; int target; int dw_steal_mtx; TYPE_5__* res; struct bhndb_resources* dwa_freelist; struct bhndb_resources* dw_alloc; TYPE_2__ br_irq_rman; TYPE_2__ br_mem_rman; TYPE_2__ ht_mem_rman; int dev; int * parent_res; struct bhndb_regwin const* win; struct bhndb_hwcfg const* cfg; int refs; int bus_intrs; int bus_regions; int min_prio; } ;
typedef struct bhndb_regwin {scalar_t__ win_type; scalar_t__ win_size; scalar_t__ win_offset; } const bhndb_regwin ;
struct bhndb_hwcfg {struct bhndb_regwin const* register_windows; } ;
struct bhndb_dw_alloc {int dwa_count; int rnid; int target; int dw_steal_mtx; TYPE_5__* res; struct bhndb_dw_alloc* dwa_freelist; struct bhndb_dw_alloc* dw_alloc; TYPE_2__ br_irq_rman; TYPE_2__ br_mem_rman; TYPE_2__ ht_mem_rman; int dev; int * parent_res; struct bhndb_regwin const* win; struct bhndb_hwcfg const* cfg; int refs; int bus_intrs; int bus_regions; int min_prio; } ;
typedef int device_t ;
typedef scalar_t__ bus_size_t ;
struct TYPE_10__ {struct resource** resources; TYPE_1__* resource_specs; } ;
struct TYPE_8__ {int type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 int FUNC_1 (int *) ;
 int VAR_13 ;
 int FUNC_2 (TYPE_5__**,int ,int ,struct bhndb_hwcfg const*) ;
 int * FUNC_3 (TYPE_5__*,struct bhndb_regwin const*) ;
 int FUNC_4 (struct bhndb_regwin const*,scalar_t__) ;
 int FUNC_5 (TYPE_5__*) ;
 struct bhndb_resources* FUNC_6 (int,int ,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 (struct bhndb_resources*,int ) ;
 void* FUNC_10 (int,int ,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int ,char*,int ) ;
 int FUNC_13 (TYPE_2__*) ;
 void* FUNC_14 (struct resource*) ;
 int FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (int *) ;
 int FUNC_17 (struct resource*) ;
 int FUNC_18 (TYPE_2__*) ;
 int FUNC_19 (TYPE_2__*,int ,void*) ;

struct bhndb_resources *
FUNC_20(device_t VAR_14, device_t VAR_15,
    const struct bhndb_hwcfg *VAR_16)
{
 struct bhndb_resources *VAR_17;
 const struct bhndb_regwin *VAR_18;
 bus_size_t VAR_19;
 int VAR_20;
 int VAR_21;
 bool VAR_22, VAR_23, VAR_24;

 VAR_22 = 0;
 VAR_23 = 0;
 VAR_24 = 0;

 VAR_17 = FUNC_10(sizeof(*VAR_17), VAR_8, VAR_9|VAR_10);
 if (VAR_17 == ((void*)0))
  return (((void*)0));


 VAR_17->dev = VAR_14;
 VAR_17->cfg = VAR_16;
 VAR_17->res = ((void*)0);
 VAR_17->min_prio = VAR_0;
 FUNC_1(&VAR_17->bus_regions);
 FUNC_1(&VAR_17->bus_intrs);

 FUNC_12(&VAR_17->dw_steal_mtx, FUNC_7(VAR_14),
     "bhndb dwa_steal lock", VAR_7);


 VAR_17->ht_mem_rman.rm_start = 0;
 VAR_17->ht_mem_rman.rm_end = ~0;
 VAR_17->ht_mem_rman.rm_type = VAR_11;
 VAR_17->ht_mem_rman.rm_descr = "BHNDB host memory";
 if ((VAR_21 = FUNC_18(&VAR_17->ht_mem_rman))) {
  FUNC_8(VAR_17->dev, "could not initialize ht_mem_rman\n");
  goto failed;
 }
 VAR_22 = 1;



 VAR_17->br_mem_rman.rm_start = 0;
 VAR_17->br_mem_rman.rm_end = VAR_3;
 VAR_17->br_mem_rman.rm_type = VAR_11;
 VAR_17->br_mem_rman.rm_descr = "BHNDB bridged memory";

 if ((VAR_21 = FUNC_18(&VAR_17->br_mem_rman))) {
  FUNC_8(VAR_17->dev, "could not initialize br_mem_rman\n");
  goto failed;
 }
 VAR_23 = 1;

 VAR_21 = FUNC_19(&VAR_17->br_mem_rman, 0, VAR_3);
 if (VAR_21) {
  FUNC_8(VAR_17->dev, "could not configure br_mem_rman\n");
  goto failed;
 }



 VAR_17->br_irq_rman.rm_start = 0;
 VAR_17->br_irq_rman.rm_end = VAR_12;
 VAR_17->br_irq_rman.rm_type = VAR_11;
 VAR_17->br_irq_rman.rm_descr = "BHNDB bridged interrupts";

 if ((VAR_21 = FUNC_18(&VAR_17->br_irq_rman))) {
  FUNC_8(VAR_17->dev, "could not initialize br_irq_rman\n");
  goto failed;
 }
 VAR_24 = 1;

 VAR_21 = FUNC_19(&VAR_17->br_irq_rman, 0, VAR_12);
 if (VAR_21) {
  FUNC_8(VAR_17->dev, "could not configure br_irq_rman\n");
  goto failed;
 }



 VAR_17->dwa_count = FUNC_4(VAR_16->register_windows,
     VAR_1);
 if (VAR_17->dwa_count >= VAR_6) {
  FUNC_8(VAR_17->dev, "max dynamic regwin count exceeded\n");
  goto failed;
 }


 VAR_17->dw_alloc = FUNC_10(sizeof(VAR_17->dw_alloc[0]) * VAR_17->dwa_count, VAR_8,
     VAR_9);
 if (VAR_17->dw_alloc == ((void*)0))
  goto failed;


 VAR_17->dwa_freelist = FUNC_6(VAR_17->dwa_count, VAR_8, VAR_9);
 if (VAR_17->dwa_freelist == ((void*)0))
  goto failed;


 VAR_20 = 0;
 VAR_19 = 0;
 for (VAR_18 = VAR_16->register_windows;
     VAR_18->win_type != VAR_2; VAR_18++)
 {
  struct bhndb_dw_alloc *VAR_25;


  if (VAR_18->win_type != VAR_1)
   continue;


  if (VAR_18->win_size == 0) {
   FUNC_8(VAR_17->dev, "ignoring zero-length dynamic "
       "register window\n");
   continue;
  } else if (VAR_19 == 0) {
   VAR_19 = VAR_18->win_size;
  } else if (VAR_19 != VAR_18->win_size) {
   FUNC_8(VAR_17->dev, "devices that vend multiple "
       "dynamic register window sizes are not currently "
       "supported\n");
   goto failed;
  }

  VAR_25 = &VAR_17->dw_alloc[VAR_20];
  VAR_25->win = VAR_18;
  VAR_25->parent_res = ((void*)0);
  VAR_25->rnid = VAR_20;
  VAR_25->target = 0x0;

  FUNC_0(&VAR_25->refs);
  VAR_20++;
 }


 VAR_21 = FUNC_2(&VAR_17->res, VAR_14, VAR_15, VAR_17->cfg);
 if (VAR_21) {
  FUNC_8(VAR_17->dev,
      "could not allocate host resources on %s: %d\n",
      FUNC_7(VAR_15), VAR_21);
  goto failed;
 }



 for (size_t VAR_26 = 0; VAR_26 < VAR_17->dwa_count; VAR_26++) {
  struct bhndb_dw_alloc *VAR_27;
  const struct bhndb_regwin *VAR_28;

  VAR_27 = &VAR_17->dw_alloc[VAR_26];
  VAR_28 = VAR_27->win;


  VAR_27->parent_res = FUNC_3(VAR_17->res, VAR_28);
  if (VAR_27->parent_res == ((void*)0)) {
   FUNC_8(VAR_17->dev, "no host resource found for %u "
       "register window with offset %#jx and "
       "size %#jx\n",
       VAR_28->win_type,
       (uintmax_t)VAR_28->win_offset,
       (uintmax_t)VAR_28->win_size);

   VAR_21 = VAR_5;
   goto failed;
  }

  if (FUNC_16(VAR_27->parent_res) < VAR_28->win_offset +
      VAR_28->win_size)
  {
   FUNC_8(VAR_17->dev, "resource %d too small for "
       "register window with offset %llx and size %llx\n",
       FUNC_15(VAR_27->parent_res),
       (unsigned long long) VAR_28->win_offset,
       (unsigned long long) VAR_28->win_size);

   VAR_21 = VAR_4;
   goto failed;
  }
 }


 for (u_int VAR_29 = 0; VAR_17->res->resource_specs[VAR_29].type != -1; VAR_29++) {
  struct resource *VAR_30;


  if (VAR_17->res->resource_specs[VAR_29].type != VAR_13)
   continue;


  VAR_30 = VAR_17->res->resources[VAR_29];
  VAR_21 = FUNC_19(&VAR_17->ht_mem_rman,
      FUNC_17(VAR_30), FUNC_14(VAR_30));
  if (VAR_21) {
   FUNC_8(VAR_17->dev,
       "could not register host memory region with "
       "ht_mem_rman: %d\n", VAR_21);
   goto failed;
  }
 }

 return (VAR_17);

failed:
 if (VAR_22)
  FUNC_13(&VAR_17->ht_mem_rman);

 if (VAR_23)
  FUNC_13(&VAR_17->br_mem_rman);

 if (VAR_24)
  FUNC_13(&VAR_17->br_irq_rman);

 if (VAR_17->dw_alloc != ((void*)0))
  FUNC_9(VAR_17->dw_alloc, VAR_8);

 if (VAR_17->dwa_freelist != ((void*)0))
  FUNC_9(VAR_17->dwa_freelist, VAR_8);

 if (VAR_17->res != ((void*)0))
  FUNC_5(VAR_17->res);

 FUNC_11(&VAR_17->dw_steal_mtx);

 FUNC_9(VAR_17, VAR_8);

 return (((void*)0));
}
