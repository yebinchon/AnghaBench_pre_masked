
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ wchar_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
typedef int _UTF7State ;
typedef int _UTF7EncodingInfo ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,char*,size_t,scalar_t__,int *,size_t*) ;

__attribute__((used)) static int
FUNC_2(_UTF7EncodingInfo * __restrict VAR_6,
    char * __restrict VAR_7, size_t VAR_8, wchar_t VAR_9,
    _UTF7State * __restrict VAR_10, size_t * __restrict VAR_11)
{
 uint32_t VAR_12;
 uint16_t VAR_13[2];
 int VAR_14, VAR_15, VAR_16;
 size_t VAR_17, VAR_18;

 VAR_12 = (uint32_t)VAR_9;
 if (VAR_12 <= VAR_4) {
  VAR_13[0] = (uint16_t)VAR_12;
  VAR_16 = 1;
 } else if (VAR_12 <= VAR_5) {
  VAR_12 -= VAR_3;
  VAR_13[0] = (VAR_12 >> 10) + VAR_1;
  VAR_13[1] = ((uint16_t)(VAR_12 & FUNC_0(0x3ff))) + VAR_2;
  VAR_16 = 2;
 } else {
  *VAR_11 = (size_t)-1;
  return (VAR_0);
 }
 VAR_18 = 0;
 for (VAR_15 = 0; VAR_15 < VAR_16; ++VAR_15) {
  VAR_14 = FUNC_1(VAR_6, VAR_7, VAR_8, VAR_13[VAR_15], VAR_10, &VAR_17);
  if (VAR_14 != 0)
   return (VAR_14);
  VAR_7 += VAR_17;
  VAR_8 -= VAR_17;
  VAR_18 += VAR_17;
 }
 *VAR_11 = VAR_18;

 return (0);
}
