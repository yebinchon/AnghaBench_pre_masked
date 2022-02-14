
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nf_conntrack_tuple_hash {int dummy; } ;
struct nf_conntrack_helper {int dummy; } ;
struct nf_conn_help {struct nf_conntrack_helper const* helper; } ;
struct nf_conn {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct nf_conn*) ;
 struct nf_conn* FUNC_1 (struct nf_conntrack_tuple_hash*) ;
 struct nf_conn_help* FUNC_2 (struct nf_conn*) ;
 int FUNC_3 (struct nf_conntrack_helper const*,int *) ;

__attribute__((used)) static inline int FUNC_4(struct nf_conntrack_tuple_hash *VAR_1,
    const struct nf_conntrack_helper *VAR_2)
{
 struct nf_conn *VAR_3 = FUNC_1(VAR_1);
 struct nf_conn_help *VAR_4 = FUNC_2(VAR_3);

 if (VAR_4 && VAR_4->helper == VAR_2) {
  FUNC_0(VAR_0, VAR_3);
  FUNC_3(VAR_4->helper, ((void*)0));
 }
 return 0;
}
