
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int symbolS ;
typedef int subsegT ;
typedef scalar_t__ segT ;
typedef scalar_t__ addressT ;
struct TYPE_4__ {int bss; } ;
struct TYPE_3__ {int * fr_symbol; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ,scalar_t__,int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_11 (int,int ,int ) ;
 int VAR_7 ;
 char* FUNC_12 (int ,int,int,int ,int *,scalar_t__,int *) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_13 (scalar_t__,int) ;
 int VAR_10 ;
 TYPE_2__* FUNC_14 (scalar_t__) ;
 int VAR_11 ;
 scalar_t__ FUNC_15 (char*,int) ;
 int FUNC_16 (scalar_t__,int) ;
 TYPE_1__* FUNC_17 (int *) ;
 int FUNC_18 (int *,int ) ;

void
FUNC_19 (symbolS *VAR_12, addressT VAR_13, int VAR_14)
{
  char *VAR_15;
  segT VAR_16 = VAR_8;
  subsegT VAR_17 = VAR_9;
  segT VAR_18 = VAR_6;
  FUNC_16 (VAR_18, 1);

  if (VAR_14)
    {
      FUNC_13 (VAR_18, VAR_14);
      FUNC_11 (VAR_14, 0, 0);
    }


  if (FUNC_0 (VAR_12) == VAR_18)
    FUNC_17 (VAR_12)->fr_symbol = ((void*)0);

  FUNC_18 (VAR_12, VAR_7);
  VAR_15 = FUNC_12 (VAR_10, 1, 1, 0, VAR_12, VAR_13, ((void*)0));
  *VAR_15 = 0;




  FUNC_2 (VAR_12, VAR_18);
  FUNC_16 (VAR_16, VAR_17);
}
