
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* vp_nvlist; } ;
typedef TYPE_1__ vdev_phys_t ;
typedef int vdev_label_t ;
typedef scalar_t__ uint64_t ;
struct g_provider {scalar_t__ mediasize; int sectorsize; int name; } ;
struct g_consumer {struct g_provider* provider; } ;
typedef int off_t ;
typedef int nvlist_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int,char*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 () ;
 TYPE_1__* FUNC_4 (int,int ) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,int ,scalar_t__*) ;
 scalar_t__ FUNC_8 (char*,size_t,int **,int ) ;
 int FUNC_9 (struct g_consumer*,int*,void**,int*,int*,int*,int) ;
 int FUNC_10 (scalar_t__,int,int ) ;

__attribute__((used)) static int
FUNC_11(struct g_consumer *VAR_8, nvlist_t **VAR_9)
{
 struct g_provider *VAR_10;
 nvlist_t *VAR_11;
 vdev_phys_t *VAR_12[VAR_4];
 char *VAR_13;
 size_t VAR_14;
 uint64_t VAR_15, VAR_16, VAR_17;
 off_t VAR_18[VAR_4];
 off_t VAR_19;
 off_t VAR_20[VAR_4];
 int VAR_21[VAR_4];
 int VAR_22[VAR_4];
 int VAR_23, VAR_24;

 FUNC_3();

 VAR_10 = VAR_8->provider;
 FUNC_2(1, "Reading config from %s...", VAR_10->name);

 VAR_15 = VAR_10->mediasize;
 VAR_15 = FUNC_1(VAR_15, (uint64_t)sizeof(vdev_label_t));

 VAR_19 = sizeof(*VAR_12[0]) + VAR_10->sectorsize -
     ((sizeof(*VAR_12[0]) - 1) % VAR_10->sectorsize) - 1;

 VAR_14 = sizeof(VAR_12[0]->vp_nvlist);


 for (VAR_23 = 0; VAR_23 < VAR_4; VAR_23++) {
  VAR_21[VAR_23] = VAR_0;
  VAR_12[VAR_23] = FUNC_4(VAR_19, VAR_1);
  VAR_18[VAR_23] = FUNC_10(VAR_15, VAR_23, 0) + VAR_5;
  VAR_20[VAR_23] = VAR_19;
  VAR_22[VAR_23] = 0;
  FUNC_0(VAR_18[VAR_23] % VAR_10->sectorsize == 0);
 }


 FUNC_9(VAR_8, VAR_21, (void**)VAR_12, VAR_18, VAR_20, VAR_22,
     VAR_4);


 VAR_11 = *VAR_9 = ((void*)0);
 VAR_24 = 0;
 for (VAR_23 = 0; VAR_23 < VAR_4; VAR_23++) {
  if (VAR_22[VAR_23] != 0)
   continue;

  VAR_13 = VAR_12[VAR_23]->vp_nvlist;

  if (FUNC_8(VAR_13, VAR_14, &VAR_11, 0) != 0)
   continue;

  if (FUNC_7(VAR_11, VAR_6,
      &VAR_16) != 0 || VAR_16 > VAR_2) {
   FUNC_6(VAR_11);
   continue;
  }

  if (VAR_16 != VAR_3 &&
      VAR_16 != VAR_2 &&
      (FUNC_7(VAR_11, VAR_7,
      &VAR_17) != 0 || VAR_17 == 0)) {
   FUNC_6(VAR_11);
   continue;
  }

  if (*VAR_9 != ((void*)0))
   FUNC_6(*VAR_9);
  *VAR_9 = VAR_11;

  VAR_24++;
 }


 for (VAR_23 = 0; VAR_23 < VAR_4; VAR_23++)
  FUNC_5(VAR_12[VAR_23], VAR_19);

 return (VAR_24);
}
