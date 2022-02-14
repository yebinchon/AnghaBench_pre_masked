
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
struct TYPE_6__ {int decl; } ;
struct TYPE_4__ {scalar_t__ (* struct_value_rtx ) (int ,int) ;} ;
struct TYPE_5__ {TYPE_1__ calls; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ) ;
 int VAR_5 ;
 int FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (scalar_t__,int,int) ;
 int* VAR_6 ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (int ,int ,int) ;
 TYPE_3__* VAR_7 ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 int VAR_8 ;
 int FUNC_11 (int ,scalar_t__) ;
 scalar_t__ FUNC_12 (int ,int ) ;
 scalar_t__ FUNC_13 (int,int ) ;
 int FUNC_14 (scalar_t__,int ) ;
 scalar_t__ FUNC_15 (int ,int) ;
 scalar_t__ FUNC_16 (int ,int) ;
 TYPE_2__ VAR_9 ;
 scalar_t__ VAR_10 ;

__attribute__((used)) static rtx
FUNC_17 (void)
{
  rtx VAR_11, VAR_12;
  int VAR_13, VAR_14, VAR_15;
  enum machine_mode VAR_16;
  rtx VAR_17 = VAR_9.calls.struct_value_rtx (VAR_7 ? FUNC_4 (VAR_7->decl) : 0, 1);



  VAR_11 = FUNC_8 (VAR_1, FUNC_7 (), -1);


  VAR_13 = FUNC_2 (VAR_4);
  if (VAR_9.calls.struct_value_rtx (VAR_7 ? FUNC_4 (VAR_7->decl) : 0, 0))
    VAR_13 += FUNC_2 (VAR_4);


  for (VAR_15 = 0; VAR_15 < VAR_2; VAR_15++)
    if ((VAR_16 = VAR_6[VAR_15]) != VAR_5)
      {
 VAR_14 = FUNC_1 (VAR_16) / VAR_0;
 if (VAR_13 % VAR_14 != 0)
   VAR_13 = FUNC_0 (VAR_13, VAR_14) * VAR_14;

 VAR_12 = FUNC_13 (VAR_16, FUNC_3 (VAR_15));

 FUNC_11 (FUNC_6 (VAR_11, VAR_16, VAR_13), VAR_12);
 VAR_13 += FUNC_2 (VAR_16);
      }


  VAR_12 = FUNC_10 (VAR_10);
  FUNC_11 (FUNC_6 (VAR_11, VAR_4, 0), VAR_12);

  VAR_13 = FUNC_2 (VAR_4);



  if (VAR_17)
    {
      FUNC_11 (FUNC_6 (VAR_11, VAR_4, VAR_13),
        FUNC_10 (VAR_17));
      VAR_13 += FUNC_2 (VAR_4);
    }


  return FUNC_9 (FUNC_5 (VAR_11, 0));
}
