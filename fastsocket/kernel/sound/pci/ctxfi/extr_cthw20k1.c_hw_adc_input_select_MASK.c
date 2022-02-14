
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw {int model; } ;
typedef enum ADCSRC { ____Placeholder_ADCSRC } ADCSRC ;


 int VAR_0 ;



 int FUNC_0 (struct hw*,int,int) ;
 int FUNC_1 (struct hw*,int,int) ;
 int FUNC_2 (struct hw*,int,int) ;

__attribute__((used)) static int FUNC_3(struct hw *VAR_1, enum ADCSRC VAR_2)
{
 int VAR_3 = VAR_2 == VAR_0;

 switch (VAR_1->model) {
 case 130:
  return FUNC_0(VAR_1, VAR_2, VAR_3);
 case 129:
  return FUNC_2(VAR_1, VAR_2, VAR_3);
 case 128:
  return FUNC_2(VAR_1, VAR_2, VAR_3);
 default:
  return FUNC_1(VAR_1, VAR_2, VAR_3);
 }
}
