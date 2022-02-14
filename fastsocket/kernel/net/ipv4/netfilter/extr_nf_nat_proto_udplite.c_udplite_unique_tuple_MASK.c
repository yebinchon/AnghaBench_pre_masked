
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nf_nat_range {int dummy; } ;
struct nf_conntrack_tuple {int dummy; } ;
struct nf_conn {int dummy; } ;
typedef enum nf_nat_manip_type { ____Placeholder_nf_nat_manip_type } nf_nat_manip_type ;


 int FUNC_0 (struct nf_conntrack_tuple*,struct nf_nat_range const*,int,struct nf_conn const*,int *) ;
 int VAR_0 ;

__attribute__((used)) static bool
FUNC_1(struct nf_conntrack_tuple *VAR_1,
       const struct nf_nat_range *VAR_2,
       enum nf_nat_manip_type VAR_3,
       const struct nf_conn *VAR_4)
{
 return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4,
      &VAR_0);
}
