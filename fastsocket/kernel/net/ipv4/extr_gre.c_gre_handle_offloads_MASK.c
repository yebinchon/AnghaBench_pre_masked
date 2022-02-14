
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int encapsulation; scalar_t__ ip_summed; } ;
struct TYPE_2__ {int gso_type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct sk_buff* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (struct sk_buff*) ;
 TYPE_1__* FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_7 (int) ;

struct sk_buff *FUNC_8(struct sk_buff *VAR_4, bool VAR_5)
{
 int VAR_6;

 if (FUNC_2(!VAR_4->encapsulation)) {

  VAR_4->encapsulation = 1;
 }

 if (FUNC_4(VAR_4)) {
  VAR_6 = FUNC_6(VAR_4, VAR_2);
  if (FUNC_7(VAR_6))
   goto error;
  FUNC_5(VAR_4)->gso_type |= VAR_3;
  return VAR_4;
 } else if (VAR_4->ip_summed == VAR_1 && VAR_5) {
  VAR_6 = FUNC_3(VAR_4);
  if (FUNC_7(VAR_6))
   goto error;
 } else if (VAR_4->ip_summed != VAR_1)
  VAR_4->ip_summed = VAR_0;

 return VAR_4;
error:
 FUNC_1(VAR_4);
 return FUNC_0(VAR_6);
}
