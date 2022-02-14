
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ vdev_nonrot; } ;
typedef TYPE_1__ vdev_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_8__ {scalar_t__ mm_root; } ;
typedef TYPE_2__ mirror_map_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_3(mirror_map_t *VAR_6, vdev_t *VAR_7, uint64_t VAR_8)
{
 uint64_t VAR_9;
 int VAR_10;


 if (VAR_6->mm_root)
  return (VAR_0);
 VAR_10 = FUNC_2(VAR_7);
 VAR_9 = FUNC_1(VAR_7);

 if (VAR_7->vdev_nonrot) {

  if (VAR_9 == VAR_8)
   return (VAR_10 + VAR_1);







  return (VAR_10 + VAR_2);
 }


 if (VAR_9 == VAR_8)
  return (VAR_10 + VAR_3);






 if (FUNC_0(VAR_9 - VAR_8) < VAR_5)
  return (VAR_10 + (VAR_4 / 2));


 return (VAR_10 + VAR_4);
}
