
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct ifmp_ring {int size; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline uint16_t
FUNC_1(struct ifmp_ring *VAR_0, uint16_t VAR_1, uint16_t VAR_2)
{
 int VAR_3 = VAR_0->size - VAR_1;

 FUNC_0(VAR_3 > 0);
 return (VAR_3 > VAR_2 ? VAR_1 + VAR_2 : VAR_2 - VAR_3);
}
