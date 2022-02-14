
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_browser {int (* filter ) (struct ui_browser*,struct list_head*) ;struct list_head* entries; } ;
struct list_head {struct list_head* next; } ;


 int FUNC_0 (struct ui_browser*,struct list_head*) ;

__attribute__((used)) static struct list_head *
FUNC_1(struct ui_browser *VAR_0,
         struct list_head *VAR_1)
{
 do {
  if (!VAR_0->filter || !VAR_0->filter(VAR_0, VAR_1))
   return VAR_1;
  VAR_1 = VAR_1->next;
 } while (VAR_1 != VAR_0->entries);

 return ((void*)0);
}
