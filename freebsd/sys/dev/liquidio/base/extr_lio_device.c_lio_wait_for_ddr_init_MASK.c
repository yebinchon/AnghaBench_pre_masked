
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long uint32_t ;
struct octeon_device {int dummy; } ;


 int FUNC_0 (struct octeon_device*) ;
 int FUNC_1 (int) ;

int
FUNC_2(struct octeon_device *VAR_0, unsigned long *VAR_1)
{
 int VAR_2 = 1;
 uint32_t VAR_3;

 if (VAR_1 == ((void*)0))
  return (VAR_2);

 for (VAR_3 = 0; VAR_2 && ((*VAR_1 == 0) || (VAR_3 <= *VAR_1)); VAR_3 += 100) {
  VAR_2 = FUNC_0(VAR_0);


  if (VAR_2)
   FUNC_1(100);
 }

 return (VAR_2);
}
