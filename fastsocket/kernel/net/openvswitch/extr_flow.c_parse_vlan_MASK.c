
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tci; } ;
struct sw_flow_key {TYPE_1__ eth; } ;
struct sk_buff {int len; scalar_t__ data; } ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*,int) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_2, struct sw_flow_key *VAR_3)
{
 struct qtag_prefix {
  __be16 eth_type;
  __be16 tci;
 };
 struct qtag_prefix *VAR_4;

 if (FUNC_3(VAR_2->len < sizeof(struct qtag_prefix) + sizeof(__be16)))
  return 0;

 if (FUNC_3(!FUNC_2(VAR_2, sizeof(struct qtag_prefix) +
      sizeof(__be16))))
  return -VAR_0;

 VAR_4 = (struct qtag_prefix *) VAR_2->data;
 VAR_3->eth.tci = VAR_4->tci | FUNC_1(VAR_1);
 FUNC_0(VAR_2, sizeof(struct qtag_prefix));

 return 0;
}
