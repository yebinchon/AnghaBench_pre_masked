
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sop ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int
FUNC_2(sop *VAR_2, int VAR_3)
{
 int VAR_4;
 int VAR_5;
 sop VAR_6;


 if (VAR_3 == -1)
  return -1;

 VAR_4 = 0;
 VAR_5 = 0;
 VAR_6 = *VAR_2++;
 while (FUNC_0(VAR_6) != (sop)VAR_1 && FUNC_0(VAR_6) != (sop)VAR_0) {
  switch (FUNC_0(VAR_6)) {
  case 131:
   if (VAR_5 > VAR_4)
    VAR_4 = VAR_5;
   VAR_5 = 0;
   break;
  case 129:
  case 134:
   VAR_5 = FUNC_2(VAR_2, VAR_5);
   if (VAR_5 == -1)
    return -1;
   VAR_2--;
   do {
    VAR_2 += FUNC_1(VAR_6);
    VAR_6 = *VAR_2;
    if (FUNC_0(VAR_6) != (sop)VAR_1 &&
        FUNC_0(VAR_6) != (sop)VAR_0 && FUNC_0(VAR_6) != (sop)130)
     return -1;
   } while (FUNC_0(VAR_6) != (sop)VAR_1 && FUNC_0(VAR_6) != (sop)VAR_0);



   VAR_2++;
   break;
  case 137:
  case 135:
  case 138:
   VAR_5++;
  case 136:
  case 133:
  case 132:
  case 128:
  case 130:
   break;
  default:
   VAR_5 = -1;
   break;
  }
  if (VAR_5 == -1)
   return -1;
  VAR_6 = *VAR_2++;
 }

 if (VAR_5 > VAR_4)
  VAR_4 = VAR_5;

 return VAR_4+VAR_3;
}
