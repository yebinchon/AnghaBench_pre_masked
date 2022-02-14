
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct value_data {TYPE_1__* e; } ;
typedef int rtx ;
struct TYPE_2__ {size_t mode; unsigned int next_regno; int oldest_regno; } ;


 scalar_t__ VAR_0 ;
 size_t FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (size_t) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int FUNC_2 (int ) ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__* VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__* VAR_9 ;
 unsigned int** VAR_10 ;
 int FUNC_3 (unsigned int,size_t,struct value_data*) ;
 int FUNC_4 (struct value_data*) ;

__attribute__((used)) static void
FUNC_5 (rtx VAR_11, rtx VAR_12, struct value_data *VAR_13)
{
  unsigned int VAR_14 = FUNC_2 (VAR_11);
  unsigned int VAR_15 = FUNC_2 (VAR_12);
  unsigned int VAR_16, VAR_17;
  unsigned int VAR_18;



  if (VAR_15 == VAR_14)
    return;



  if (VAR_14 == VAR_3)
    return;


  if (VAR_8 && VAR_14 == VAR_1)
    return;




  if (VAR_7[VAR_14] || VAR_9[VAR_14])
    return;


  VAR_16 = VAR_10[VAR_14][FUNC_0 (VAR_11)];
  VAR_17 = VAR_10[VAR_15][FUNC_0 (VAR_11)];
  if ((VAR_14 > VAR_15 && VAR_14 < VAR_15 + VAR_17)
      || (VAR_15 > VAR_14 && VAR_15 < VAR_14 + VAR_16))
    return;




  if (VAR_13->e[VAR_15].mode == VAR_5)
    FUNC_3 (VAR_15, VAR_13->e[VAR_14].mode, VAR_13);
  else if (VAR_17 < (unsigned int) VAR_10[VAR_15][VAR_13->e[VAR_15].mode]
    && (FUNC_1 (VAR_13->e[VAR_15].mode) > VAR_4
        ? VAR_6 : VAR_0))
    return;




  else if (VAR_17 > (unsigned int) VAR_10[VAR_15][VAR_13->e[VAR_15].mode])
    return;



  VAR_13->e[VAR_14].oldest_regno = VAR_13->e[VAR_15].oldest_regno;

  for (VAR_18 = VAR_15; VAR_13->e[VAR_18].next_regno != VAR_2; VAR_18 = VAR_13->e[VAR_18].next_regno)
    continue;
  VAR_13->e[VAR_18].next_regno = VAR_14;




}
