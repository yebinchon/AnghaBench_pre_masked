
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vm_size_t ;
typedef int vm_page_t ;
struct agp_memory {int am_size; int am_type; scalar_t__ am_is_bound; scalar_t__ am_offset; scalar_t__ am_physical; scalar_t__ am_obj; scalar_t__ am_id; } ;
struct TYPE_6__ {int as_allocated; int as_maxmem; int as_memory; int as_nextid; } ;
struct agp_i810_softc {int dcache_size; TYPE_3__ agp; int * argb_cursor; TYPE_2__* match; } ;
typedef int device_t ;
struct TYPE_5__ {TYPE_1__* driver; } ;
struct TYPE_4__ {scalar_t__ chiptype; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,struct agp_memory*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_9 ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (int,int ,int ,int ,int ,int ,int ) ;
 struct agp_i810_softc* FUNC_6 (int ) ;
 struct agp_memory* FUNC_7 (int,int ,int ) ;
 int FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 int FUNC_10 (scalar_t__,int ,int) ;
 scalar_t__ FUNC_11 (int *) ;

__attribute__((used)) static struct agp_memory *
FUNC_12(device_t VAR_10, int VAR_11, vm_size_t VAR_12)
{
 struct agp_i810_softc *VAR_13;
 struct agp_memory *VAR_14;
 vm_page_t VAR_15;

 VAR_13 = FUNC_6(VAR_10);

 if ((VAR_12 & (VAR_0 - 1)) != 0 ||
     VAR_13->agp.as_allocated + VAR_12 > VAR_13->agp.as_maxmem)
  return (0);

 if (VAR_11 == 1) {



  if (VAR_13->match->driver->chiptype != VAR_1)
   return (0);
  if (VAR_12 != VAR_13->dcache_size)
   return (0);
 } else if (VAR_11 == 2) {







  if (VAR_12 != VAR_0) {
   if (VAR_13->argb_cursor != ((void*)0))
    return (0);


   VAR_13->argb_cursor = FUNC_5(VAR_12, VAR_2,
      0, 0, ~0, VAR_5, 0);
   if (VAR_13->argb_cursor == ((void*)0))
    return (0);
  }
 }

 VAR_14 = FUNC_7(sizeof *VAR_14, VAR_2, VAR_3);
 VAR_14->am_id = VAR_13->agp.as_nextid++;
 VAR_14->am_size = VAR_12;
 VAR_14->am_type = VAR_11;
 if (VAR_11 != 1 && (VAR_11 != 2 || VAR_12 == VAR_0))
  VAR_14->am_obj = FUNC_9(VAR_4,
      FUNC_4(FUNC_8(VAR_12)));
 else
  VAR_14->am_obj = 0;

 if (VAR_11 == 2) {
  if (VAR_12 == VAR_0) {




   FUNC_1(VAR_14->am_obj);
   VAR_15 = FUNC_10(VAR_14->am_obj, 0, VAR_6 |
       VAR_7 | VAR_8);
   FUNC_2(VAR_14->am_obj);
   VAR_14->am_physical = FUNC_3(VAR_15);
  } else {



   VAR_14->am_physical = FUNC_11(VAR_13->argb_cursor);
  }
 } else
  VAR_14->am_physical = 0;

 VAR_14->am_offset = 0;
 VAR_14->am_is_bound = 0;
 FUNC_0(&VAR_13->agp.as_memory, VAR_14, VAR_9);
 VAR_13->agp.as_allocated += VAR_12;

 return (VAR_14);
}
