
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct tnl_ptk_info {int flags; scalar_t__ key; scalar_t__ seq; int proto; } ;
struct sk_buff {int len; scalar_t__ data; } ;
struct gre_base_hdr {int protocol; int flags; } ;
typedef int __sum16 ;
typedef scalar_t__ __be32 ;
struct TYPE_2__ {int gso_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*,int ,int ,int ) ;
 int FUNC_2 (struct sk_buff*,int) ;
 TYPE_1__* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int) ;

void FUNC_5(struct sk_buff *VAR_4, const struct tnl_ptk_info *VAR_5,
        int VAR_6)
{
 struct gre_base_hdr *VAR_7;

 FUNC_2(VAR_4, VAR_6);

 VAR_7 = (struct gre_base_hdr *)VAR_4->data;
 VAR_7->flags = FUNC_4(VAR_5->flags);
 VAR_7->protocol = VAR_5->proto;

 if (VAR_5->flags&(VAR_2|VAR_1|VAR_3)) {
  __be32 *VAR_8 = (__be32 *)(((u8 *)VAR_7) + VAR_6 - 4);

  if (VAR_5->flags&VAR_3) {
   *VAR_8 = VAR_5->seq;
   VAR_8--;
  }
  if (VAR_5->flags&VAR_2) {
   *VAR_8 = VAR_5->key;
   VAR_8--;
  }
  if (VAR_5->flags&VAR_1 &&
      !(FUNC_3(VAR_4)->gso_type & VAR_0)) {
   *VAR_8 = 0;
   *(__sum16 *)VAR_8 = FUNC_0(FUNC_1(VAR_4, 0,
         VAR_4->len, 0));
  }
 }
}
