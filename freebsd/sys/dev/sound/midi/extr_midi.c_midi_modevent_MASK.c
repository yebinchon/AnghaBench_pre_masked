
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int module_t ;




 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int,void*) ;

__attribute__((used)) static int
FUNC_3(module_t VAR_0, int VAR_1, void *VAR_2)
{
 int VAR_3;

 VAR_3 = 0;

 switch (VAR_1) {
 case 129:
  VAR_3 = FUNC_0();
  if (VAR_3 == 0)
   VAR_3 = FUNC_2(VAR_0, VAR_1, VAR_2);
  break;

 case 128:
  VAR_3 = FUNC_1();
  if (VAR_3 == 0)
   VAR_3 = FUNC_2(VAR_0, VAR_1, VAR_2);
  break;

 default:
  break;
 }

 return VAR_3;
}
