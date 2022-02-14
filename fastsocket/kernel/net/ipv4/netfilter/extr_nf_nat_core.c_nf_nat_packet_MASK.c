
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_4__ {int protonum; } ;
struct nf_conntrack_tuple {TYPE_2__ dst; } ;
struct nf_conn {unsigned long status; TYPE_1__* tuplehash; } ;
typedef enum nf_nat_manip_type { ____Placeholder_nf_nat_manip_type } nf_nat_manip_type ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;
typedef enum ip_conntrack_dir { ____Placeholder_ip_conntrack_dir } ip_conntrack_dir ;
struct TYPE_3__ {int tuple; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (unsigned int) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_2 (int ,struct sk_buff*,int ,struct nf_conntrack_tuple*,int) ;
 int FUNC_3 (struct nf_conntrack_tuple*,int *) ;

unsigned int FUNC_4(struct nf_conn *VAR_7,
      enum ip_conntrack_info VAR_8,
      unsigned int VAR_9,
      struct sk_buff *VAR_10)
{
 enum ip_conntrack_dir VAR_11 = FUNC_0(VAR_8);
 unsigned long VAR_12;
 enum nf_nat_manip_type VAR_13 = FUNC_1(VAR_9);

 if (VAR_13 == VAR_4)
  VAR_12 = VAR_2;
 else
  VAR_12 = VAR_0;


 if (VAR_11 == VAR_3)
  VAR_12 ^= VAR_1;


 if (VAR_7->status & VAR_12) {
  struct nf_conntrack_tuple VAR_14;


  FUNC_3(&VAR_14, &VAR_7->tuplehash[!VAR_11].tuple);

  if (!FUNC_2(VAR_14.dst.protonum, VAR_10, 0, &VAR_14, VAR_13))
   return VAR_6;
 }
 return VAR_5;
}
