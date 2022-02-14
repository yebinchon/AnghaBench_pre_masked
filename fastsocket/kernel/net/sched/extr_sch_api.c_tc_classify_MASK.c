
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tcf_result {int dummy; } ;
struct tcf_proto {int prio; int protocol; } ;
struct sk_buff {int tc_verd; int protocol; } ;
typedef int __be16 ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int,int ) ;
 int FUNC_4 (struct sk_buff*,struct tcf_proto*,struct tcf_result*) ;

int FUNC_5(struct sk_buff *VAR_3, struct tcf_proto *VAR_4,
  struct tcf_result *VAR_5)
{
 int VAR_6 = 0;
 __be16 VAR_7;




 VAR_7 = VAR_3->protocol;

 VAR_6 = FUNC_4(VAR_3, VAR_4, VAR_5);
 return VAR_6;
}
