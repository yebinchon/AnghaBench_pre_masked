
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
typedef int randval ;


 int FUNC_0 (scalar_t__*,scalar_t__*,size_t) ;
 scalar_t__ FUNC_1 () ;

__attribute__((used)) static __inline void
FUNC_2(void *VAR_0, size_t VAR_1)
{
 uint16_t *VAR_2 = VAR_0;
 uint16_t VAR_3;

 while (VAR_1 >= sizeof(VAR_3)) {
  *VAR_2++ = (uint16_t)FUNC_1();
  VAR_1 -= sizeof(*VAR_2);
 }
 VAR_3 = (uint16_t)FUNC_1();
 FUNC_0(VAR_2, &VAR_3, VAR_1);
}
