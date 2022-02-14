
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct TYPE_7__ {int ip; } ;
struct TYPE_8__ {TYPE_3__ u3; } ;
struct TYPE_5__ {int ip; } ;
struct TYPE_6__ {TYPE_1__ u3; } ;
struct nf_conntrack_tuple {TYPE_4__ dst; TYPE_2__ src; } ;


 int FUNC_0 (struct seq_file*,char*,int *,int *) ;

__attribute__((used)) static int FUNC_1(struct seq_file *VAR_0,
       const struct nf_conntrack_tuple *VAR_1)
{
 return FUNC_0(VAR_0, "src=%pI4 dst=%pI4 ",
     &VAR_1->src.u3.ip, &VAR_1->dst.u3.ip);
}
