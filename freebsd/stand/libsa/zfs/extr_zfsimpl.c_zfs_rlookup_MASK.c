
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uintmax_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_10__ {int spa_mos; } ;
typedef TYPE_1__ spa_t ;
typedef int name ;
struct TYPE_11__ {scalar_t__ dd_parent_obj; scalar_t__ dd_child_dir_zapobj; } ;
typedef TYPE_2__ dsl_dir_phys_t ;
struct TYPE_12__ {scalar_t__ ds_dir_obj; } ;
typedef TYPE_3__ dsl_dataset_phys_t ;
struct TYPE_13__ {int dn_bonus; } ;
typedef TYPE_4__ dnode_phys_t ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int) ;
 scalar_t__ FUNC_1 (TYPE_1__ const*,int *,scalar_t__,TYPE_4__*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (TYPE_1__ const*,TYPE_4__*,char*,scalar_t__) ;

__attribute__((used)) static int
FUNC_6(const spa_t *VAR_1, uint64_t VAR_2, char *VAR_3)
{
 char VAR_4[256];
 char VAR_5[256];
 uint64_t VAR_6, VAR_7, VAR_8;
 dnode_phys_t VAR_9, VAR_10, VAR_11, VAR_12;
 dsl_dir_phys_t *VAR_13;
 dsl_dataset_phys_t *VAR_14;
 char *VAR_15;
 int VAR_16;

 VAR_15 = &VAR_4[sizeof(VAR_4) - 1];
 *VAR_15 = '\0';

 if (FUNC_1(VAR_1, &VAR_1->spa_mos, VAR_2, &VAR_10)) {
  FUNC_2("ZFS: can't find dataset %ju\n", (uintmax_t)VAR_2);
  return (VAR_0);
 }
 VAR_14 = (dsl_dataset_phys_t *)&VAR_10.dn_bonus;
 VAR_6 = VAR_14->ds_dir_obj;

 for (;;) {
  if (FUNC_1(VAR_1, &VAR_1->spa_mos, VAR_6, &VAR_11) != 0)
   return (VAR_0);
  VAR_13 = (dsl_dir_phys_t *)&VAR_11.dn_bonus;


  VAR_7 = VAR_13->dd_parent_obj;
  if (VAR_7 == 0)
   break;

  if (FUNC_1(VAR_1, &VAR_1->spa_mos, VAR_7, &VAR_12) != 0)
   return (VAR_0);
  VAR_13 = (dsl_dir_phys_t *)&VAR_12.dn_bonus;
  VAR_8 = VAR_13->dd_child_dir_zapobj;
  if (FUNC_1(VAR_1, &VAR_1->spa_mos, VAR_8, &VAR_9) != 0)
   return (VAR_0);
  if (FUNC_5(VAR_1, &VAR_9, VAR_5, VAR_6) != 0)
   return (VAR_0);

  VAR_16 = FUNC_4(VAR_5);
  VAR_15 -= VAR_16;
  FUNC_0(VAR_15, VAR_5, VAR_16);
  --VAR_15;
  *VAR_15 = '/';


  VAR_6 = VAR_7;
 }

 if (*VAR_15 != '\0')
  ++VAR_15;
 FUNC_3(VAR_3, VAR_15);

 return (0);
}
