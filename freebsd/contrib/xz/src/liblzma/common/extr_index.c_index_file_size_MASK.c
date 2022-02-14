
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ lzma_vli ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static lzma_vli
FUNC_2(lzma_vli VAR_3, lzma_vli VAR_4,
  lzma_vli VAR_5, lzma_vli VAR_6,
  lzma_vli VAR_7)
{





 lzma_vli VAR_8 = VAR_3 + 2 * VAR_0
   + VAR_7 + FUNC_1(VAR_4);
 if (VAR_8 > VAR_1)
  return VAR_2;


 VAR_8 += FUNC_0(VAR_5, VAR_6);
 if (VAR_8 > VAR_1)
  return VAR_2;

 return VAR_8;
}
