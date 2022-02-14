
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vm_offset_t ;
struct agp_memory {int am_size; int am_type; int am_is_bound; int am_offset; scalar_t__ am_physical; } ;
struct TYPE_4__ {int as_lock; } ;
struct agp_i810_softc {int * sc_res; TYPE_3__* match; TYPE_1__ agp; } ;
typedef int device_t ;
struct TYPE_6__ {TYPE_2__* driver; } ;
struct TYPE_5__ {scalar_t__ chiptype; int (* install_gtt_pte ) (int ,int,scalar_t__,int ) ;} ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,struct agp_memory*,int) ;
 int FUNC_2 (int ,scalar_t__,int) ;
 struct agp_i810_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int,scalar_t__,int ) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_5, struct agp_memory *VAR_6, vm_offset_t VAR_7)
{
 struct agp_i810_softc *VAR_8;
 vm_offset_t VAR_9;


 if ((VAR_7 & (VAR_2 - 1)) != 0 ||
     VAR_7 + VAR_6->am_size > FUNC_0(VAR_5)) {
  FUNC_4(VAR_5, "binding memory at bad offset %#x\n",
      (int)VAR_7);
  return (VAR_4);
 }

 VAR_8 = FUNC_3(VAR_5);
 if (VAR_6->am_type == 2 && VAR_6->am_size != VAR_2) {
  FUNC_5(&VAR_8->agp.as_lock);
  if (VAR_6->am_is_bound) {
   FUNC_6(&VAR_8->agp.as_lock);
   return (VAR_4);
  }

  for (VAR_9 = 0; VAR_9 < VAR_6->am_size; VAR_9 += VAR_2) {
   VAR_8->match->driver->install_gtt_pte(VAR_5, (VAR_7 + VAR_9) >>
       VAR_1, VAR_6->am_physical + VAR_9, 0);
  }
  VAR_6->am_offset = VAR_7;
  VAR_6->am_is_bound = 1;
  FUNC_6(&VAR_8->agp.as_lock);
  return (0);
 }

 if (VAR_6->am_type != 1)
  return (FUNC_1(VAR_5, VAR_6, VAR_7));




 if (VAR_8->match->driver->chiptype != VAR_3)
  return (VAR_4);
 for (VAR_9 = 0; VAR_9 < VAR_6->am_size; VAR_9 += VAR_2)
  FUNC_2(VAR_8->sc_res[0],
      VAR_0 + (VAR_9 >> VAR_1) * 4, VAR_9 | 3);

 return (0);
}
