
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct function {int arg_pointer_save_area_init; scalar_t__ x_arg_pointer_save_area; } ;
typedef scalar_t__ rtx ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ,int ,struct function*) ;
 struct function* VAR_1 ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (scalar_t__) ;
 int VAR_2 ;

rtx
FUNC_11 (struct function *VAR_3)
{
  rtx VAR_4 = VAR_3->x_arg_pointer_save_area;

  if (! VAR_4)
    {
      VAR_4 = FUNC_1 (VAR_0, FUNC_0 (VAR_0), 0, VAR_3);
      VAR_3->x_arg_pointer_save_area = VAR_4;
    }

  if (VAR_3 == VAR_1 && ! VAR_3->arg_pointer_save_area_init)
    {
      rtx VAR_5;




      FUNC_9 ();
      FUNC_3 (FUNC_10 (VAR_4), VAR_2);
      VAR_5 = FUNC_6 ();
      FUNC_4 ();

      FUNC_8 ();
      FUNC_2 (VAR_5, FUNC_5 ());
      FUNC_7 ();
    }

  return VAR_4;
}
