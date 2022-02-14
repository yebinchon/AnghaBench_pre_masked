
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint_t ;
typedef int nvpair_t ;
typedef int data_type_t ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__,void*,size_t) ;
 int FUNC_3 (int,int *,int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(nvpair_t *VAR_2, data_type_t VAR_3, uint_t *VAR_4, void *VAR_5)
{
 if (VAR_2 == ((void*)0) || FUNC_4(VAR_2) != VAR_3)
  return (VAR_0);





 switch (VAR_3) {
 case 154:
  if (VAR_4 != ((void*)0))
   *VAR_4 = 0;
  break;

 case 152:
 case 151:
 case 141:
 case 129:
 case 147:
 case 135:
 case 145:
 case 133:
 case 143:
 case 131:
 case 148:

 case 149:

  if (VAR_5 == ((void*)0))
   return (VAR_0);
  FUNC_2(FUNC_1(VAR_2), VAR_5,
      (size_t)FUNC_3(VAR_3, ((void*)0), 1));
  if (VAR_4 != ((void*)0))
   *VAR_4 = 1;
  break;

 case 139:
 case 137:
  if (VAR_5 == ((void*)0))
   return (VAR_0);
  *(void **)VAR_5 = (void *)FUNC_1(VAR_2);
  if (VAR_4 != ((void*)0))
   *VAR_4 = 1;
  break;

 case 153:
 case 150:
 case 140:
 case 128:
 case 146:
 case 134:
 case 144:
 case 132:
 case 142:
 case 130:
 case 136:
 case 138:
  if (VAR_4 == ((void*)0) || VAR_5 == ((void*)0))
   return (VAR_0);
  if ((*VAR_4 = FUNC_0(VAR_2)) != 0)
   *(void **)VAR_5 = (void *)FUNC_1(VAR_2);
  else
   *(void **)VAR_5 = ((void*)0);
  break;

 default:
  return (VAR_1);
 }

 return (0);
}
