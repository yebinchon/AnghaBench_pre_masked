
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ ip_summed; int csum_start; scalar_t__ data; scalar_t__ csum_offset; scalar_t__ len; } ;
typedef int __wsum ;
typedef int __sum16 ;
struct TYPE_2__ {int gso_size; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*,int ,int ,int ) ;
 int FUNC_4 (struct sk_buff*,int,scalar_t__,int ) ;
 int FUNC_5 (struct sk_buff*,int) ;
 scalar_t__ FUNC_6 (struct sk_buff*) ;
 scalar_t__ FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*) ;
 TYPE_1__* FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (struct sk_buff*) ;
 scalar_t__ FUNC_12 (int ) ;

int FUNC_13(struct sk_buff *VAR_4)
{
 __wsum VAR_5;
 int VAR_6 = 0, VAR_7;

 if (VAR_4->ip_summed == VAR_0)
  goto out_set_summed;

 if (FUNC_12(FUNC_10(VAR_4)->gso_size)) {
  FUNC_11(VAR_4);
  return -VAR_2;
 }




 if (FUNC_7(VAR_4)) {
  VAR_6 = FUNC_1(VAR_4);
  if (VAR_6)
   goto out;
 }

 VAR_7 = VAR_4->csum_start - FUNC_9(VAR_4);
 FUNC_0(VAR_7 >= FUNC_8(VAR_4));
 VAR_5 = FUNC_4(VAR_4, VAR_7, VAR_4->len - VAR_7, 0);

 VAR_7 += VAR_4->csum_offset;
 FUNC_0(VAR_7 + sizeof(__sum16) > FUNC_8(VAR_4));

 if (FUNC_6(VAR_4) &&
     !FUNC_5(VAR_4, VAR_7 + sizeof(__sum16))) {
  VAR_6 = FUNC_3(VAR_4, 0, 0, VAR_3);
  if (VAR_6)
   goto out;
 }

 *(__sum16 *)(VAR_4->data + VAR_7) = FUNC_2(VAR_5);
out_set_summed:
 VAR_4->ip_summed = VAR_1;
out:
 return VAR_6;
}
