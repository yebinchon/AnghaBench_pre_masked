
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int int64_t ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (char const*,char*,int) ;
 int FUNC_1 (char*,char**,int ) ;

int
FUNC_2(const char *VAR_11, void *VAR_12, int VAR_13, int *VAR_14,
    int VAR_15, bool VAR_16)
{
 char VAR_17[VAR_2 + 1 + VAR_3 + 1];
 uint8_t VAR_18;
 int64_t VAR_19;
 int64_t VAR_20;
 char *VAR_21;
 char *VAR_22;
 int VAR_23;

 if (FUNC_0(VAR_11, VAR_17, sizeof(VAR_17)) == 0)
  return (0);


 VAR_13 /= VAR_15;

 VAR_23 = 0;

 for (VAR_22 = VAR_17; *VAR_22 != 0; ) {

  VAR_19 = FUNC_1(VAR_22, &VAR_21, 0);


  if (VAR_19 < 0 && !VAR_16)
   goto error;


  if (VAR_22 == VAR_21)
   goto error;


  switch (*VAR_21) {
  case 't':
  case 'T':
   VAR_18 = 40;
   VAR_21++;
   break;
  case 'g':
  case 'G':
   VAR_18 = 30;
   VAR_21++;
   break;
  case 'm':
  case 'M':
   VAR_18 = 20;
   VAR_21++;
   break;
  case 'k':
  case 'K':
   VAR_18 = 10;
   VAR_21++;
   break;
  case ' ':
  case '\t':
  case ',':
  case 0:
   VAR_18 = 0;
   break;
  default:

   goto error;
  }


  while (*VAR_21 == '\t' || *VAR_21 == ',' || *VAR_21 == ' ')
   VAR_21++;


  VAR_22 = VAR_21;


  VAR_20 = VAR_19;
  VAR_19 <<= VAR_18;


  if ((VAR_19 >> VAR_18) != VAR_20)
   goto error;


  if (VAR_23 >= VAR_13)
   goto error;


  switch (VAR_15) {
  case 1:
   if (VAR_16) {
    if (VAR_19 < VAR_5 || VAR_19 > VAR_4)
     goto error;
   } else {
    if (VAR_19 < 0 || VAR_19 > VAR_8)
     goto error;
   }
   ((uint8_t *)VAR_12)[VAR_23] = (uint8_t)VAR_19;
   break;
  case 2:
   if (VAR_16) {
    if (VAR_19 < VAR_7 || VAR_19 > VAR_6)
     goto error;
   } else {
    if (VAR_19 < 0 || VAR_19 > VAR_10)
     goto error;
   }
   ((uint16_t *)VAR_12)[VAR_23] = (uint16_t)VAR_19;
   break;
  case 4:
   if (VAR_16) {
    if (VAR_19 < VAR_1 || VAR_19 > VAR_0)
     goto error;
   } else {
    if (VAR_19 > VAR_9)
     goto error;
   }
   ((uint32_t *)VAR_12)[VAR_23] = (uint32_t)VAR_19;
   break;
  case 8:
   ((uint64_t *)VAR_12)[VAR_23] = (uint64_t)VAR_19;
   break;
  default:
   goto error;
  }
  VAR_23++;
 }
 *VAR_14 = VAR_23 * VAR_15;

 if (VAR_23 != 0)
  return (1);
error:
 return (0);
}
