
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tcphdr {scalar_t__ ece; scalar_t__ cwr; int check; } ;
struct sk_buff {int dummy; } ;
struct TYPE_3__ {scalar_t__ ece; scalar_t__ cwr; } ;
struct TYPE_4__ {TYPE_1__ tcp; } ;
struct ipt_ECN_info {int operation; TYPE_2__ proto; } ;
typedef int _tcph ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct sk_buff*,int ,int ,int ) ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 struct tcphdr* FUNC_3 (struct sk_buff*,int,int,struct tcphdr*) ;
 int FUNC_4 (struct sk_buff*,int) ;

__attribute__((used)) static inline bool
FUNC_5(struct sk_buff *VAR_2, const struct ipt_ECN_info *VAR_3)
{
 struct tcphdr VAR_4, *VAR_5;
 __be16 VAR_6;


 VAR_5 = FUNC_3(VAR_2, FUNC_2(VAR_2), sizeof(VAR_4), &VAR_4);
 if (!VAR_5)
  return 0;

 if ((!(VAR_3->operation & VAR_1) ||
      VAR_5->ece == VAR_3->proto.tcp.ece) &&
     (!(VAR_3->operation & VAR_0) ||
      VAR_5->cwr == VAR_3->proto.tcp.cwr))
  return 1;

 if (!FUNC_4(VAR_2, FUNC_2(VAR_2) + sizeof(*VAR_5)))
  return 0;
 VAR_5 = (void *)FUNC_1(VAR_2) + FUNC_2(VAR_2);

 VAR_6 = ((__be16 *)VAR_5)[6];
 if (VAR_3->operation & VAR_1)
  VAR_5->ece = VAR_3->proto.tcp.ece;
 if (VAR_3->operation & VAR_0)
  VAR_5->cwr = VAR_3->proto.tcp.cwr;

 FUNC_0(&VAR_5->check, VAR_2,
     VAR_6, ((__be16 *)VAR_5)[6], 0);
 return 1;
}
