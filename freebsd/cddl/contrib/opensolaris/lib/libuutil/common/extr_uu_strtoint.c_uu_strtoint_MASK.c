
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef void* int8_t ;
typedef void* int64_t ;
typedef void* int32_t ;
typedef void* int16_t ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (char const*,scalar_t__*,int,int) ;
 int FUNC_1 (int ) ;

int
FUNC_2(const char *VAR_11, void *VAR_12, size_t VAR_13, int VAR_14,
    int64_t VAR_15, int64_t VAR_16)
{
 uint64_t VAR_17;
 int64_t VAR_18;

 if (VAR_15 > VAR_16)
  goto bad_argument;

 switch (VAR_13) {
 case 1:
  if (VAR_16 > VAR_6 || VAR_15 < VAR_7)
   goto bad_argument;
  break;
 case 2:
  if (VAR_16 > VAR_0 || VAR_15 < VAR_1)
   goto bad_argument;
  break;
 case 4:
  if (VAR_16 > VAR_2 || VAR_15 < VAR_3)
   goto bad_argument;
  break;
 case 8:
  if (VAR_16 > VAR_4 || VAR_15 < VAR_5)
   goto bad_argument;
  break;
 default:
  goto bad_argument;
 }

 if (VAR_15 == 0 && VAR_16 == 0) {
  VAR_15 = -(1ULL << (8 * VAR_13 - 1));
  VAR_16 = (1ULL << (8 * VAR_13 - 1)) - 1;
 }

 if (FUNC_0(VAR_11, &VAR_17, VAR_14, 1) == -1)
  return (-1);

 VAR_18 = (int64_t)VAR_17;

 if (VAR_18 < VAR_15) {
  FUNC_1(VAR_10);
  return (-1);
 } else if (VAR_18 > VAR_16) {
  FUNC_1(VAR_9);
  return (-1);
 }

 switch (VAR_13) {
 case 1:
  *(int8_t *)VAR_12 = VAR_18;
  return (0);
 case 2:
  *(int16_t *)VAR_12 = VAR_18;
  return (0);
 case 4:
  *(int32_t *)VAR_12 = VAR_18;
  return (0);
 case 8:
  *(int64_t *)VAR_12 = VAR_18;
  return (0);
 default:
  break;
 }

bad_argument:
 FUNC_1(VAR_8);
 return (-1);
}
