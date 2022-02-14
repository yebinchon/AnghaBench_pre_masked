
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct ipv6_txoptions {scalar_t__ srcrt; scalar_t__ dst1opt; scalar_t__ dst0opt; scalar_t__ hopopt; int tot_len; } ;


 int VAR_0 ;
 int FUNC_0 (struct ipv6_txoptions*,struct ipv6_txoptions*,int ) ;
 struct ipv6_txoptions* FUNC_1 (struct sock*,int ,int ) ;

struct ipv6_txoptions *
FUNC_2(struct sock *VAR_1, struct ipv6_txoptions *VAR_2)
{
 struct ipv6_txoptions *VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_2->tot_len, VAR_0);
 if (VAR_3) {
  long VAR_4 = (char*)VAR_3 - (char*)VAR_2;
  FUNC_0(VAR_3, VAR_2, VAR_2->tot_len);
  if (VAR_3->hopopt)
   *((char**)&VAR_3->hopopt) += VAR_4;
  if (VAR_3->dst0opt)
   *((char**)&VAR_3->dst0opt) += VAR_4;
  if (VAR_3->dst1opt)
   *((char**)&VAR_3->dst1opt) += VAR_4;
  if (VAR_3->srcrt)
   *((char**)&VAR_3->srcrt) += VAR_4;
 }
 return VAR_3;
}
