
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nf_nat_range {int flags; int max; int min; } ;
struct nf_nat_protocol {int (* unique_tuple ) (struct nf_conntrack_tuple const*,struct nf_nat_range const*,int,struct nf_conn*) ;scalar_t__ (* in_range ) (struct nf_conntrack_tuple const*,int,int *,int *) ;} ;
struct TYPE_2__ {int protonum; } ;
typedef struct nf_conntrack_tuple {TYPE_1__ dst; } const nf_conntrack_tuple ;
struct nf_conn {int dummy; } ;
struct net {int dummy; } ;
typedef enum nf_nat_manip_type { ____Placeholder_nf_nat_manip_type } nf_nat_manip_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct nf_nat_protocol* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct net*,struct nf_conntrack_tuple const*,struct nf_conntrack_tuple const*,struct nf_nat_range const*) ;
 int FUNC_2 (struct nf_conntrack_tuple const*,struct nf_nat_range const*,struct nf_conn*,int) ;
 scalar_t__ FUNC_3 (struct nf_conntrack_tuple const*,struct nf_nat_range const*) ;
 struct net* FUNC_4 (struct nf_conn*) ;
 int FUNC_5 (struct nf_conntrack_tuple const*,struct nf_conn*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (struct nf_conntrack_tuple const*,struct nf_nat_range const*,int,struct nf_conn*) ;
 scalar_t__ FUNC_10 (struct nf_conntrack_tuple const*,int,int *,int *) ;
 int FUNC_11 (struct nf_conntrack_tuple const*,struct nf_nat_range const*,int,struct nf_conn*) ;

__attribute__((used)) static void
FUNC_12(struct nf_conntrack_tuple *VAR_3,
   const struct nf_conntrack_tuple *VAR_4,
   const struct nf_nat_range *VAR_5,
   struct nf_conn *VAR_6,
   enum nf_nat_manip_type VAR_7)
{
 struct net *VAR_8 = FUNC_4(VAR_6);
 const struct nf_nat_protocol *VAR_9;
 if (VAR_7 == VAR_0 &&
     !(VAR_5->flags & VAR_1)) {

  if (FUNC_3(VAR_4, VAR_5)) {
   if (!FUNC_5(VAR_4, VAR_6)) {
    *VAR_3 = *VAR_4;
    return;
   }
  } else if (FUNC_1(VAR_8, VAR_4, VAR_3,
      VAR_5)) {
   FUNC_6("get_unique_tuple: Found current src map\n");
   if (!FUNC_5(VAR_3, VAR_6))
    return;
  }
 }



 *VAR_3 = *VAR_4;
 FUNC_2(VAR_3, VAR_5, VAR_6, VAR_7);




 FUNC_7();
 VAR_9 = FUNC_0(VAR_4->dst.protonum);


 if (VAR_5->flags & VAR_1) {
  VAR_9->unique_tuple(VAR_3, VAR_5, VAR_7, VAR_6);
  goto out;
 }


 if ((!(VAR_5->flags & VAR_2) ||
      VAR_9->in_range(VAR_3, VAR_7, &VAR_5->min, &VAR_5->max)) &&
     !FUNC_5(VAR_3, VAR_6))
  goto out;


 VAR_9->unique_tuple(VAR_3, VAR_5, VAR_7, VAR_6);
out:
 FUNC_8();
}
