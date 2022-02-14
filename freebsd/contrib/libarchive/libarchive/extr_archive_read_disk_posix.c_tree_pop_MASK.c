
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tree_entry {size_t dirname_length; int name; struct tree_entry* next; struct tree_entry* parent; } ;
struct TYPE_2__ {char* s; size_t length; } ;
struct tree {size_t dirname_length; char* basename; TYPE_1__ path; struct tree_entry* stack; struct tree_entry* current; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct tree_entry*) ;

__attribute__((used)) static void
FUNC_2(struct tree *VAR_0)
{
 struct tree_entry *VAR_1;

 VAR_0->path.s[VAR_0->dirname_length] = '\0';
 VAR_0->path.length = VAR_0->dirname_length;
 if (VAR_0->stack == VAR_0->current && VAR_0->current != ((void*)0))
  VAR_0->current = VAR_0->current->parent;
 VAR_1 = VAR_0->stack;
 VAR_0->stack = VAR_1->next;
 VAR_0->dirname_length = VAR_1->dirname_length;
 VAR_0->basename = VAR_0->path.s + VAR_0->dirname_length;
 while (VAR_0->basename[0] == '/')
  VAR_0->basename++;
 FUNC_0(&VAR_1->name);
 FUNC_1(VAR_1);
}
