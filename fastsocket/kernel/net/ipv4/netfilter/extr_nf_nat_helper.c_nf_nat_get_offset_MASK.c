
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nf_nat_seq {int offset_before; int offset_after; int correction_pos; } ;
struct nf_conn_nat {struct nf_nat_seq* seq; } ;
struct nf_conn {int dummy; } ;
typedef int s16 ;
typedef enum ip_conntrack_dir { ____Placeholder_ip_conntrack_dir } ip_conntrack_dir ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 struct nf_conn_nat* FUNC_1 (struct nf_conn const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

s16 FUNC_4(const struct nf_conn *VAR_1,
        enum ip_conntrack_dir VAR_2,
        u32 VAR_3)
{
 struct nf_conn_nat *VAR_4 = FUNC_1(VAR_1);
 struct nf_nat_seq *VAR_5;
 s16 VAR_6;

 if (!VAR_4)
  return 0;

 VAR_5 = &VAR_4->seq[VAR_2];
 FUNC_2(&VAR_0);
 VAR_6 = FUNC_0(VAR_3, VAR_5->correction_pos)
   ? VAR_5->offset_after : VAR_5->offset_before;
 FUNC_3(&VAR_0);

 return VAR_6;
}
