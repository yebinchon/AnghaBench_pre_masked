
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nf_conntrack_expect {scalar_t__ master; scalar_t__ class; int mask; int tuple; } ;


 scalar_t__ FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *,int *) ;

__attribute__((used)) static inline int FUNC_2(const struct nf_conntrack_expect *VAR_0,
     const struct nf_conntrack_expect *VAR_1)
{
 return VAR_0->master == VAR_1->master && VAR_0->class == VAR_1->class
  && FUNC_0(&VAR_0->tuple, &VAR_1->tuple)
  && FUNC_1(&VAR_0->mask, &VAR_1->mask);
}
