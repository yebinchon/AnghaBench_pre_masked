
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint_t ;
typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int uchar_t ;
typedef int nvlist_t ;
typedef int int8_t ;
typedef int int64_t ;
typedef int int32_t ;
typedef int int16_t ;
typedef int hrtime_t ;
typedef int data_type_t ;
typedef int boolean_t ;
 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,size_t) ;
 int FUNC_2 (char* const) ;

__attribute__((used)) static int
FUNC_3(data_type_t VAR_1, const void *VAR_2, uint_t VAR_3)
{
 uint64_t VAR_4;

 if (FUNC_1(VAR_1, VAR_3) != 0)
  return (-1);


 switch (VAR_1) {
 case 154:
  VAR_4 = 0;
  break;
 case 152:
  VAR_4 = sizeof (boolean_t);
  break;
 case 151:
  VAR_4 = sizeof (uchar_t);
  break;
 case 141:
  VAR_4 = sizeof (int8_t);
  break;
 case 129:
  VAR_4 = sizeof (uint8_t);
  break;
 case 147:
  VAR_4 = sizeof (int16_t);
  break;
 case 135:
  VAR_4 = sizeof (uint16_t);
  break;
 case 145:
  VAR_4 = sizeof (int32_t);
  break;
 case 133:
  VAR_4 = sizeof (uint32_t);
  break;
 case 143:
  VAR_4 = sizeof (int64_t);
  break;
 case 131:
  VAR_4 = sizeof (uint64_t);
  break;

 case 149:
  VAR_4 = sizeof (double);
  break;

 case 137:
  if (VAR_2 == ((void*)0))
   VAR_4 = 0;
  else
   VAR_4 = FUNC_2(VAR_2) + 1;
  break;
 case 153:
  VAR_4 = (uint64_t)VAR_3 * sizeof (boolean_t);
  break;
 case 150:
  VAR_4 = (uint64_t)VAR_3 * sizeof (uchar_t);
  break;
 case 140:
  VAR_4 = (uint64_t)VAR_3 * sizeof (int8_t);
  break;
 case 128:
  VAR_4 = (uint64_t)VAR_3 * sizeof (uint8_t);
  break;
 case 146:
  VAR_4 = (uint64_t)VAR_3 * sizeof (int16_t);
  break;
 case 134:
  VAR_4 = (uint64_t)VAR_3 * sizeof (uint16_t);
  break;
 case 144:
  VAR_4 = (uint64_t)VAR_3 * sizeof (int32_t);
  break;
 case 132:
  VAR_4 = (uint64_t)VAR_3 * sizeof (uint32_t);
  break;
 case 142:
  VAR_4 = (uint64_t)VAR_3 * sizeof (int64_t);
  break;
 case 130:
  VAR_4 = (uint64_t)VAR_3 * sizeof (uint64_t);
  break;
 case 136:
  VAR_4 = (uint64_t)VAR_3 * sizeof (uint64_t);

  if (VAR_2 != ((void*)0)) {
   char *const *VAR_5 = VAR_2;
   uint_t VAR_6;


   for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
    if (VAR_5[VAR_6] == ((void*)0))
     return (-1);
    VAR_4 += FUNC_2(VAR_5[VAR_6]) + 1;
   }
  }
  break;
 case 148:
  VAR_4 = sizeof (hrtime_t);
  break;
 case 139:
  VAR_4 = FUNC_0(sizeof (nvlist_t));
  break;
 case 138:
  VAR_4 = (uint64_t)VAR_3 * sizeof (uint64_t) +
      (uint64_t)VAR_3 * FUNC_0(sizeof (nvlist_t));
  break;
 default:
  return (-1);
 }

 return (VAR_4 > VAR_0 ? -1 : (int)VAR_4);
}
