
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mtk_pin_group {int dummy; } ;
typedef int phandle_t ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 struct mtk_pin_group* VAR_1 ;
 struct mtk_pin_group* VAR_2 ;
 struct mtk_pin_group* VAR_3 ;
 int FUNC_3 (int ,struct mtk_pin_group*,int) ;
 int FUNC_4 () ;
 struct mtk_pin_group* VAR_4 ;
 struct mtk_pin_group* VAR_5 ;
 struct mtk_pin_group* VAR_6 ;
 struct mtk_pin_group* VAR_7 ;
 struct mtk_pin_group* VAR_8 ;

__attribute__((used)) static int
FUNC_5(device_t VAR_9, phandle_t VAR_10)
{
 struct mtk_pin_group *VAR_11;
 phandle_t VAR_12, VAR_13;
 uint32_t VAR_14;
 int VAR_15;

 VAR_12 = FUNC_1(VAR_10);
 VAR_15 = 0;


 VAR_14 = FUNC_4();

 switch (VAR_14) {
 case 135:
  VAR_11 = VAR_4;
  break;
 case 134:
 case 133:
 case 132:
  VAR_11 = VAR_5;
  break;
 case 131:
  VAR_11 = VAR_6;
  break;
 case 130:
 case 129:
  VAR_11 = VAR_7;
  break;
 case 128:
  VAR_11 = VAR_8;
  break;
 case 140:
 case 139:
  VAR_11 = VAR_1;
  break;
 case 137:
 case 136:
  VAR_11 = VAR_3;
  break;
 case 138:
  VAR_11 = VAR_2;
  break;
 default:
  VAR_15 = VAR_0;
  goto out;
 }





 for (VAR_13 = FUNC_0(VAR_12); VAR_13 != 0 && VAR_13 != -1;
     VAR_13 = FUNC_2(VAR_13)) {
  if ((VAR_15 = FUNC_3(VAR_9, VAR_11, VAR_13)) != 0)
   return (VAR_15);
 }

out:
 return (VAR_15);
}
