
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zone {int dummy; } ;
struct mem_cgroup {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_0 (int) ;
 unsigned long FUNC_1 (struct mem_cgroup*,struct zone*,int ) ;

int FUNC_2(struct mem_cgroup *VAR_3, struct zone *VAR_4)
{
 unsigned long VAR_5;
 unsigned long VAR_6;
 unsigned long VAR_7;
 unsigned long VAR_8;

 VAR_6 = FUNC_1(VAR_3, VAR_4, VAR_1);
 VAR_7 = FUNC_1(VAR_3, VAR_4, VAR_0);

 VAR_8 = (VAR_6 + VAR_7) >> (30 - VAR_2);
 if (VAR_8)
  VAR_5 = FUNC_0(10 * VAR_8);
 else
  VAR_5 = 1;

 return VAR_6 * VAR_5 < VAR_7;
}
