
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef uintptr_t uint32_t ;


 int FUNC_0 (int,char*) ;
 uintptr_t VAR_0 ;

__attribute__((used)) static inline uint32_t
FUNC_1(const void *VAR_1)
{
 uintptr_t VAR_2;

 VAR_2 = (uintptr_t)VAR_1;
 FUNC_0(VAR_2 >= VAR_0, ("%p is too low!\n", VAR_1));
 VAR_2 -= VAR_0;
 FUNC_0((VAR_2 & 0x07) == 0, ("Pointer %p is not 8-byte aligned!\n", VAR_1));

 return (VAR_2 >> 3);
}
