
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct seq_file {int dummy; } ;
struct cgroup_map_cb {struct seq_file* state; } ;


 int FUNC_0 (struct seq_file*,char*,char const*,unsigned long long) ;

__attribute__((used)) static int FUNC_1(struct cgroup_map_cb *VAR_0, const char *VAR_1, u64 VAR_2)
{
 struct seq_file *VAR_3 = VAR_0->state;
 return FUNC_0(VAR_3, "%s %llu\n", VAR_1, (unsigned long long)VAR_2);
}
