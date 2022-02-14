
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct agp_memory {int am_physical; int am_id; } ;
typedef int device_t ;
struct TYPE_3__ {int pg_count; int physical; int key; int type; } ;
typedef TYPE_1__ agp_allocate ;


 struct agp_memory* FUNC_0 (int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_1(device_t VAR_2, agp_allocate *VAR_3)
{
 struct agp_memory *VAR_4;

 VAR_4 = FUNC_0(VAR_2,
          VAR_3->type,
          VAR_3->pg_count << VAR_0);
 if (VAR_4) {
  VAR_3->key = VAR_4->am_id;
  VAR_3->physical = VAR_4->am_physical;
  return 0;
 } else {
  return VAR_1;
 }
}
