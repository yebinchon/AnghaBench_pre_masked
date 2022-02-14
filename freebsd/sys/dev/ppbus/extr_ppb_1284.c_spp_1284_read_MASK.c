
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int VAR_0 ;




 int const VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int VAR_2 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int,int ) ;
 int FUNC_4 (int ,int const) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*) ;

int
FUNC_8(device_t VAR_3, int VAR_4, char *VAR_5, int VAR_6, int *VAR_7)
{
 int VAR_8 = 0, VAR_9 = 0;
 int VAR_10 = 1;
 int VAR_11;

 *VAR_7 = VAR_9 = 0;

 VAR_11 = FUNC_2(VAR_3);

 switch (VAR_11) {
 case 130:
  if ((VAR_8 = FUNC_3(VAR_3, VAR_4, 0)))
   return (VAR_8);
  break;

 case 128:
  VAR_10 = 0;
  break;

 default:
  FUNC_5(VAR_3);
  if ((VAR_8 = FUNC_3(VAR_3, VAR_4, 0)))
   return (VAR_8);
  break;
 }

 while ((VAR_9 < VAR_6) && !(FUNC_6(VAR_3) & (VAR_2))) {

  FUNC_4(VAR_3, VAR_1);





  switch (VAR_4) {
  case 129:

   if (FUNC_1(VAR_3, VAR_5+VAR_9))
    goto end_while;
   break;
  case 131:
   if (FUNC_0(VAR_3, VAR_5+VAR_9))
    goto end_while;
   break;
  default:
   VAR_8 = VAR_0;
   goto end_while;
  }
  VAR_9 ++;
 }
end_while:

 if (!VAR_8)
  FUNC_4(VAR_3, 128);

 *VAR_7 = VAR_9;

 if (VAR_10 || VAR_8)
  FUNC_5(VAR_3);

 return (VAR_8);
}
