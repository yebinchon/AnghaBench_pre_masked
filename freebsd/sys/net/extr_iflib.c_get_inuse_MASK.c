
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int qidx_t ;


 int FUNC_0 (char*) ;

__attribute__((used)) static inline qidx_t
FUNC_1(int VAR_0, qidx_t VAR_1, qidx_t VAR_2, uint8_t VAR_3)
{
 qidx_t VAR_4;

 if (VAR_2 > VAR_1)
  VAR_4 = VAR_2 - VAR_1;
 else if (VAR_2 < VAR_1)
  VAR_4 = VAR_0 - VAR_1 + VAR_2;
 else if (VAR_3 == 0 && VAR_2 == VAR_1)
  VAR_4 = 0;
 else if (VAR_3 == 1 && VAR_2 == VAR_1)
  VAR_4 = VAR_0;
 else
  FUNC_0("bad state");

 return (VAR_4);
}
