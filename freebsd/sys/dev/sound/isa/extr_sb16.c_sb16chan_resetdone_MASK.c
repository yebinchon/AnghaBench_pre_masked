
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sb_info {scalar_t__ prio; } ;
struct sb_chinfo {struct sb_info* parent; } ;
typedef int kobj_t ;



__attribute__((used)) static int
FUNC_0(kobj_t VAR_0, void *VAR_1)
{
 struct sb_chinfo *VAR_2 = VAR_1;
 struct sb_info *VAR_3 = VAR_2->parent;

 VAR_3->prio = 0;

 return 0;
}
