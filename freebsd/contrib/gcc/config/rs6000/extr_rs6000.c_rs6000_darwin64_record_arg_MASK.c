
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int tree ;
typedef int rtx ;
struct TYPE_5__ {int words; int named; scalar_t__ use_stack; scalar_t__ intoffset; } ;
typedef int HOST_WIDE_INT ;
typedef TYPE_1__ CUMULATIVE_ARGS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*,int,int *,int*) ;
 int FUNC_6 (TYPE_1__*,int ,int ,int *,int*) ;

__attribute__((used)) static rtx
FUNC_7 (CUMULATIVE_ARGS *VAR_7, tree VAR_8,
       int VAR_9, bool VAR_10)
{
  rtx VAR_11[VAR_3];
  int VAR_12 = 1, VAR_13 = 1;
  HOST_WIDE_INT VAR_14 = FUNC_4 (VAR_8);

  CUMULATIVE_ARGS VAR_15 = *VAR_7;
  CUMULATIVE_ARGS *VAR_16 = &VAR_15;


  if (!VAR_10 && FUNC_0 (VAR_8) >= 2 * VAR_1
      && (VAR_16->words % 2) != 0)
    VAR_16->words++;

  VAR_16->intoffset = 0;
  VAR_16->use_stack = 0;
  VAR_16->named = VAR_9;





  FUNC_6 (VAR_16, VAR_8, 0, VAR_11, &VAR_12);
  FUNC_5 (VAR_16, VAR_14 * VAR_0, VAR_11, &VAR_12);





  if (VAR_16->use_stack)
    {
      if (VAR_10)
 return VAR_4;
      VAR_13 = 0;
      VAR_11[0] = FUNC_2 (VAR_5, VAR_4, VAR_6);
    }
  if (VAR_12 > 1 || VAR_16->use_stack)
    return FUNC_3 (VAR_2, FUNC_1 (VAR_12 - VAR_13, &VAR_11[VAR_13]));
  else
    return VAR_4;
}
