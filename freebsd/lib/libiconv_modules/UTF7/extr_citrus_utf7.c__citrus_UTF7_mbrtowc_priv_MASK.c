
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ wchar_t ;
typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
struct TYPE_5__ {int chlen; } ;
typedef TYPE_1__ _UTF7State ;
typedef int _UTF7EncodingInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int *,int*,char**,size_t,TYPE_1__*,size_t*) ;

__attribute__((used)) static int
FUNC_2(_UTF7EncodingInfo * __restrict VAR_7,
    wchar_t * __restrict VAR_8, char ** __restrict VAR_9, size_t VAR_10,
    _UTF7State * __restrict VAR_11, size_t * __restrict VAR_12)
{
 uint32_t VAR_13;
 uint16_t VAR_14, VAR_15;
 size_t VAR_16, VAR_17;
 int VAR_18;

 if (*VAR_9 == ((void*)0)) {
  FUNC_0(VAR_7, VAR_11);
  *VAR_12 = (size_t)VAR_6;
  return (0);
 }
 VAR_18 = FUNC_1(VAR_7, &VAR_14, VAR_9, VAR_10, VAR_11, &VAR_16);
 if (VAR_16 == (size_t)-1 || VAR_16 == (size_t)-2) {
  *VAR_12 = VAR_16;
  return (VAR_18);
 }
 if (VAR_18 != 0)
  return (VAR_18);
 VAR_10 -= VAR_16;
 VAR_17 = VAR_16;
 if (VAR_14 < VAR_2 || VAR_14 > VAR_1) {
  VAR_13 = (uint32_t)VAR_14;
  goto done;
 }
 VAR_18 = FUNC_1(VAR_7, &VAR_15, VAR_9, VAR_10, VAR_11, &VAR_16);
 if (VAR_16 == (size_t)-1 || VAR_16 == (size_t)-2) {
  VAR_11->chlen = 1;
  *VAR_12 = VAR_16;
  return (VAR_18);
 }
 if (VAR_18 != 0)
  return (VAR_18);
 if (VAR_15 < VAR_4 || VAR_15 > VAR_3) {
  *VAR_12 = (size_t)-1;
  return (VAR_0);
 }
 VAR_14 -= VAR_2;
 VAR_15 -= VAR_4;
 VAR_13 = (VAR_14 << 10 | VAR_15) + VAR_5;
 VAR_17 += VAR_16;
done:
 if (VAR_8 != ((void*)0))
  *VAR_8 = (wchar_t)VAR_13;
 if (VAR_13 == (uint32_t)0) {
  *VAR_12 = (size_t)0;
  FUNC_0(VAR_7, VAR_11);
 } else {
  *VAR_12 = VAR_17;
 }
 return (VAR_18);
}
