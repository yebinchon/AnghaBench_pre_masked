
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint64_t ;


 size_t FUNC_0 (size_t volatile*) ;
 int FUNC_1 (size_t volatile*,size_t) ;

__attribute__((used)) static inline void
FUNC_2(volatile uint64_t *VAR_0, size_t VAR_1, uint64_t VAR_2)
{
 uint64_t VAR_3 = FUNC_0(VAR_0);

 if (VAR_3 >= VAR_2 - VAR_1)
  VAR_3 -= VAR_2;

 VAR_3 += VAR_1;
 FUNC_1(VAR_0, VAR_3);
}
