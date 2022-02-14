
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tnl_ptk_info {int proto; void* seq; void* key; int flags; } ;
struct sk_buff {int dummy; } ;
struct gre_base_hdr {int flags; int protocol; } ;
typedef void* __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 unsigned int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*,int,int ) ;
 int FUNC_6 (struct sk_buff*,int) ;
 scalar_t__ FUNC_7 (struct sk_buff*) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct sk_buff *VAR_8, struct tnl_ptk_info *VAR_9,
       bool *VAR_10)
{
 unsigned int VAR_11 = FUNC_4(VAR_8);
 const struct gre_base_hdr *VAR_12;
 __be32 *VAR_13;
 int VAR_14;

 if (FUNC_8(!FUNC_6(VAR_8, sizeof(struct gre_base_hdr))))
  return -VAR_0;

 VAR_12 = (struct gre_base_hdr *)(FUNC_7(VAR_8) + VAR_11);
 if (FUNC_8(VAR_12->flags & (VAR_7 | VAR_5)))
  return -VAR_0;

 VAR_9->flags = FUNC_1(VAR_12->flags);
 VAR_14 = FUNC_3(VAR_9->flags);

 if (!FUNC_6(VAR_8, VAR_14))
  return -VAR_0;

 VAR_12 = (struct gre_base_hdr *)(FUNC_7(VAR_8) + VAR_11);
 VAR_9->proto = VAR_12->protocol;

 VAR_13 = (__be32 *)(VAR_12 + 1);
 if (VAR_12->flags & VAR_3) {
  if (FUNC_0(VAR_8)) {
   *VAR_10 = 1;
   return -VAR_0;
  }
  VAR_13++;
 }

 if (VAR_12->flags & VAR_4) {
  VAR_9->key = *VAR_13;
  VAR_13++;
 } else
  VAR_9->key = 0;

 if (FUNC_8(VAR_12->flags & VAR_6)) {
  VAR_9->seq = *VAR_13;
  VAR_13++;
 } else
  VAR_9->seq = 0;





 if (VAR_12->flags == 0 && VAR_9->proto == FUNC_2(VAR_2)) {
  VAR_9->proto = FUNC_2(VAR_1);
  if ((*(u8 *)VAR_13 & 0xF0) != 0x40) {
   VAR_14 += 4;
   if (!FUNC_6(VAR_8, VAR_14))
    return -VAR_0;
  }
 }

 return FUNC_5(VAR_8, VAR_14, VAR_9->proto);
}
