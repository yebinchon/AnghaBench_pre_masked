
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_3__ {long expires; } ;
struct nf_conntrack_expect {int mask; int tuple; TYPE_1__ timeout; struct nf_conn* master; } ;
struct nf_conn {TYPE_2__* tuplehash; } ;
struct TYPE_4__ {int tuple; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 long VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int *,int *) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int *,int ) ;
 int FUNC_3 (unsigned long) ;
 long VAR_6 ;

__attribute__((used)) static int
FUNC_4(struct sk_buff *VAR_7,
     const struct nf_conntrack_expect *VAR_8)
{
 struct nf_conn *VAR_9 = VAR_8->master;
 long VAR_10 = (VAR_8->timeout.expires - VAR_6) / VAR_4;

 if (VAR_10 < 0)
  VAR_10 = 0;

 if (FUNC_2(VAR_7, &VAR_8->tuple, VAR_3) < 0)
  goto nla_put_failure;
 if (FUNC_1(VAR_7, &VAR_8->tuple, &VAR_8->mask) < 0)
  goto nla_put_failure;
 if (FUNC_2(VAR_7,
     &VAR_9->tuplehash[VAR_5].tuple,
     VAR_1) < 0)
  goto nla_put_failure;

 FUNC_0(VAR_7, VAR_2, FUNC_3(VAR_10));
 FUNC_0(VAR_7, VAR_0, FUNC_3((unsigned long)VAR_8));

 return 0;

nla_put_failure:
 return -1;
}
