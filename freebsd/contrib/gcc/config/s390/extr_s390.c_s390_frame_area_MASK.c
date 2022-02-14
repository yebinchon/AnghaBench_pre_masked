
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int first_restore_gpr; int gprs_offset; int last_restore_gpr; int high_fprs; scalar_t__ f4_offset; scalar_t__ f8_offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int) ;
 TYPE_1__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void
FUNC_3 (int *VAR_6, int *VAR_7)
{
  int VAR_8, VAR_9;
  int VAR_10;

  VAR_8 = VAR_0;
  VAR_9 = VAR_1;

  if (VAR_4.first_restore_gpr != -1)
    {
      VAR_8 = (VAR_4.gprs_offset
    + VAR_4.first_restore_gpr * VAR_3);
      VAR_9 = VAR_8 + (VAR_4.last_restore_gpr
        - VAR_4.first_restore_gpr + 1) * VAR_3;
    }

  if (VAR_2 && VAR_5)
    {
      VAR_8 = FUNC_1 (VAR_8, VAR_4.f8_offset);
      VAR_9 = FUNC_0 (VAR_9, (VAR_4.f8_offset
     + VAR_4.high_fprs * 8));
    }

  if (!VAR_2)
    for (VAR_10 = 2; VAR_10 < 4; VAR_10++)
      if (FUNC_2 (VAR_10))
 {
   VAR_8 = FUNC_1 (VAR_8, VAR_4.f4_offset + (VAR_10 - 2) * 8);
   VAR_9 = FUNC_0 (VAR_9, VAR_4.f4_offset + (VAR_10 - 1) * 8);
 }

  *VAR_6 = VAR_8;
  *VAR_7 = VAR_9;
}
