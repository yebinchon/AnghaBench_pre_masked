
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tsc ;
struct tc_service_curve {void* m2; int d; void* m1; } ;
struct sk_buff {int len; } ;
struct internal_sc {int sm2; int dx; int sm1; } ;


 int FUNC_0 (struct sk_buff*,int,int,struct tc_service_curve*) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(struct sk_buff *VAR_0, int VAR_1, struct internal_sc *VAR_2)
{
 struct tc_service_curve VAR_3;

 VAR_3.m1 = FUNC_2(VAR_2->sm1);
 VAR_3.d = FUNC_1(VAR_2->dx);
 VAR_3.m2 = FUNC_2(VAR_2->sm2);
 FUNC_0(VAR_0, VAR_1, sizeof(VAR_3), &VAR_3);

 return VAR_0->len;

 nla_put_failure:
 return -1;
}
