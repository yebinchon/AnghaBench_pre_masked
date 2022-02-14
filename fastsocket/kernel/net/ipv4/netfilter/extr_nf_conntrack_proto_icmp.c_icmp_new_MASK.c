
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






 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (char*,size_t) ;

__attribute__((used)) static bool FUNC_2(struct nf_conn *VAR_0, const struct sk_buff *VAR_1,
       unsigned int VAR_2)
{
 static const u_int8_t VAR_3[] = {
  [130] = 1,
  [128] = 1,
  [129] = 1,
  [131] = 1
 };

 if (VAR_0->tuplehash[0].tuple.dst.u.icmp.type >= sizeof(VAR_3)
     || !VAR_3[VAR_0->tuplehash[0].tuple.dst.u.icmp.type]) {

  FUNC_1("icmp: can't create new conn with type %u\n",
    VAR_0->tuplehash[0].tuple.dst.u.icmp.type);
  FUNC_0(&VAR_0->tuplehash[0].tuple);
  return 0;
 }
 return 1;
}
