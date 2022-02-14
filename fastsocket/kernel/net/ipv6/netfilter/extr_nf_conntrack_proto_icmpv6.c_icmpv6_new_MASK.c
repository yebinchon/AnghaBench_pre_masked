
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int valid_new ;
typedef int u_int8_t ;
struct sk_buff {int dummy; } ;
struct nf_conn {TYPE_4__* tuplehash; } ;
struct TYPE_6__ {int type; } ;
struct TYPE_7__ {TYPE_1__ icmp; } ;
struct TYPE_8__ {TYPE_2__ u; } ;
struct TYPE_10__ {TYPE_3__ dst; } ;
struct TYPE_9__ {TYPE_5__ tuple; } ;




 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (struct nf_conn*) ;
 int FUNC_3 (int ,int ,struct sk_buff const*,int *,int *,int *,char*,int) ;
 int FUNC_4 (char*,int) ;

__attribute__((used)) static bool FUNC_5(struct nf_conn *VAR_2, const struct sk_buff *VAR_3,
         unsigned int VAR_4)
{
 static const u_int8_t VAR_5[] = {
  [129 - 128] = 1,
  [128 - 128] = 1
 };
 int VAR_6 = VAR_2->tuplehash[0].tuple.dst.u.icmp.type - 128;

 if (VAR_6 < 0 || VAR_6 >= sizeof(VAR_5) || !VAR_5[VAR_6]) {

  FUNC_4("icmpv6: can't create new conn with type %u\n",
    VAR_6 + 128);
  FUNC_1(&VAR_2->tuplehash[0].tuple);
  if (FUNC_0(FUNC_2(VAR_2), VAR_0))
   FUNC_3(VAR_1, 0, VAR_3, ((void*)0), ((void*)0), ((void*)0),
          "nf_ct_icmpv6: invalid new with type %d ",
          VAR_6 + 128);
  return 0;
 }
 return 1;
}
