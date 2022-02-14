
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct ircomm_info {int dummy; } ;
struct ircomm_cb {int tsap; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct sk_buff*,int ) ;
 int FUNC_1 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_2(struct ircomm_cb *VAR_1,
      struct sk_buff *VAR_2,
      struct ircomm_info *VAR_3)
{
 int VAR_4;


 if(VAR_2)
  FUNC_1(VAR_2);

 VAR_4 = FUNC_0(VAR_1->tsap, VAR_2, VAR_0);

 return VAR_4;
}
