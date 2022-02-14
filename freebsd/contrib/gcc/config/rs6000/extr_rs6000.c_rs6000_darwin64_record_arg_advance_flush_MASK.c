
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
struct TYPE_3__ {int intoffset; int words; } ;
typedef int HOST_WIDE_INT ;
typedef TYPE_1__ CUMULATIVE_ARGS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ,int ) ;

__attribute__((used)) static void
FUNC_1 (CUMULATIVE_ARGS *VAR_3,
       HOST_WIDE_INT VAR_4)
{
  unsigned int VAR_5, VAR_6;
  int VAR_7, VAR_8;
  enum machine_mode VAR_9;

  if (VAR_3->intoffset == -1)
    return;

  VAR_8 = VAR_3->intoffset;
  VAR_3->intoffset = -1;

  if (VAR_8 % VAR_0 != 0)
    {
      VAR_9 = FUNC_0 (VAR_0 - VAR_8 % VAR_0,
       VAR_2, 0);
      if (VAR_9 == VAR_1)
 {




   VAR_8 = VAR_8 & -VAR_0;
 }
    }

  VAR_5 = VAR_8 & -VAR_0;
  VAR_6 = (VAR_4 + VAR_0 - 1) & -VAR_0;
  VAR_7 = (VAR_6 - VAR_5) / VAR_0;
  VAR_3->words += VAR_7;
}
