
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wint_t ;
typedef int wctrans_t ;
typedef int locale_t ;


 int VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;

wint_t
FUNC_2(wint_t VAR_2, wctrans_t VAR_3, locale_t VAR_4)
{
 switch (VAR_3) {
 case 129:
  VAR_2 = FUNC_0(VAR_2, VAR_4);
  break;
 case 128:
  VAR_2 = FUNC_1(VAR_2, VAR_4);
  break;
 case 130:
 default:
  VAR_1 = VAR_0;
  break;
 }

 return (VAR_2);
}
