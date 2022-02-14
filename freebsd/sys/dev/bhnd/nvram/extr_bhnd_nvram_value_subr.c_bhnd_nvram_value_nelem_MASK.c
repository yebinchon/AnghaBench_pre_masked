
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bhnd_nvram_type ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_2 (int) ;
 int FUNC_3 (void const*,size_t,int) ;
 size_t FUNC_4 (char const*,size_t) ;

int
FUNC_5(const void *VAR_2, size_t VAR_3, bhnd_nvram_type VAR_4,
    size_t *VAR_5)
{
 int VAR_6;

 FUNC_0(VAR_2 != ((void*)0), ("NULL inp"));


 if ((VAR_6 = FUNC_3(VAR_2, VAR_3, VAR_4)))
  return (VAR_6);

 switch (VAR_4) {
 case 147:

  *VAR_5 = 1;
  return (0);

 case 138:

  if (VAR_3 != 0)
   return (VAR_0);


  *VAR_5 = 1;
  return (0);

 case 137:

  *VAR_5 = 1;
  return (0);

 case 136: {
  const char *VAR_7;
  size_t VAR_8;



  VAR_7 = VAR_2;
  VAR_8 = VAR_3;
  *VAR_5 = 0;
  while (VAR_8 > 0) {
   size_t VAR_9;


   (*VAR_5)++;


   VAR_9 = FUNC_4(VAR_7, VAR_8);
   VAR_8 -= VAR_9;


   VAR_7 += VAR_9;



   if (VAR_8 > 0) {
    VAR_8--;
    VAR_7++;
   }
  }

  return (0);
 }

 case 128:
 case 134:
 case 132:
 case 130:
 case 139:
 case 145:
 case 143:
 case 141:
 case 148:
 case 150: {
  size_t VAR_10 = FUNC_2(VAR_4);
  FUNC_0(VAR_10 != 0, ("invalid width"));

  *VAR_5 = VAR_3 / VAR_10;
  return (0);
 }

 case 140:
 case 129:
 case 149:
 case 146:
 case 135:
 case 144:
 case 133:
 case 142:
 case 131:
 case 151:



  if (VAR_3 != FUNC_2(VAR_4))
   return (VAR_1);
  *VAR_5 = 1;
  return (0);
 }


 FUNC_1("bhnd nvram type %u unknown", VAR_4);
}
