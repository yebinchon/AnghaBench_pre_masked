
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tui_win_element {int dummy; } ;
struct tui_gen_win_info {void** content; int content_size; int type; } ;


 int FUNC_0 (struct tui_win_element*,int ) ;
 scalar_t__ FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (int) ;

int
FUNC_3 (struct tui_gen_win_info * VAR_0, int VAR_1)
{
  struct tui_win_element * VAR_2;
  int VAR_3, VAR_4;

  if (VAR_0->content == ((void*)0))
    {
      VAR_0->content = (void **) FUNC_1 (VAR_1, VAR_0->type);
      VAR_4 = 0;
    }
  else
    VAR_4 = VAR_0->content_size;
  if (VAR_0->content != ((void*)0))
    {
      for (VAR_3 = VAR_4; (VAR_3 < VAR_1 + VAR_4); VAR_3++)
 {
   if ((VAR_2 = (struct tui_win_element *)
        FUNC_2 (sizeof (struct tui_win_element))) != (struct tui_win_element *) ((void*)0))
     {
       VAR_0->content[VAR_3] = (void *) VAR_2;
       FUNC_0 (VAR_2, VAR_0->type);
       VAR_0->content_size++;
     }
   else
     return (-1);
 }
    }

  return VAR_4;
}
