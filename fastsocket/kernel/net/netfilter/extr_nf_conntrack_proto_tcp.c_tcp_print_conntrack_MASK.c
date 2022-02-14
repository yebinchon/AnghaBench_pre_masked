
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct TYPE_3__ {int state; } ;
struct TYPE_4__ {TYPE_1__ tcp; } ;
struct nf_conn {int lock; TYPE_2__ proto; } ;
typedef enum tcp_conntrack { ____Placeholder_tcp_conntrack } tcp_conntrack ;


 int FUNC_0 (struct seq_file*,char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * VAR_0 ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_1, struct nf_conn *VAR_2)
{
 enum tcp_conntrack VAR_3;

 FUNC_1(&VAR_2->lock);
 VAR_3 = VAR_2->proto.tcp.state;
 FUNC_2(&VAR_2->lock);

 return FUNC_0(VAR_1, "%s ", VAR_0[VAR_3]);
}
