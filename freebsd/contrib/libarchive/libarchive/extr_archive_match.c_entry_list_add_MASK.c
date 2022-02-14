
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct match_file {struct match_file* next; } ;
struct entry_list {int count; struct match_file** last; } ;



__attribute__((used)) static void
FUNC_0(struct entry_list *VAR_0, struct match_file *VAR_1)
{
 *VAR_0->last = VAR_1;
 VAR_0->last = &(VAR_1->next);
 VAR_0->count++;
}
