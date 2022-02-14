
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int rtx ;
struct TYPE_3__ {int (* internal_label ) (int ,char*,int ) ;} ;
struct TYPE_4__ {TYPE_1__ asm_out; } ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int,int) ;
 int FUNC_8 (int ,int) ;
 int VAR_0 ;
 int FUNC_9 (int ,char*,int ) ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static void
FUNC_10 (rtx VAR_2)
{
  rtx VAR_3 = FUNC_6 (VAR_2, 0), VAR_4 = FUNC_6 (VAR_2, 1);
  rtx VAR_5 = FUNC_6 (FUNC_6 (VAR_4, 0), 0);
  int VAR_6, VAR_7 = FUNC_8 (VAR_4, 1);
  (*VAR_1.asm_out.internal_label) (VAR_0, "L", FUNC_4 (VAR_3));


  for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++)
    {
      FUNC_0
        (VAR_0,
         VAR_4,
         FUNC_4 (FUNC_6 (FUNC_7 (VAR_4, 1, VAR_6), 0)),
         FUNC_4 (VAR_5));
    }




}
