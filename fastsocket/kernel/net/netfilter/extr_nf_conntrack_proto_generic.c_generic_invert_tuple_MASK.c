
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ all; } ;
struct TYPE_8__ {TYPE_3__ u; } ;
struct TYPE_5__ {scalar_t__ all; } ;
struct TYPE_6__ {TYPE_1__ u; } ;
struct nf_conntrack_tuple {TYPE_4__ dst; TYPE_2__ src; } ;



__attribute__((used)) static bool FUNC_0(struct nf_conntrack_tuple *VAR_0,
     const struct nf_conntrack_tuple *VAR_1)
{
 VAR_0->src.u.all = 0;
 VAR_0->dst.u.all = 0;

 return 1;
}
