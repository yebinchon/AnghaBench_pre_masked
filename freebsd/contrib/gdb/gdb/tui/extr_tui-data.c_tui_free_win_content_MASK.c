
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tui_win_content ;
struct tui_gen_win_info {scalar_t__ content_size; int * content; int type; } ;


 int FUNC_0 (int ,scalar_t__,int ) ;

void
FUNC_1 (struct tui_gen_win_info * VAR_0)
{
  if (VAR_0->content != ((void*)0))
    {
      FUNC_0 ((tui_win_content) VAR_0->content,
     VAR_0->content_size,
     VAR_0->type);
      VAR_0->content = ((void*)0);
    }
  VAR_0->content_size = 0;
}
