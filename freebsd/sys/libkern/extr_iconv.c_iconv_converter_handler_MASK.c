
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iconv_converter_class {int dummy; } ;
typedef int module_t ;


 int VAR_0 ;
 int FUNC_0 (struct iconv_converter_class*) ;
 int FUNC_1 (struct iconv_converter_class*) ;


 int VAR_1 ;
 int FUNC_2 (struct iconv_converter_class*) ;
 int FUNC_3 (struct iconv_converter_class*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int
FUNC_6(module_t VAR_2, int VAR_3, void *VAR_4)
{
 struct iconv_converter_class *VAR_5 = VAR_4;
 int VAR_6;

 switch (VAR_3) {
     case 129:
  FUNC_4(&VAR_1);
  VAR_6 = FUNC_2(VAR_5);
  if (VAR_6) {
   FUNC_5(&VAR_1);
   break;
  }
  VAR_6 = FUNC_1(VAR_5);
  if (VAR_6)
   FUNC_3(VAR_5);
  FUNC_5(&VAR_1);
  break;
     case 128:
  FUNC_4(&VAR_1);
  FUNC_0(VAR_5);
  VAR_6 = FUNC_3(VAR_5);
  FUNC_5(&VAR_1);
  break;
     default:
  VAR_6 = VAR_0;
 }
 return VAR_6;
}
