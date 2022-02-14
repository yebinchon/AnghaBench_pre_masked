
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reggroups {struct reggroup_el** last; } ;
struct reggroup_el {struct reggroup_el* next; struct reggroup* group; } ;
struct reggroup {int dummy; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1 (struct reggroups *VAR_0, struct reggroup *VAR_1,
    struct reggroup_el *VAR_2)
{
  FUNC_0 (VAR_1 != ((void*)0));
  VAR_2->group = VAR_1;
  VAR_2->next = ((void*)0);
  (*VAR_0->last) = VAR_2;
  VAR_0->last = &VAR_2->next;
}
