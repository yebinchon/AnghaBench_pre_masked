
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_cgroup_stat {int dummy; } ;
typedef scalar_t__ s64 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct mem_cgroup_stat*,int ) ;

__attribute__((used)) static s64 FUNC_1(struct mem_cgroup_stat *VAR_2)
{
 s64 VAR_3;

 VAR_3 = FUNC_0(VAR_2, VAR_0);
 VAR_3 += FUNC_0(VAR_2, VAR_1);
 return VAR_3;
}
