
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef int uint16_t ;
typedef int int16_t ;


 uintptr_t VAR_0 ;
 scalar_t__ FUNC_0 (int ,int,int,int ,int*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (void volatile*,int,int ) ;
 int VAR_2 ;

int
FUNC_3(volatile void *VAR_3, int VAR_4)
{

 if ((uintptr_t)VAR_3 + sizeof(uint16_t) < (uintptr_t)VAR_3 ||
     (uintptr_t)VAR_3 + sizeof(uint16_t) > VAR_0)
  return (-1);
 if (VAR_1 && FUNC_2(VAR_3, VAR_4, FUNC_1())
     == 0)
  return (0);
 return (FUNC_0((vm_offset_t)VAR_3, sizeof(int16_t), 1,
     VAR_2, &VAR_4) != 0 ? -1 : 0);
}
