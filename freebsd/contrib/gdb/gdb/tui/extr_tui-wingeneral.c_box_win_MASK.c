
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tui_gen_win_info {int title; int * handle; } ;
typedef int WINDOW ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int ,int ,int ,int ,int ,int ,int ,int ) ;

void
FUNC_4 (struct tui_gen_win_info * VAR_9, int VAR_10)
{
  if (VAR_9 && VAR_9->handle)
    {
      WINDOW *VAR_11;
      int VAR_12;

      VAR_11 = VAR_9->handle;
      if (VAR_10 == VAR_0)
        VAR_12 = VAR_1;
      else
        VAR_12 = VAR_2;

      FUNC_2 (VAR_11, VAR_12);
      FUNC_3 (VAR_11, VAR_8, VAR_8,
               VAR_3, VAR_3,
               VAR_6, VAR_7,
               VAR_4, VAR_5);
      if (VAR_9->title)
        FUNC_0 (VAR_11, 0, 3, VAR_9->title);
      FUNC_1 (VAR_11, VAR_12);
    }
}
