
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct inet_hash_stats {int global_accept; int remote_accept; int local_accept; int common_accept; int global_listen_lookup; int local_listen_lookup; } ;


 int VAR_0 ;
 int FUNC_0 (struct seq_file*,char*,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct seq_file *VAR_1, void *VAR_2)
{
 struct inet_hash_stats *VAR_3 = VAR_2;

 FUNC_0(VAR_1, "%u\t%-15lu%-15lu%-15lu%-15lu%-15lu%-15lu\n",
  VAR_0, VAR_3->local_listen_lookup, VAR_3->global_listen_lookup,
  VAR_3->common_accept, VAR_3->local_accept, VAR_3->remote_accept, VAR_3->global_accept);

 return 0;
}
