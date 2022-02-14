
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nf_nat_range {int dummy; } ;
struct nf_conntrack_tuple {int dummy; } ;
struct nf_conn_nat {int bysource; struct nf_conn* ct; } ;
struct nf_conn {int status; TYPE_1__* tuplehash; } ;
struct TYPE_4__ {int * nat_bysource; } ;
struct net {TYPE_2__ ipv4; } ;
typedef enum nf_nat_manip_type { ____Placeholder_nf_nat_manip_type } nf_nat_manip_type ;
struct TYPE_3__ {struct nf_conntrack_tuple tuple; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 int FUNC_1 (int) ;
 int VAR_10 ;
 int FUNC_2 (struct nf_conntrack_tuple*,struct nf_conntrack_tuple*,struct nf_nat_range const*,struct nf_conn*,int) ;
 unsigned int FUNC_3 (struct net*,struct nf_conntrack_tuple*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (struct nf_conn*,struct nf_conntrack_tuple*) ;
 struct nf_conn_nat* FUNC_6 (struct nf_conn*,int ,int ) ;
 int FUNC_7 (struct nf_conntrack_tuple*,struct nf_conntrack_tuple*) ;
 struct net* FUNC_8 (struct nf_conn*) ;
 int FUNC_9 (struct nf_conntrack_tuple*,struct nf_conntrack_tuple*) ;
 int FUNC_10 (struct nf_conn*,int) ;
 int VAR_11 ;
 struct nf_conn_nat* FUNC_11 (struct nf_conn*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (int ,int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;

unsigned int
FUNC_16(struct nf_conn *VAR_12,
    const struct nf_nat_range *VAR_13,
    enum nf_nat_manip_type VAR_14)
{
 struct net *VAR_15 = FUNC_8(VAR_12);
 struct nf_conntrack_tuple VAR_16, VAR_17;
 struct nf_conn_nat *VAR_18;


 VAR_18 = FUNC_11(VAR_12);
 if (!VAR_18) {
  VAR_18 = FUNC_6(VAR_12, VAR_10, VAR_0);
  if (VAR_18 == ((void*)0)) {
   FUNC_12("failed to add NAT extension\n");
   return VAR_9;
  }
 }

 FUNC_1(VAR_14 == VAR_8 ||
       VAR_14 == VAR_7);
 FUNC_0(FUNC_10(VAR_12, VAR_14));






 FUNC_7(&VAR_16,
        &VAR_12->tuplehash[VAR_6].tuple);

 FUNC_2(&VAR_17, &VAR_16, VAR_13, VAR_12, VAR_14);

 if (!FUNC_9(&VAR_17, &VAR_16)) {
  struct nf_conntrack_tuple VAR_19;


  FUNC_7(&VAR_19, &VAR_17);
  FUNC_5(VAR_12, &VAR_19);


  if (VAR_14 == VAR_8)
   VAR_12->status |= VAR_3;
  else
   VAR_12->status |= VAR_1;
 }

 if (VAR_14 == VAR_8) {
  unsigned int VAR_20;

  VAR_20 = FUNC_3(VAR_15, &VAR_12->tuplehash[VAR_5].tuple);
  FUNC_14(&VAR_11);

  VAR_18 = FUNC_11(VAR_12);
  VAR_18->ct = VAR_12;
  FUNC_4(&VAR_18->bysource,
       &VAR_15->ipv4.nat_bysource[VAR_20]);
  FUNC_15(&VAR_11);
 }


 if (VAR_14 == VAR_7)
  FUNC_13(VAR_2, &VAR_12->status);
 else
  FUNC_13(VAR_4, &VAR_12->status);

 return VAR_9;
}
