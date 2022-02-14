
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int u3; } ;
struct TYPE_3__ {int u3; } ;
struct nf_conntrack_tuple {TYPE_2__ dst; TYPE_1__ src; } ;


 int FUNC_0 (int *,int ,int) ;

__attribute__((used)) static bool FUNC_1(struct nf_conntrack_tuple *VAR_0,
     const struct nf_conntrack_tuple *VAR_1)
{
 FUNC_0(&VAR_0->src.u3, 0, sizeof(VAR_0->src.u3));
 FUNC_0(&VAR_0->dst.u3, 0, sizeof(VAR_0->dst.u3));

 return 1;
}
