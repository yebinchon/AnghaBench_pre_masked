
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mrsas_softc {int mrsas_dev; int * raidmap_mem; int * raidmap_phys_addr; int max_map_sz; int * raidmap_dmamap; int * raidmap_tag; int mrsas_parent_tag; void** ld_drv_map; int drv_map_sz; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ,int,int ,int ,int ,int *,int *,int ,int,int ,int ,int *,int *,int *) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ,int ,int *,int ) ;
 scalar_t__ FUNC_2 (int ,void**,int ,int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (void*,int ) ;
 scalar_t__ FUNC_6 (int ,int ,int ) ;
 int VAR_7 ;
 int FUNC_7 (struct mrsas_softc*) ;
 int FUNC_8 (struct mrsas_softc*) ;

__attribute__((used)) static int
FUNC_9(struct mrsas_softc *VAR_8)
{
 int VAR_9;

 for (VAR_9 = 0; VAR_9 < 2; VAR_9++) {
  VAR_8->ld_drv_map[VAR_9] =
      (void *)FUNC_6(VAR_8->drv_map_sz, VAR_5, VAR_6);

  if (!VAR_8->ld_drv_map[VAR_9]) {
   FUNC_4(VAR_8->mrsas_dev, "Could not allocate memory for local map");

   if (VAR_9 == 1)
    FUNC_5(VAR_8->ld_drv_map[0], VAR_5);

   goto ABORT;
  }
 }

 for (int VAR_10 = 0; VAR_10 < 2; VAR_10++) {
  if (FUNC_0(VAR_8->mrsas_parent_tag,
      4, 0,
      VAR_3,
      VAR_2,
      ((void*)0), ((void*)0),
      VAR_8->max_map_sz,
      1,
      VAR_8->max_map_sz,
      VAR_0,
      ((void*)0), ((void*)0),
      &VAR_8->raidmap_tag[VAR_10])) {
   FUNC_4(VAR_8->mrsas_dev,
       "Cannot allocate raid map tag.\n");
   return (VAR_4);
  }
  if (FUNC_2(VAR_8->raidmap_tag[VAR_10],
      (void **)&VAR_8->raidmap_mem[VAR_10],
      VAR_1, &VAR_8->raidmap_dmamap[VAR_10])) {
   FUNC_4(VAR_8->mrsas_dev,
       "Cannot allocate raidmap memory.\n");
   return (VAR_4);
  }
  FUNC_3(VAR_8->raidmap_mem[VAR_10], VAR_8->max_map_sz);

  if (FUNC_1(VAR_8->raidmap_tag[VAR_10], VAR_8->raidmap_dmamap[VAR_10],
      VAR_8->raidmap_mem[VAR_10], VAR_8->max_map_sz,
      VAR_7, &VAR_8->raidmap_phys_addr[VAR_10],
      VAR_1)) {
   FUNC_4(VAR_8->mrsas_dev, "Cannot load raidmap memory.\n");
   return (VAR_4);
  }
  if (!VAR_8->raidmap_mem[VAR_10]) {
   FUNC_4(VAR_8->mrsas_dev,
       "Cannot allocate memory for raid map.\n");
   return (VAR_4);
  }
 }

 if (!FUNC_7(VAR_8))
  FUNC_8(VAR_8);

 return (0);

ABORT:
 return (1);
}
