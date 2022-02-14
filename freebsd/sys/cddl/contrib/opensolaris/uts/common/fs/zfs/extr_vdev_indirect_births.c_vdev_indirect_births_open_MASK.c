
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_8__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int vib_entries; int vib_object; int * vib_objset; TYPE_1__* vib_phys; TYPE_8__* vib_dbuf; } ;
typedef TYPE_2__ vdev_indirect_births_t ;
typedef int uint64_t ;
typedef int objset_t ;
struct TYPE_11__ {TYPE_1__* db_data; } ;
struct TYPE_9__ {scalar_t__ vib_count; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,TYPE_2__*,TYPE_8__**) ;
 int FUNC_3 (int *,int ,int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ) ;
 TYPE_2__* FUNC_5 (int,int ) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;

vdev_indirect_births_t *
FUNC_8(objset_t *VAR_2, uint64_t VAR_3)
{
 vdev_indirect_births_t *VAR_4 = FUNC_5(sizeof (*VAR_4), VAR_1);

 VAR_4->vib_objset = VAR_2;
 VAR_4->vib_object = VAR_3;

 FUNC_1(FUNC_2(VAR_2, VAR_4->vib_object, VAR_4, &VAR_4->vib_dbuf));
 VAR_4->vib_phys = VAR_4->vib_dbuf->db_data;

 if (VAR_4->vib_phys->vib_count > 0) {
  uint64_t VAR_5 = FUNC_6(VAR_4);
  VAR_4->vib_entries = FUNC_4(VAR_5, VAR_1);
  FUNC_1(FUNC_3(VAR_4->vib_objset, VAR_4->vib_object, 0,
      VAR_5, VAR_4->vib_entries, VAR_0));
 }

 FUNC_0(FUNC_7(VAR_4));

 return (VAR_4);
}
