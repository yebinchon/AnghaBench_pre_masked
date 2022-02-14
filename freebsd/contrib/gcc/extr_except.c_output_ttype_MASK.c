
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct cgraph_varpool_node {int dummy; } ;
typedef int rtx ;
struct TYPE_3__ {scalar_t__ (* ttype ) (int ) ;} ;
struct TYPE_4__ {TYPE_1__ asm_out; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int ,int,int,int) ;
 int FUNC_5 (struct cgraph_varpool_node*) ;
 struct cgraph_varpool_node* FUNC_6 (scalar_t__) ;
 int VAR_10 ;
 int FUNC_7 (int,int ,int,int *) ;
 int FUNC_8 (scalar_t__,int ,int ,int ) ;
 int FUNC_9 (int) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (int ) ;
 TYPE_2__ VAR_11 ;

__attribute__((used)) static void
FUNC_12 (tree VAR_12, int VAR_13, int VAR_14)
{
  rtx VAR_15;
  bool VAR_16 = 1;

  if (VAR_12 == VAR_7)
    VAR_15 = VAR_10;
  else
    {
      struct cgraph_varpool_node *VAR_17;

      VAR_12 = FUNC_10 (VAR_12);
      VAR_15 = FUNC_8 (VAR_12, VAR_6, VAR_9, VAR_4);




      FUNC_0 (VAR_12);
      if (FUNC_1 (VAR_12) == VAR_0)
 {
   VAR_12 = FUNC_2 (VAR_12, 0);
   if (FUNC_1 (VAR_12) == VAR_8)
     {
       VAR_17 = FUNC_6 (VAR_12);
       if (VAR_17)
  FUNC_5 (VAR_17);
       VAR_16 = FUNC_3 (VAR_12);
     }
 }
      else
 FUNC_9 (FUNC_1 (VAR_12) == VAR_5);
    }


  if (VAR_11.asm_out.ttype (VAR_15))
    return;

  if (VAR_13 == VAR_2 || VAR_13 == VAR_3)
    FUNC_4 (VAR_15, VAR_14,
        VAR_14 * VAR_1, 1);
  else
    FUNC_7 (VAR_13, VAR_15, VAR_16, ((void*)0));
}
