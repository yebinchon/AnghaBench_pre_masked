
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef int u_int16_t ;
struct sk_buff {int dummy; } ;
struct nf_conntrack_tuple {int dummy; } ;
struct nf_conntrack_l4proto {int dummy; } ;
struct nf_conntrack_l3proto {int (* get_l4proto ) (struct sk_buff const*,unsigned int,unsigned int*,int *) ;} ;


 int VAR_0 ;
 struct nf_conntrack_l3proto* FUNC_0 (int ) ;
 struct nf_conntrack_l4proto* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct sk_buff const*,unsigned int,unsigned int,int ,int ,struct nf_conntrack_tuple*,struct nf_conntrack_l3proto*,struct nf_conntrack_l4proto*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct sk_buff const*,unsigned int,unsigned int*,int *) ;

bool FUNC_6(const struct sk_buff *VAR_1, unsigned int VAR_2,
         u_int16_t VAR_3, struct nf_conntrack_tuple *VAR_4)
{
 struct nf_conntrack_l3proto *VAR_5;
 struct nf_conntrack_l4proto *VAR_6;
 unsigned int VAR_7;
 u_int8_t VAR_8;
 int VAR_9;

 FUNC_3();

 VAR_5 = FUNC_0(VAR_3);
 VAR_9 = VAR_5->get_l4proto(VAR_1, VAR_2, &VAR_7, &VAR_8);
 if (VAR_9 != VAR_0) {
  FUNC_4();
  return 0;
 }

 VAR_6 = FUNC_1(VAR_3, VAR_8);

 VAR_9 = FUNC_2(VAR_1, VAR_2, VAR_7, VAR_3, VAR_8, VAR_4,
         VAR_5, VAR_6);

 FUNC_4();
 return VAR_9;
}
