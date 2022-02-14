
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_4(uint16_t *VAR_5, int VAR_6)
{
 int VAR_7, VAR_8;

 if (VAR_6 <= 0 || VAR_6 > VAR_1)
  FUNC_2("invalid number of vpids requested: %d", VAR_6);





 if ((VAR_2 & VAR_0) == 0) {
  for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
   VAR_5[VAR_7] = 0;
  return;
 }




 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
  VAR_8 = FUNC_0(VAR_4);
  if (VAR_8 == -1)
   break;
  else
   VAR_5[VAR_7] = VAR_8;
 }

 if (VAR_7 < VAR_6) {
  FUNC_1(&VAR_3, 1);
  while (VAR_7-- > 0)
   FUNC_3(VAR_5[VAR_7]);

  for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
   VAR_5[VAR_7] = VAR_7 + 1;
 }
}
