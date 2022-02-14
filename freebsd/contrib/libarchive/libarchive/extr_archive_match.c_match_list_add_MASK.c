
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct match_list {int unmatched_count; int count; struct match** last; } ;
struct match {struct match* next; } ;



__attribute__((used)) static void
FUNC_0(struct match_list *VAR_0, struct match *VAR_1)
{
 *VAR_0->last = VAR_1;
 VAR_0->last = &(VAR_1->next);
 VAR_0->count++;
 VAR_0->unmatched_count++;
}
