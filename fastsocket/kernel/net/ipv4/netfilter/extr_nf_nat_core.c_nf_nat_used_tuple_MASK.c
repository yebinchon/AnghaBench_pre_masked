
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nf_conntrack_tuple {int dummy; } ;
struct nf_conn {int dummy; } ;


 int FUNC_0 (struct nf_conntrack_tuple*,struct nf_conn const*) ;
 int FUNC_1 (struct nf_conntrack_tuple*,struct nf_conntrack_tuple const*) ;

int
FUNC_2(const struct nf_conntrack_tuple *VAR_0,
    const struct nf_conn *VAR_1)
{





 struct nf_conntrack_tuple VAR_2;

 FUNC_1(&VAR_2, VAR_0);
 return FUNC_0(&VAR_2, VAR_1);
}
