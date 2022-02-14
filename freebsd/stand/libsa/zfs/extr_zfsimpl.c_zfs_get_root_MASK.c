
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_9__ {int spa_mos; } ;
typedef TYPE_1__ spa_t ;
typedef int root ;
typedef int props ;
struct TYPE_10__ {scalar_t__ dd_head_dataset_obj; } ;
typedef TYPE_2__ dsl_dir_phys_t ;
struct TYPE_11__ {int dn_bonus; } ;
typedef TYPE_3__ dnode_phys_t ;
typedef int bootfs ;


 scalar_t__ VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_1__ const*,int *,scalar_t__,TYPE_3__*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (TYPE_1__ const*,TYPE_3__*,char*,int,int,scalar_t__*) ;

__attribute__((used)) static int
FUNC_3(const spa_t *VAR_4, uint64_t *VAR_5)
{
 dnode_phys_t VAR_6, VAR_7;
 uint64_t VAR_8, VAR_9, VAR_10;

 *VAR_5 = 0;




 if (FUNC_0(VAR_4, &VAR_4->spa_mos, VAR_0, &VAR_6)) {
  FUNC_1("ZFS: can't read MOS object directory\n");
  return (VAR_3);
 }




 if (FUNC_2(VAR_4, &VAR_6, VAR_1, sizeof (VAR_8), 1, &VAR_8) == 0
      && FUNC_0(VAR_4, &VAR_4->spa_mos, VAR_8, &VAR_7) == 0
      && FUNC_2(VAR_4, &VAR_7, "bootfs", sizeof (VAR_9), 1, &VAR_9) == 0
      && VAR_9 != 0)
 {
  *VAR_5 = VAR_9;
  return (0);
 }



 if (FUNC_2(VAR_4, &VAR_6, VAR_2, sizeof (VAR_10), 1, &VAR_10)
     || FUNC_0(VAR_4, &VAR_4->spa_mos, VAR_10, &VAR_6)) {
  FUNC_1("ZFS: can't find root dsl_dir\n");
  return (VAR_3);
 }





 dsl_dir_phys_t *VAR_11 = (dsl_dir_phys_t *) &VAR_6.dn_bonus;
 *VAR_5 = VAR_11->dd_head_dataset_obj;
 return (0);
}
