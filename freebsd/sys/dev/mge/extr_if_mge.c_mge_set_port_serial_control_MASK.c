
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;






 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static uint32_t
FUNC_3(uint32_t VAR_11)
{
 uint32_t VAR_12;

 VAR_12 = VAR_9 | VAR_4 |
     FUNC_2(VAR_8);

 if (FUNC_1(VAR_11) == VAR_0) {
  switch(FUNC_0(VAR_11)) {
   case 128:
    break;
   case 131:
    VAR_12 |= (VAR_6 |
        VAR_2 | VAR_3
        | VAR_10);
    break;
   case 130:
    VAR_12 |= (VAR_7 |
        VAR_2 | VAR_3
        | VAR_10);
    break;
   case 129:
    VAR_12 |= (VAR_2 |
        VAR_3 |
        VAR_10);
    break;
  }
  if (VAR_11 & VAR_1)
   VAR_12 |= VAR_5;
 }
 return (VAR_12);
}
