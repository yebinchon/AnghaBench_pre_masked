
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



 int VAR_0 ;

 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int const) ;
 void* FUNC_2 (void const*,int,int) ;

uint32_t FUNC_3(const void *VAR_2, int VAR_3, int *VAR_4)
{
 const uint32_t *VAR_5, *VAR_6;
 uint32_t VAR_7;
 const char *VAR_8;

 if (VAR_3 % VAR_1)
  return -1;

 VAR_5 = FUNC_2(VAR_2, VAR_3, VAR_1);
 if (! VAR_5)
  return VAR_0;
 VAR_7 = FUNC_1(*VAR_5);
 VAR_3 += VAR_1;

 switch (VAR_7) {
 case 129:

  do {
   VAR_8 = FUNC_2(VAR_2, VAR_3++, 1);
  } while (VAR_8 && (*VAR_8 != '\0'));
  if (! VAR_8)
   return VAR_0;
  break;
 case 128:
  VAR_6 = FUNC_2(VAR_2, VAR_3, sizeof(*VAR_6));
  if (! VAR_6)
   return VAR_0;

  VAR_3 += 2*VAR_1 + FUNC_1(*VAR_6);
  break;
 }

 if (VAR_4)
  *VAR_4 = FUNC_0(VAR_3);

 return VAR_7;
}
