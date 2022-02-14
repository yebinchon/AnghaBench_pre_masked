
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;


 void* FUNC_0 (unsigned int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (unsigned int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (unsigned int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(const char *VAR_10, uint64_t *VAR_11, uint32_t VAR_12, int VAR_13)
{
 const unsigned char *VAR_14 = (const unsigned char *)VAR_10;

 uint64_t VAR_15 = 0;
 uint64_t VAR_16;

 unsigned VAR_17, VAR_18;

 int VAR_19 = 0;

 int VAR_20 = 0;
 int VAR_21 = 0;
 int VAR_22 = 0;

 if (VAR_14 == ((void*)0) || VAR_12 == 1 || VAR_12 > VAR_2) {
  FUNC_3(VAR_5);
  return (-1);
 }

 while ((VAR_17 = *VAR_14) != 0 && FUNC_2(VAR_17))
  VAR_14++;

 switch (VAR_17) {
 case '-':
  if (!VAR_13)
   VAR_22 = 1;
  VAR_19 = 1;

 case '+':
  VAR_17 = *++VAR_14;
  break;
 default:
  break;
 }

 if (VAR_17 == '\0') {
  FUNC_3(VAR_4);
  return (-1);
 }

 if (VAR_12 == 0) {
  if (VAR_17 != '0')
   VAR_12 = 10;
  else if (VAR_14[1] == 'x' || VAR_14[1] == 'X')
   VAR_12 = 16;
  else
   VAR_12 = 8;
 }

 if (VAR_12 == 16 && VAR_17 == '0' && (VAR_14[1] == 'x' || VAR_14[1] == 'X'))
  VAR_17 = *(VAR_14 += 2);

 if ((VAR_15 = FUNC_0(VAR_17)) >= VAR_12) {
  if (FUNC_1(VAR_17))
   VAR_20 = 1;
  else
   VAR_21 = 1;
  VAR_15 = 0;
 }

 VAR_16 = (uint64_t)VAR_3 / (uint64_t)VAR_12;

 for (VAR_17 = *++VAR_14; VAR_17 != '\0'; VAR_17 = *++VAR_14) {
  if ((VAR_18 = FUNC_0(VAR_17)) >= VAR_12) {
   if (FUNC_2(VAR_17))
    break;
   if (FUNC_1(VAR_17))
    VAR_20 = 1;
   else
    VAR_21 = 1;
   VAR_18 = 0;
  }

  if (VAR_15 > VAR_16)
   VAR_22 = 1;

  VAR_15 *= VAR_12;
  if ((uint64_t)VAR_3 - VAR_15 < (uint64_t)VAR_18)
   VAR_22 = 1;

  VAR_15 += VAR_18;
 }

 while ((VAR_17 = *VAR_14) != 0) {
  if (!FUNC_2(VAR_17))
   VAR_21 = 1;
  VAR_14++;
 }

 if (VAR_13) {
  if (VAR_19) {
   if (VAR_15 > -(uint64_t)VAR_1)
    VAR_22 = 1;
  } else {
   if (VAR_15 > VAR_0)
    VAR_22 = 1;
  }
 }

 if (VAR_19)
  VAR_15 = -VAR_15;

 if (VAR_21 | VAR_20 | VAR_22) {
  if (VAR_21)
   FUNC_3(VAR_6);
  else if (VAR_20)
   FUNC_3(VAR_7);
  else if (VAR_22) {
   if (VAR_19)
    FUNC_3(VAR_9);
   else
    FUNC_3(VAR_8);
  }
  return (-1);
 }

 *VAR_11 = VAR_15;
 return (0);
}
