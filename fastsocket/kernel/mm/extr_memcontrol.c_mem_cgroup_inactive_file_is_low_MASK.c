
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zone {int dummy; } ;
struct mem_cgroup {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (struct mem_cgroup*,struct zone*,int ) ;

int FUNC_1(struct mem_cgroup *VAR_2, struct zone *VAR_3)
{
 unsigned long VAR_4;
 unsigned long VAR_5;

 VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_1);
 VAR_4 = FUNC_0(VAR_2, VAR_3, VAR_0);

 return (VAR_4 > VAR_5);
}
