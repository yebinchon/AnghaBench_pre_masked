
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tui_gen_win_info {int width; int * handle; } ;
struct tui_data_element {scalar_t__ highlight; int content; } ;
typedef int WINDOW ;


 int FUNC_0 (struct tui_gen_win_info*) ;
 int FUNC_1 (int *,char) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6 (struct tui_data_element *VAR_0,
                      struct tui_gen_win_info *VAR_1)
{
  if (VAR_1->handle != (WINDOW *) ((void*)0))
    {
      int VAR_2;

      if (VAR_0->highlight)
 FUNC_5 (VAR_1->handle);

      FUNC_3 (VAR_1->handle, 0, 0);
      for (VAR_2 = 1; VAR_2 < VAR_1->width; VAR_2++)
        FUNC_1 (VAR_1->handle, ' ');
      FUNC_3 (VAR_1->handle, 0, 0);
      if (VAR_0->content)
        FUNC_2 (VAR_1->handle, VAR_0->content);

      if (VAR_0->highlight)
 FUNC_4 (VAR_1->handle);
      FUNC_0 (VAR_1);
    }
}
