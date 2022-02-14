
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
typedef scalar_t__ uint32_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (unsigned int,scalar_t__) ;
 int FUNC_2 (unsigned int,scalar_t__) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void *
FUNC_5(uint32_t VAR_4, int VAR_5, uint32_t VAR_6)
{
 unsigned int VAR_7;
 vm_offset_t VAR_8;

 VAR_8 = 0;


 VAR_6 = FUNC_0(VAR_6);
 VAR_4 = FUNC_0(VAR_4);


 FUNC_3(&VAR_2);


 for (VAR_7 = 0; VAR_7 + VAR_4 <= VAR_0; VAR_7 += VAR_6) {
  if (FUNC_1(VAR_7, VAR_4)) {
   FUNC_2(VAR_7, VAR_4);
   VAR_8 = (vm_offset_t)VAR_3 +
       (VAR_7 * VAR_1);
   break;
  }
 }


 FUNC_4(&VAR_2);

 return ((void *)VAR_8);
}
