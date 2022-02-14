
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vdev_label_t ;
typedef scalar_t__ uint64_t ;


 int VAR_0 ;

__attribute__((used)) static uint64_t
FUNC_0(uint64_t VAR_1, int VAR_2, uint64_t VAR_3)
{
 uint64_t VAR_4;

 if (VAR_2 < VAR_0 / 2)
  VAR_4 = 0;
 else
  VAR_4 = VAR_1 - VAR_0 * sizeof (vdev_label_t);

 return (VAR_3 + VAR_2 * sizeof (vdev_label_t) + VAR_4);
}
