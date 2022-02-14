
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int resp ;
typedef int ch ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 int VAR_4 ;
 int FUNC_3 (int ,char*,int) ;

int
FUNC_4(void)
{
 char VAR_5, *VAR_6, VAR_7, VAR_8[VAR_0];

 if (FUNC_2(VAR_4, &VAR_7, sizeof(VAR_7)) != sizeof(VAR_7))
  FUNC_1(0);

 VAR_6 = VAR_8;
 switch(VAR_7) {
 case 0:
  return (0);
 default:
  *VAR_6++ = VAR_7;

 case 1:
 case 2:
  do {
   if (FUNC_2(VAR_4, &VAR_5, sizeof(VAR_5)) != sizeof(VAR_5))
    FUNC_1(0);
   *VAR_6++ = VAR_5;
  } while (VAR_6 < &VAR_8[VAR_0] && VAR_5 != '\n');

  if (!VAR_3)
   FUNC_3(VAR_1, VAR_8, VAR_6 - VAR_8);
  ++VAR_2;
  if (VAR_7 == 1)
   return (-1);
  FUNC_0(1);
 }

}
