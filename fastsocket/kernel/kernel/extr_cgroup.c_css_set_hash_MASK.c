
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hlist_head {int dummy; } ;
struct cgroup_subsys_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct hlist_head* VAR_2 ;
 int FUNC_0 (unsigned long,int ) ;

__attribute__((used)) static struct hlist_head *FUNC_1(struct cgroup_subsys_state *VAR_3[])
{
 int VAR_4;
 int VAR_5;
 unsigned long VAR_6 = 0UL;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  VAR_6 += (unsigned long)VAR_3[VAR_4];
 VAR_6 = (VAR_6 >> 16) ^ VAR_6;

 VAR_5 = FUNC_0(VAR_6, VAR_1);

 return &VAR_2[VAR_5];
}
