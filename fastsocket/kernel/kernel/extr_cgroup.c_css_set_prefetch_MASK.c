
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct css_set {int dummy; } ;
struct cgroup {int dummy; } ;
struct cg_list_entry {int links; struct css_set* cg; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct css_set* FUNC_0 (struct css_set*,struct cgroup*) ;
 struct cg_list_entry* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,struct list_head*) ;
 int FUNC_3 (struct css_set*) ;

__attribute__((used)) static int FUNC_4(struct cgroup *VAR_2, struct css_set *VAR_3,
       struct list_head *VAR_4)
{
 struct css_set *VAR_5;
 struct cg_list_entry *VAR_6;


 VAR_5 = FUNC_0(VAR_3, VAR_2);
 if (!VAR_5)
  return -VAR_0;

 VAR_6 = FUNC_1(sizeof(struct cg_list_entry), VAR_1);
 if (!VAR_6) {
  FUNC_3(VAR_5);
  return -VAR_0;
 }
 VAR_6->cg = VAR_5;
 FUNC_2(&VAR_6->links, VAR_4);
 return 0;
}
