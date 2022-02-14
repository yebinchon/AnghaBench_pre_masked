
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lithium_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int,int *,int,int *,int) ;

__attribute__((used)) static int FUNC_4(lithium_t *VAR_5, int VAR_6)
{
 int VAR_7;
 int VAR_8;

 switch (VAR_6) {
 case 128:
  VAR_7 = 6;
  break;

 case 129:
  VAR_7 = 1;
  break;

 case 130:
  VAR_7 = 2;
  break;

 case 131:
  VAR_7 = 3;
  break;

 default:
  return -VAR_0;
 }
 VAR_8 = FUNC_1(VAR_5, &VAR_3);
 if (VAR_6 == 128 && VAR_8 != 6) {
  FUNC_0("enabling digital resample mode\n");
  FUNC_2(VAR_5, 1);
  FUNC_3(VAR_5, 2,
       &VAR_1, 2,
       &VAR_2, 2);
 } else if (VAR_6 != 128 && VAR_8 == 6) {
  FUNC_0("disabling digital resample mode\n");
  FUNC_2(VAR_5, 0);
  FUNC_3(VAR_5, 2,
       &VAR_1, 0,
       &VAR_2, 0);
 }
 FUNC_3(VAR_5, 2, &VAR_3, VAR_7, &VAR_4, VAR_7);
 return VAR_6;
}
