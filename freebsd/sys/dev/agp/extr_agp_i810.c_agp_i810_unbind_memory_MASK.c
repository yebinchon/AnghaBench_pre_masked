
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vm_offset_t ;
struct agp_memory {int am_type; int am_size; int am_offset; scalar_t__ am_is_bound; } ;
struct TYPE_4__ {int as_lock; } ;
struct agp_i810_softc {TYPE_3__* match; TYPE_1__ agp; } ;
typedef int device_t ;
struct TYPE_6__ {TYPE_2__* driver; } ;
struct TYPE_5__ {scalar_t__ chiptype; int (* install_gtt_pte ) (int ,int,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct agp_memory*) ;
 struct agp_i810_softc* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int,int ,int ) ;
 int FUNC_5 (int ,int,int ,int ) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_4, struct agp_memory *VAR_5)
{
 struct agp_i810_softc *VAR_6;
 vm_offset_t VAR_7;

 VAR_6 = FUNC_1(VAR_4);

 if (VAR_5->am_type == 2 && VAR_5->am_size != VAR_1) {
  FUNC_2(&VAR_6->agp.as_lock);
  if (!VAR_5->am_is_bound) {
   FUNC_3(&VAR_6->agp.as_lock);
   return (VAR_3);
  }

  for (VAR_7 = 0; VAR_7 < VAR_5->am_size; VAR_7 += VAR_1) {
   VAR_6->match->driver->install_gtt_pte(VAR_4,
       (VAR_5->am_offset + VAR_7) >> VAR_0, 0, 0);
  }
  VAR_5->am_is_bound = 0;
  FUNC_3(&VAR_6->agp.as_lock);
  return (0);
 }

 if (VAR_5->am_type != 1)
  return (FUNC_0(VAR_4, VAR_5));

 if (VAR_6->match->driver->chiptype != VAR_2)
  return (VAR_3);
 for (VAR_7 = 0; VAR_7 < VAR_5->am_size; VAR_7 += VAR_1) {
  VAR_6->match->driver->install_gtt_pte(VAR_4, VAR_7 >> VAR_0,
      0, 0);
 }
 return (0);
}
