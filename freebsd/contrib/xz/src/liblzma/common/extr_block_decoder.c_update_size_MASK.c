
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ lzma_vli ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline bool
FUNC_0(lzma_vli *VAR_1, lzma_vli VAR_2, lzma_vli VAR_3)
{
 if (VAR_3 > VAR_0)
  VAR_3 = VAR_0;

 if (VAR_3 < *VAR_1 || VAR_3 - *VAR_1 < VAR_2)
  return 1;

 *VAR_1 += VAR_2;

 return 0;
}
