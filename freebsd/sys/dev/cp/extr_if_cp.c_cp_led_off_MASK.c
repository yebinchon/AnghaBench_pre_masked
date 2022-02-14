
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ sys; } ;
typedef TYPE_1__ cp_board_t ;
typedef int bdrv_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5 (void *VAR_1)
{
 cp_board_t *VAR_2 = VAR_1;
 bdrv_t *VAR_3 = (bdrv_t *) VAR_2->sys;
 int VAR_4;
 VAR_4 = FUNC_3 ();
 if (VAR_0) {
  FUNC_4 (VAR_4);
  return;
 }
 FUNC_0 (VAR_3);
 FUNC_2 (VAR_2, 0);
 FUNC_1 (VAR_3);
 FUNC_4 (VAR_4);
}
