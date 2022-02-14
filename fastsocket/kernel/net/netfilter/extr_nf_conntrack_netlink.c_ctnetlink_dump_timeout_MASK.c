
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {long expires; } ;
struct nf_conn {TYPE_1__ timeout; } ;


 int VAR_0 ;
 long VAR_1 ;
 int FUNC_0 (struct sk_buff*,int ,int ) ;
 int FUNC_1 (long) ;
 long VAR_2 ;

__attribute__((used)) static inline int
FUNC_2(struct sk_buff *VAR_3, const struct nf_conn *VAR_4)
{
 long VAR_5 = (VAR_4->timeout.expires - VAR_2) / VAR_1;

 if (VAR_5 < 0)
  VAR_5 = 0;

 FUNC_0(VAR_3, VAR_0, FUNC_1(VAR_5));
 return 0;

nla_put_failure:
 return -1;
}
