
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_ooffset_t ;
typedef scalar_t__ off_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline vm_ooffset_t
FUNC_1(int VAR_1, off_t VAR_2)
{

 if (VAR_1 == 0)
  return ((vm_ooffset_t)VAR_2);

 return (FUNC_0(VAR_2 + VAR_1 * VAR_0));
}
