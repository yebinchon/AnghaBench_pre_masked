
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_size_t ;
struct agp_softc {int as_maxmem; int as_allocated; int as_memory; int as_nextid; } ;
struct agp_memory {int am_size; scalar_t__ am_is_bound; scalar_t__ am_offset; scalar_t__ am_physical; int am_obj; scalar_t__ am_type; scalar_t__ am_id; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,struct agp_memory*,int ) ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 struct agp_softc* FUNC_2 (int ) ;
 struct agp_memory* FUNC_3 (int,int ,int ) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,int ) ;

struct agp_memory *
FUNC_7(device_t VAR_5, int VAR_6, vm_size_t VAR_7)
{
 struct agp_softc *VAR_8 = FUNC_2(VAR_5);
 struct agp_memory *VAR_9;

 if ((VAR_7 & (VAR_0 - 1)) != 0)
  return 0;

 if (VAR_7 > VAR_8->as_maxmem - VAR_8->as_allocated)
  return 0;

 if (VAR_6 != 0) {
  FUNC_4("agp_generic_alloc_memory: unsupported type %d\n",
         VAR_6);
  return 0;
 }

 VAR_9 = FUNC_3(sizeof *VAR_9, VAR_1, VAR_2);
 VAR_9->am_id = VAR_8->as_nextid++;
 VAR_9->am_size = VAR_7;
 VAR_9->am_type = 0;
 VAR_9->am_obj = FUNC_6(VAR_3, FUNC_1(FUNC_5(VAR_7)));
 VAR_9->am_physical = 0;
 VAR_9->am_offset = 0;
 VAR_9->am_is_bound = 0;
 FUNC_0(&VAR_8->as_memory, VAR_9, VAR_4);
 VAR_8->as_allocated += VAR_7;

 return VAR_9;
}
