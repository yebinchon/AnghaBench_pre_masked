
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct df_ref {int dummy; } ;
typedef int rtx ;
typedef enum iv_grd_result { ____Placeholder_iv_grd_result } iv_grd_result ;
typedef scalar_t__ basic_block ;
struct TYPE_2__ {struct df_ref* ref; scalar_t__ next; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (struct df_ref*) ;
 TYPE_1__* FUNC_3 (struct df_ref*) ;
 int FUNC_4 (struct df_ref*) ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_7 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 struct df_ref* FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int ,scalar_t__,scalar_t__) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ,scalar_t__) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static enum iv_grd_result
FUNC_13 (rtx VAR_8, rtx VAR_9, struct df_ref **VAR_10)
{
  struct df_ref *VAR_11, *VAR_12;
  basic_block VAR_13, VAR_14;
  rtx VAR_15;
  bool VAR_16;

  *VAR_10 = ((void*)0);
  if (!FUNC_12 (VAR_9))
    return VAR_1;
  if (FUNC_5 (VAR_9) == VAR_5)
    VAR_9 = FUNC_7 (VAR_9);
  FUNC_10 (FUNC_6 (VAR_9));

  VAR_11 = FUNC_8 (VAR_7, VAR_8, VAR_9);
  FUNC_10 (VAR_11 != ((void*)0));

  if (!FUNC_3 (VAR_11))
    return VAR_2;


  if (FUNC_3 (VAR_11)->next)
    return VAR_1;

  VAR_12 = FUNC_3 (VAR_11)->ref;
  VAR_15 = FUNC_4 (VAR_12);
  VAR_13 = FUNC_2 (VAR_12);
  VAR_14 = FUNC_0 (VAR_8);

  if (VAR_14 == VAR_13)
    VAR_16 = (FUNC_1 (VAR_7, VAR_15) < FUNC_1 (VAR_7, VAR_8));
  else
    VAR_16 = FUNC_9 (VAR_0, VAR_14, VAR_13);

  if (VAR_16)
    {
      *VAR_10 = VAR_12;
      return VAR_4;
    }




  if (FUNC_11 (VAR_6, VAR_13))
    return VAR_3;

  return VAR_1;
}
