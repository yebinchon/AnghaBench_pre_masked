
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_browser {unsigned int top_idx; unsigned int nr_entries; unsigned int height; int (* write ) (struct ui_browser*,char**,unsigned int) ;int (* filter ) (struct ui_browser*,char*) ;int * top; int * entries; } ;


 int FUNC_0 (struct ui_browser*,char*) ;
 int FUNC_1 (struct ui_browser*,char**,unsigned int) ;
 int FUNC_2 (struct ui_browser*,unsigned int,int ) ;

unsigned int FUNC_3(struct ui_browser *VAR_0)
{
 unsigned int VAR_1 = 0, VAR_2 = VAR_0->top_idx;
 char **VAR_3;

 if (VAR_0->top == ((void*)0))
  VAR_0->top = VAR_0->entries;

 VAR_3 = (char **)VAR_0->top;
 while (VAR_2 < VAR_0->nr_entries) {
  if (!VAR_0->filter || !VAR_0->filter(VAR_0, *VAR_3)) {
   FUNC_2(VAR_0, VAR_1, 0);
   VAR_0->write(VAR_0, VAR_3, VAR_1);
   if (++VAR_1 == VAR_0->height)
    break;
  }

  ++VAR_2;
  ++VAR_3;
 }

 return VAR_1;
}
