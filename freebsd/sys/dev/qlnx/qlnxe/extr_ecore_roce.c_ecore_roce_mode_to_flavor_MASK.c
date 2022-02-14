
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum roce_mode { ____Placeholder_roce_mode } roce_mode ;
typedef enum roce_flavor { ____Placeholder_roce_flavor } roce_flavor ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;

__attribute__((used)) static enum roce_flavor FUNC_0(enum roce_mode VAR_3)
{
 enum roce_flavor VAR_4;

 switch (VAR_3) {
 case 130:
  VAR_4 = VAR_1;
  break;
 case 129:
  VAR_4 = VAR_2;
  break;
 case 128:
  VAR_4 = (enum roce_flavor)128;
  break;
 default:
  VAR_4 = (enum roce_flavor)VAR_0;
  break;
 }
 return VAR_4;
}
