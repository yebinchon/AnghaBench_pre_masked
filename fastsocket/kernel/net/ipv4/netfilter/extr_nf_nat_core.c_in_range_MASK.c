
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nf_nat_range {int flags; int max; int min; int max_ip; int min_ip; } ;
struct nf_nat_protocol {scalar_t__ (* in_range ) (struct nf_conntrack_tuple const*,int ,int *,int *) ;} ;
struct TYPE_6__ {int protonum; } ;
struct TYPE_4__ {int ip; } ;
struct TYPE_5__ {TYPE_1__ u3; } ;
struct nf_conntrack_tuple {TYPE_3__ dst; TYPE_2__ src; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct nf_nat_protocol* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (struct nf_conntrack_tuple const*,int ,int *,int *) ;

__attribute__((used)) static int
FUNC_5(const struct nf_conntrack_tuple *VAR_3,
  const struct nf_nat_range *VAR_4)
{
 const struct nf_nat_protocol *VAR_5;
 int VAR_6 = 0;



 if (VAR_4->flags & VAR_1) {
  if (FUNC_1(VAR_3->src.u3.ip) < FUNC_1(VAR_4->min_ip) ||
      FUNC_1(VAR_3->src.u3.ip) > FUNC_1(VAR_4->max_ip))
   return 0;
 }

 FUNC_2();
 VAR_5 = FUNC_0(VAR_3->dst.protonum);
 if (!(VAR_4->flags & VAR_2) ||
     VAR_5->in_range(VAR_3, VAR_0,
       &VAR_4->min, &VAR_4->max))
  VAR_6 = 1;
 FUNC_3();

 return VAR_6;
}
