
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int io_flags; } ;
typedef TYPE_1__ zio_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_7__ {scalar_t__* mc_alloc_max_slots; int mc_lock; int * mc_alloc_slots; int mc_alloc_throttle_enabled; } ;
typedef TYPE_2__ metaslab_class_t ;
typedef int boolean_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_5 (int *) ;

boolean_t
FUNC_6(metaslab_class_t *VAR_3, int VAR_4, int VAR_5,
    zio_t *VAR_6, int VAR_7)
{
 uint64_t VAR_8 = 0;
 boolean_t VAR_9 = VAR_0;
 uint64_t VAR_10 = VAR_3->mc_alloc_max_slots[VAR_5];

 FUNC_0(VAR_3->mc_alloc_throttle_enabled);
 FUNC_2(&VAR_3->mc_lock);

 uint64_t VAR_11 =
     FUNC_5(&VAR_3->mc_alloc_slots[VAR_5]);
 if (VAR_11 < VAR_10)
  VAR_8 = VAR_10 - VAR_11;

 if (VAR_4 <= VAR_8 || FUNC_1(VAR_7)) {




  for (int VAR_12 = 0; VAR_12 < VAR_4; VAR_12++) {
   VAR_11 =
       FUNC_4(&VAR_3->mc_alloc_slots[VAR_5],
       VAR_6);
  }
  VAR_6->io_flags |= VAR_2;
  VAR_9 = VAR_1;
 }

 FUNC_3(&VAR_3->mc_lock);
 return (VAR_9);
}
