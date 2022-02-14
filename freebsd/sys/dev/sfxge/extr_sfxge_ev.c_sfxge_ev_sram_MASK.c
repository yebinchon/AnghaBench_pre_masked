
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;



 int FUNC_1 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static boolean_t
FUNC_2(void *VAR_4, uint32_t VAR_5)
{
 (void)VAR_4;
 (void)VAR_5;

 switch (VAR_5) {
 case 128:
  FUNC_0(VAR_3);
  break;

 case 130:
  FUNC_0(VAR_1);
  break;

 case 129:
  FUNC_0(VAR_2);
  break;

 default:
  FUNC_1(VAR_0, ("Impossible SRAM event"));
  break;
 }

 return (VAR_0);
}
