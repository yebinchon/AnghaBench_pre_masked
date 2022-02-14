
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int8_t ;
struct xt_conntrack_mtinfo2 {int repldst_mask; int repldst_addr; } ;
struct nf_conn {TYPE_3__* tuplehash; } ;
struct TYPE_4__ {int u3; } ;
struct TYPE_5__ {TYPE_1__ dst; } ;
struct TYPE_6__ {TYPE_2__ tuple; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *,int *,int *,int ) ;

__attribute__((used)) static inline bool
FUNC_1(const struct nf_conn *VAR_1,
                     const struct xt_conntrack_mtinfo2 *VAR_2,
       u_int8_t VAR_3)
{
 return FUNC_0(&VAR_1->tuplehash[VAR_0].tuple.dst.u3,
        &VAR_2->repldst_addr, &VAR_2->repldst_mask, VAR_3);
}
