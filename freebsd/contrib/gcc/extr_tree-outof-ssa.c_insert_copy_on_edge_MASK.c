
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int tree ;
typedef TYPE_3__* edge ;
struct TYPE_8__ {TYPE_2__* dest; TYPE_1__* src; } ;
struct TYPE_7__ {int index; } ;
struct TYPE_6__ {int index; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (scalar_t__,char*,...) ;
 int FUNC_6 (scalar_t__,int ,int) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8 (edge VAR_7, tree VAR_8, tree VAR_9)
{
  tree VAR_10;

  VAR_10 = FUNC_4 (VAR_1, FUNC_2 (VAR_8), VAR_8, VAR_9);
  FUNC_7 (VAR_8);

  if (FUNC_0 (VAR_9) == VAR_0)
    VAR_9 = FUNC_1 (VAR_9, 0);
  if (FUNC_0 (VAR_9) == VAR_4 || FUNC_0 (VAR_9) == VAR_2)
    FUNC_7 (VAR_9);

  if (VAR_5 && (VAR_6 & VAR_3))
    {
      FUNC_5 (VAR_5,
        "Inserting a copy on edge BB%d->BB%d :",
        VAR_7->src->index,
        VAR_7->dest->index);
      FUNC_6 (VAR_5, VAR_10, VAR_6);
      FUNC_5 (VAR_5, "\n");
    }

  FUNC_3 (VAR_7, VAR_10);
}
