
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
typedef int gro_result_t ;







 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;

gro_result_t FUNC_2(gro_result_t VAR_0, struct sk_buff *VAR_1)
{
 switch (VAR_0) {
 case 128:
  if (FUNC_1(VAR_1))
   VAR_0 = 132;
  break;

 case 132:
 case 129:
  FUNC_0(VAR_1);
  break;

 case 131:
 case 130:
  break;
 }

 return VAR_0;
}
