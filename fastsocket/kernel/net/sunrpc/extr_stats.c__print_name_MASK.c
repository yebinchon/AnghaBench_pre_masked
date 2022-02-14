
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct rpc_procinfo {unsigned int p_name; } ;


 int FUNC_0 (struct seq_file*,char*,...) ;

__attribute__((used)) static void FUNC_1(struct seq_file *VAR_0, unsigned int VAR_1,
   struct rpc_procinfo *VAR_2)
{
 if (VAR_2[VAR_1].p_name)
  FUNC_0(VAR_0, "\t%12s: ", VAR_2[VAR_1].p_name);
 else if (VAR_1 == 0)
  FUNC_0(VAR_0, "\t        NULL: ");
 else
  FUNC_0(VAR_0, "\t%12u: ", VAR_1);
}
