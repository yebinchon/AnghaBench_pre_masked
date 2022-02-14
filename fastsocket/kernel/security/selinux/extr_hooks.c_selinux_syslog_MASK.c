
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(int VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_4);
 if (VAR_5)
  return VAR_5;

 switch (VAR_4) {
 case 3:
 case 10:
  VAR_5 = FUNC_1(VAR_3, VAR_2);
  break;
 case 6:
 case 7:
 case 8:
  VAR_5 = FUNC_1(VAR_3, VAR_0);
  break;
 case 0:
 case 1:
 case 2:
 case 4:
 case 5:
 default:
  VAR_5 = FUNC_1(VAR_3, VAR_1);
  break;
 }
 return VAR_5;
}
