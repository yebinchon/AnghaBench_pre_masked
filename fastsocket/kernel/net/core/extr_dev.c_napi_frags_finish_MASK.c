
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int protocol; } ;
struct napi_struct {int dev; } ;
typedef int gro_result_t ;


 int VAR_0 ;





 int FUNC_0 (struct sk_buff*,int ) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct napi_struct*,struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*,int ) ;

gro_result_t FUNC_5(struct napi_struct *VAR_1, struct sk_buff *VAR_2,
          gro_result_t VAR_3)
{
 switch (VAR_3) {
 case 128:
 case 131:





  VAR_2->protocol = FUNC_0(VAR_2, VAR_1->dev);

  if (VAR_3 == 131)
   FUNC_4(VAR_2, -VAR_0);
  else if (FUNC_3(VAR_2))
   VAR_3 = 132;
  break;

 case 132:
  FUNC_1(VAR_2);
  break;

 case 129:
  FUNC_2(VAR_1, VAR_2);
  break;

 case 130:
  break;
 }

 return VAR_3;
}
