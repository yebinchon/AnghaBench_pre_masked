
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int basic_block ;
struct TYPE_4__ {int loop_father; } ;
struct TYPE_3__ {int loop_father; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ) ;
 unsigned int VAR_0 ;
 TYPE_2__* FUNC_4 (int ) ;
 TYPE_1__* FUNC_5 (int ) ;

void
FUNC_6 (void)
{
  unsigned VAR_1, VAR_2;
  basic_block VAR_3;

  VAR_1 = VAR_0;
  FUNC_2 ();
  for (VAR_2 = VAR_1; VAR_2 < (unsigned) VAR_0; VAR_2++)
    {
      VAR_3 = FUNC_0 (VAR_2);
      FUNC_1 (VAR_3,
        FUNC_3 (FUNC_4 (VAR_3)->loop_father,
     FUNC_5 (VAR_3)->loop_father));
    }
}
