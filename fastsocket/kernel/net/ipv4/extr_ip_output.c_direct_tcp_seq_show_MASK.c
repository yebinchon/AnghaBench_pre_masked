
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct direct_tcp_stat {int input_route_slow; int input_route_fast; } ;


 int VAR_0 ;
 int FUNC_0 (struct seq_file*,char*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct seq_file *VAR_1, void *VAR_2)
{
 struct direct_tcp_stat *VAR_3 = VAR_2;

 FUNC_0(VAR_1, "%u\t%-15lu%-15lu\n",
  VAR_0, VAR_3->input_route_fast, VAR_3->input_route_slow);

 return 0;
}
