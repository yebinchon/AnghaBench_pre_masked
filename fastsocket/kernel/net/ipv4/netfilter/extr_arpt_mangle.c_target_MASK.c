
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xt_target_param {struct arpt_mangle* targinfo; } ;
struct sk_buff {int len; } ;
struct TYPE_4__ {int tgt_ip; } ;
struct TYPE_3__ {int src_ip; } ;
struct arpt_mangle {int flags; unsigned int target; TYPE_2__ u_t; int * tgt_devaddr; TYPE_1__ u_s; int * src_devaddr; } ;
struct arphdr {int ar_pln; int ar_hln; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 struct arphdr* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (unsigned char*,int *,int) ;
 int FUNC_2 (struct sk_buff*,int ) ;
 unsigned char* FUNC_3 (struct sk_buff*) ;
 unsigned char* FUNC_4 (struct sk_buff*) ;

__attribute__((used)) static unsigned int
FUNC_5(struct sk_buff *VAR_7, const struct xt_target_param *VAR_8)
{
 const struct arpt_mangle *VAR_9 = VAR_8->targinfo;
 const struct arphdr *VAR_10;
 unsigned char *VAR_11;
 int VAR_12, VAR_13;

 if (!FUNC_2(VAR_7, VAR_7->len))
  return VAR_6;

 VAR_10 = FUNC_0(VAR_7);
 VAR_11 = FUNC_3(VAR_7) + sizeof(*VAR_10);
 VAR_12 = VAR_10->ar_pln;
 VAR_13 = VAR_10->ar_hln;

 if (VAR_9->flags & VAR_2) {
  if (VAR_0 < VAR_13 ||
     (VAR_11 + VAR_13 > FUNC_4(VAR_7)))
   return VAR_6;
  FUNC_1(VAR_11, VAR_9->src_devaddr, VAR_13);
 }
 VAR_11 += VAR_13;
 if (VAR_9->flags & VAR_3) {
  if (VAR_1 < VAR_12 ||
     (VAR_11 + VAR_12 > FUNC_4(VAR_7)))
   return VAR_6;
  FUNC_1(VAR_11, &VAR_9->u_s.src_ip, VAR_12);
 }
 VAR_11 += VAR_12;
 if (VAR_9->flags & VAR_4) {
  if (VAR_0 < VAR_13 ||
     (VAR_11 + VAR_13 > FUNC_4(VAR_7)))
   return VAR_6;
  FUNC_1(VAR_11, VAR_9->tgt_devaddr, VAR_13);
 }
 VAR_11 += VAR_13;
 if (VAR_9->flags & VAR_5) {
  if (VAR_1 < VAR_12 ||
     (VAR_11 + VAR_12 > FUNC_4(VAR_7)))
   return VAR_6;
  FUNC_1(VAR_11, &VAR_9->u_t.tgt_ip, VAR_12);
 }
 return VAR_9->target;
}
