
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sin6_addr; } ;
union sctp_addr {TYPE_1__ v6; } ;
struct seq_file {int dummy; } ;


 int FUNC_0 (struct seq_file*,char*,int *) ;

__attribute__((used)) static void FUNC_1(struct seq_file *VAR_0, union sctp_addr *VAR_1)
{
 FUNC_0(VAR_0, "%pI6 ", &VAR_1->v6.sin6_addr);
}
