
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct _zone {scalar_t__ z_end; scalar_t__ z_begin; } ;
typedef scalar_t__ int32_t ;



__attribute__((used)) static int
FUNC_0(struct _zone *VAR_0, int32_t VAR_1, uint32_t VAR_2)
{
 uint32_t VAR_3;

 if (VAR_2 != 0 && VAR_0->z_end >= VAR_2)
  return (-1);

 if (VAR_1 > 0) {
  if (VAR_2 == 0)

   VAR_3 = (VAR_0->z_end == 0) ? 0xFFFFFFFF :
       0xFFFFFFFF - VAR_0->z_end + 1;
  else
   VAR_3 = VAR_2 - VAR_0->z_end;
  if ((uint32_t)VAR_1 > VAR_3)
   return (-1);
 } else if (VAR_1 < 0) {
  if (VAR_0->z_begin < (uint32_t)-VAR_1)
   return (-1);
 }

 return (0);
}
