
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct voistatspec {int * iv; scalar_t__ hlpr; } ;


 int FUNC_0 (void*) ;

void
FUNC_1(uint32_t VAR_0, struct voistatspec *VAR_1)
{
 int VAR_2;

 for (VAR_2 = VAR_0 - 1; VAR_2 >= 0; VAR_2--) {
  if (VAR_1[VAR_2].hlpr) {
   FUNC_0((void *)VAR_1[VAR_2].iv);
   VAR_1[VAR_2].iv = ((void*)0);
  }
 }
}
