
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int module_t ;


 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,char*) ;

__attribute__((used)) static int
FUNC_2(module_t VAR_2, int VAR_3, void *VAR_4)
{
 int VAR_5;

 switch (VAR_3) {
     case 129:
  VAR_5 = 0;
  FUNC_1(&VAR_1, "iconv");
  break;
     case 128:
  VAR_5 = FUNC_0();
  break;
     default:
  VAR_5 = VAR_0;
 }
 return VAR_5;
}
