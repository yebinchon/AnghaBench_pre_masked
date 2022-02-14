
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char const*,scalar_t__*,int,int ) ;
 int FUNC_1 (int ) ;

int
FUNC_2(const char *VAR_7, void *VAR_8, size_t VAR_9, int VAR_10,
    uint64_t VAR_11, uint64_t VAR_12)
{
 uint64_t VAR_13;

 if (VAR_11 > VAR_12)
  goto bad_argument;

 switch (VAR_9) {
 case 1:
  if (VAR_12 > VAR_3)
   goto bad_argument;
  break;
 case 2:
  if (VAR_12 > VAR_0)
   goto bad_argument;
  break;
 case 4:
  if (VAR_12 > VAR_1)
   goto bad_argument;
  break;
 case 8:
  if (VAR_12 > VAR_2)
   goto bad_argument;
  break;
 default:
  goto bad_argument;
 }

 if (VAR_11 == 0 && VAR_12 == 0) {

  VAR_12 = (1ULL << (8 * VAR_9 - 1)) * 2 - 1;
 }

 if (FUNC_0(VAR_7, &VAR_13, VAR_10, 0) == -1)
  return (-1);

 if (VAR_13 < VAR_11) {
  FUNC_1(VAR_6);
  return (-1);
 } else if (VAR_13 > VAR_12) {
  FUNC_1(VAR_5);
  return (-1);
 }

 switch (VAR_9) {
 case 1:
  *(uint8_t *)VAR_8 = VAR_13;
  return (0);
 case 2:
  *(uint16_t *)VAR_8 = VAR_13;
  return (0);
 case 4:
  *(uint32_t *)VAR_8 = VAR_13;
  return (0);
 case 8:
  *(uint64_t *)VAR_8 = VAR_13;
  return (0);
 default:
  break;
 }

bad_argument:
 FUNC_1(VAR_4);
 return (-1);
}
