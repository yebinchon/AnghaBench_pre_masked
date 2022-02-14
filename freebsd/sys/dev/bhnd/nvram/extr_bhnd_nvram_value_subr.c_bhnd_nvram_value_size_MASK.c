
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int bhnd_nvram_type ;
typedef int bhnd_nvram_bool_t ;
 int FUNC_0 (char*,int ,size_t) ;
 int FUNC_1 (char*,int) ;
 size_t VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 size_t FUNC_5 (int) ;
 size_t FUNC_6 (void const*,size_t) ;

size_t
FUNC_7(const void *VAR_1, size_t VAR_2, bhnd_nvram_type VAR_3,
    size_t VAR_4)
{

 if (VAR_4 == 0)
  return (0);


 if (!FUNC_3(VAR_3) && VAR_4 != 1)
  return (0);

 switch (VAR_3) {
 case 128:
 case 134:
 case 132:
 case 130:
 case 139:
 case 145:
 case 143:
 case 141:
 case 148:
 case 150:{
  size_t VAR_5;

  VAR_5 = FUNC_5(VAR_3);


  if (VAR_0 / VAR_4 < VAR_5) {
   FUNC_0("cannot represent size %s[%zu]\n",
       FUNC_4(FUNC_2(VAR_3)),
       VAR_4);
   return (0);
  }

  return (VAR_4 * VAR_5);
 }

 case 136: {
  const char *VAR_6;
  size_t VAR_7;

  if (VAR_1 == ((void*)0))
   return (0);



  VAR_6 = VAR_1;
  VAR_7 = 0;
  for (size_t VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
   size_t VAR_9;

   VAR_9 = FUNC_6(VAR_6, VAR_2 - VAR_7);
   VAR_6 += VAR_9;


   if (VAR_7 < VAR_2 && *VAR_6 == '\0') {
    VAR_9++;
    VAR_6++;
   }





   if (VAR_0 - VAR_7 < VAR_9)
    return (0);

   VAR_7 += VAR_9;
  }

  return (VAR_7);
 }

 case 137: {
  size_t VAR_10;

  if (VAR_1 == ((void*)0))
   return (0);


  VAR_10 = FUNC_6(VAR_1, VAR_2);



  if (VAR_10 < VAR_2)
   VAR_10++;

  return (VAR_10);
 }

 case 138:
  return (0);

 case 147:
  if (VAR_1 == ((void*)0))
   return (0);

  return (VAR_2);

 case 151:
  return (sizeof(bhnd_nvram_bool_t));

 case 140:
 case 129:
 case 149:
  return (sizeof(uint8_t));

 case 146:
 case 135:
  return (sizeof(uint16_t));

 case 144:
 case 133:
  return (sizeof(uint32_t));

 case 131:
 case 142:
  return (sizeof(uint64_t));
 }


 FUNC_1("bhnd nvram type %u unknown", VAR_3);
}
