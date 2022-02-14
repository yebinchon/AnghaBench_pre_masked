
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sglist {int dummy; } ;
struct nvdimm_spa_dev {int * spa_g; int spa_dev; int * spa_obj; int spa_len; int spa_phys_base; int * spa_kva; int spa_memattr; } ;
struct make_dev_args {int mda_flags; int mda_mode; int mda_unit; struct nvdimm_spa_dev* mda_si_drv1; int mda_gid; int mda_uid; int * mda_cr; int * mda_devsw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char**,int ,char*,char const*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct make_dev_args*) ;
 int FUNC_3 (struct make_dev_args*,int *,char*,char*) ;
 int * FUNC_4 (struct nvdimm_spa_dev*,char const*) ;
 int FUNC_5 (int ,int ,int **,int ) ;
 int FUNC_6 (char*,char const*,...) ;
 struct sglist* FUNC_7 (int,int ) ;
 int FUNC_8 (struct sglist*,int ,int ) ;
 int FUNC_9 (struct sglist*) ;
 int VAR_9 ;
 int * FUNC_10 (int ,struct sglist*,int ,int ,int ,int *) ;

int
FUNC_11(struct nvdimm_spa_dev *VAR_10, const char *VAR_11, int VAR_12)
{
 struct make_dev_args VAR_13;
 struct sglist *VAR_14;
 char *VAR_15;
 int VAR_16, VAR_17;

 VAR_17 = FUNC_5(VAR_10->spa_phys_base, VAR_10->spa_len,
     &VAR_10->spa_kva, VAR_10->spa_memattr);
 if (VAR_17 != 0) {
  FUNC_6("NVDIMM %s cannot map into KVA, error %d\n", VAR_11,
      VAR_17);
  VAR_10->spa_kva = ((void*)0);
 }

 VAR_14 = FUNC_7(1, VAR_5);
 VAR_16 = FUNC_8(VAR_14, VAR_10->spa_phys_base,
     VAR_10->spa_len);
 if (VAR_16 == 0) {
  VAR_10->spa_obj = FUNC_10(VAR_6, VAR_14, VAR_10->spa_len,
      VAR_8, 0, ((void*)0));
  if (VAR_10->spa_obj == ((void*)0)) {
   FUNC_6("NVDIMM %s failed to alloc vm object", VAR_11);
   FUNC_9(VAR_14);
  }
 } else {
  FUNC_6("NVDIMM %s failed to init sglist, error %d", VAR_11,
      VAR_16);
  FUNC_9(VAR_14);
 }

 FUNC_2(&VAR_13);
 VAR_13.mda_flags = VAR_3 | VAR_2;
 VAR_13.mda_devsw = &VAR_9;
 VAR_13.mda_cr = ((void*)0);
 VAR_13.mda_uid = VAR_7;
 VAR_13.mda_gid = VAR_1;
 VAR_13.mda_mode = 0660;
 VAR_13.mda_si_drv1 = VAR_10;
 VAR_13.mda_unit = VAR_12;
 FUNC_0(&VAR_15, VAR_4, "nvdimm_%s", VAR_11);
 VAR_16 = FUNC_3(&VAR_13, &VAR_10->spa_dev, "%s", VAR_15);
 FUNC_1(VAR_15, VAR_4);
 if (VAR_16 != 0) {
  FUNC_6("NVDIMM %s cannot create devfs node, error %d\n", VAR_11,
      VAR_16);
  if (VAR_17 == 0)
   VAR_17 = VAR_16;
 }
 VAR_10->spa_g = FUNC_4(VAR_10, VAR_11);
 if (VAR_10->spa_g == ((void*)0) && VAR_17 == 0)
  VAR_17 = VAR_0;
 return (VAR_17);
}
