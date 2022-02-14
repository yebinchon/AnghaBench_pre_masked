
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct xt_target_param {struct xt_DSCP_info* targinfo; } ;
struct xt_DSCP_info {int dscp; } ;
struct sk_buff {int dummy; } ;
struct ipv6hdr {int dummy; } ;
typedef int __u8 ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,int) ;

__attribute__((used)) static unsigned int
FUNC_4(struct sk_buff *VAR_4, const struct xt_target_param *VAR_5)
{
 const struct xt_DSCP_info *VAR_6 = VAR_5->targinfo;
 u_int8_t VAR_7 = FUNC_1(FUNC_2(VAR_4)) >> VAR_3;

 if (VAR_7 != VAR_6->dscp) {
  if (!FUNC_3(VAR_4, sizeof(struct ipv6hdr)))
   return VAR_0;

  FUNC_0(FUNC_2(VAR_4), (__u8)(~VAR_2),
        VAR_6->dscp << VAR_3);
 }
 return VAR_1;
}
