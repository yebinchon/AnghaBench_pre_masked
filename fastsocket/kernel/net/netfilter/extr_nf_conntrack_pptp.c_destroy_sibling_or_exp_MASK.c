
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nf_conntrack_tuple_hash {int dummy; } ;
struct nf_conntrack_tuple {int dummy; } ;
struct TYPE_6__ {int (* function ) (unsigned long) ;} ;
struct TYPE_4__ {scalar_t__ stream_timeout; scalar_t__ timeout; } ;
struct TYPE_5__ {TYPE_1__ gre; } ;
struct nf_conntrack_expect {TYPE_3__ timeout; TYPE_2__ proto; } ;
struct nf_conn {TYPE_3__ timeout; TYPE_2__ proto; } ;
struct net {int dummy; } ;


 scalar_t__ FUNC_0 (TYPE_3__*) ;
 struct nf_conntrack_tuple_hash* FUNC_1 (struct net*,struct nf_conntrack_tuple const*) ;
 int FUNC_2 (struct nf_conntrack_tuple const*) ;
 struct nf_conntrack_expect* FUNC_3 (struct net*,struct nf_conntrack_tuple const*) ;
 int FUNC_4 (struct nf_conntrack_expect*) ;
 int FUNC_5 (struct nf_conntrack_expect*) ;
 struct nf_conntrack_expect* FUNC_6 (struct nf_conntrack_tuple_hash const*) ;
 int FUNC_7 (struct nf_conntrack_expect*) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (unsigned long) ;

__attribute__((used)) static int FUNC_10(struct net *VAR_0,
      const struct nf_conntrack_tuple *VAR_1)
{
 const struct nf_conntrack_tuple_hash *VAR_2;
 struct nf_conntrack_expect *VAR_3;
 struct nf_conn *VAR_4;

 FUNC_8("trying to timeout ct or exp for tuple ");
 FUNC_2(VAR_1);

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (VAR_2) {
  VAR_4 = FUNC_6(VAR_2);
  FUNC_8("setting timeout of conntrack %p to 0\n", VAR_4);
  VAR_4->proto.gre.timeout = 0;
  VAR_4->proto.gre.stream_timeout = 0;
  if (FUNC_0(&VAR_4->timeout))
   VAR_4->timeout.function((unsigned long)VAR_4);
  FUNC_5(VAR_4);
  return 1;
 } else {
  VAR_3 = FUNC_3(VAR_0, VAR_1);
  if (VAR_3) {
   FUNC_8("unexpect_related of expect %p\n", VAR_3);
   FUNC_7(VAR_3);
   FUNC_4(VAR_3);
   return 1;
  }
 }
 return 0;
}
