
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static uint32_t
FUNC_2(int VAR_5, int VAR_6)
{
 uint32_t VAR_7;

 VAR_7 = 0;

 switch (VAR_5 + VAR_6) {
 FUNC_0(VAR_3, VAR_7);
 FUNC_0(VAR_2, VAR_7);
 FUNC_0(VAR_1, VAR_7);
 FUNC_0(VAR_0, VAR_7);
 default:
  FUNC_1(
      "trying to read from CP14 reg. using wrong opc2 %d\n",
      VAR_5 >> VAR_4);
 }

 return (VAR_7);
}
