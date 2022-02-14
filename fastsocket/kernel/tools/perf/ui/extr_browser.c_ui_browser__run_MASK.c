
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_browser {int navkeypressed; int index; int nr_entries; int top_idx; int height; int (* seek ) (struct ui_browser*,int,int ) ;scalar_t__ use_navkeypressed; int helpline; int title; } ;
typedef int off_t ;







 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (struct ui_browser*) ;
 int FUNC_2 (struct ui_browser*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct ui_browser*,int,int ) ;
 int FUNC_6 (struct ui_browser*,int,int ) ;
 int FUNC_7 (struct ui_browser*,int,int ) ;
 int FUNC_8 (struct ui_browser*,int,int ) ;
 int FUNC_9 (struct ui_browser*,int,int ) ;
 int FUNC_10 (int) ;
 int VAR_3 ;
 int FUNC_11 (int) ;
 int FUNC_12 (struct ui_browser*) ;
 int FUNC_13 (struct ui_browser*) ;
 int FUNC_14 (int ) ;

int FUNC_15(struct ui_browser *VAR_4, int VAR_5)
{
 int VAR_6, VAR_7;

 while (1) {
  off_t VAR_8;

  FUNC_3(&VAR_3);
  VAR_6 = FUNC_1(VAR_4);
  FUNC_0();
  FUNC_4(&VAR_3);
  if (VAR_6 < 0)
   break;

  VAR_7 = FUNC_10(VAR_5);

  if (VAR_7 == VAR_0) {
   FUNC_11(0);
   FUNC_12(VAR_4);
   FUNC_2(VAR_4, VAR_4->title);
   FUNC_14(VAR_4->helpline);
   continue;
  }

  if (VAR_4->use_navkeypressed && !VAR_4->navkeypressed) {
   if (VAR_7 == 133 || VAR_7 == 128 ||
       VAR_7 == 130 || VAR_7 == 129 ||
       VAR_7 == 131 || VAR_7 == 132 ||
       VAR_7 == ' ') {
    VAR_4->navkeypressed = 1;
    continue;
   } else
    return VAR_7;
  }

  switch (VAR_7) {
  case 133:
   if (VAR_4->index == VAR_4->nr_entries - 1)
    break;
   ++VAR_4->index;
   if (VAR_4->index == VAR_4->top_idx + VAR_4->height) {
    ++VAR_4->top_idx;
    VAR_4->seek(VAR_4, +1, VAR_1);
   }
   break;
  case 128:
   if (VAR_4->index == 0)
    break;
   --VAR_4->index;
   if (VAR_4->index < VAR_4->top_idx) {
    --VAR_4->top_idx;
    VAR_4->seek(VAR_4, -1, VAR_1);
   }
   break;
  case 130:
  case ' ':
   if (VAR_4->top_idx + VAR_4->height > VAR_4->nr_entries - 1)
    break;

   VAR_8 = VAR_4->height;
   if (VAR_4->index + VAR_8 > VAR_4->nr_entries - 1)
    VAR_8 = VAR_4->nr_entries - 1 - VAR_4->index;
   VAR_4->index += VAR_8;
   VAR_4->top_idx += VAR_8;
   VAR_4->seek(VAR_4, +VAR_8, VAR_1);
   break;
  case 129:
   if (VAR_4->top_idx == 0)
    break;

   if (VAR_4->top_idx < VAR_4->height)
    VAR_8 = VAR_4->top_idx;
   else
    VAR_8 = VAR_4->height;

   VAR_4->index -= VAR_8;
   VAR_4->top_idx -= VAR_8;
   VAR_4->seek(VAR_4, -VAR_8, VAR_1);
   break;
  case 131:
   FUNC_13(VAR_4);
   break;
  case 132:
   VAR_8 = VAR_4->height - 1;
   if (VAR_8 >= VAR_4->nr_entries)
    VAR_8 = VAR_4->nr_entries - 1;

   VAR_4->index = VAR_4->nr_entries - 1;
   VAR_4->top_idx = VAR_4->index - VAR_8;
   VAR_4->seek(VAR_4, -VAR_8, VAR_2);
   break;
  default:
   return VAR_7;
  }
 }
 return -1;
}
