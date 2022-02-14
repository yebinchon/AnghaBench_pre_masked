
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* os_phys; } ;
typedef TYPE_2__ objset_t ;
typedef int dsl_dataset_t ;
typedef scalar_t__ dmu_objset_type_t ;
typedef int boolean_t ;
struct TYPE_5__ {scalar_t__ os_type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,TYPE_2__**) ;
 int FUNC_2 (int *,void*) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(dsl_dataset_t *VAR_3, dmu_objset_type_t VAR_4,
    boolean_t VAR_5, void *VAR_6, objset_t **VAR_7)
{
 int VAR_8;

 VAR_8 = FUNC_1(VAR_3, VAR_7);
 if (VAR_8 != 0) {
  FUNC_2(VAR_3, VAR_6);
 } else if (VAR_4 != VAR_0 && VAR_4 != (*VAR_7)->os_phys->os_type) {
  FUNC_2(VAR_3, VAR_6);
  return (FUNC_0(VAR_1));
 } else if (!VAR_5 && FUNC_3(VAR_3)) {
  FUNC_2(VAR_3, VAR_6);
  return (FUNC_0(VAR_2));
 }
 return (VAR_8);
}
