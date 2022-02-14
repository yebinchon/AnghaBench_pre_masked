
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ type; int equiv; } ;
typedef TYPE_1__ value_range_t ;
typedef int tree ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,int ,int ,int ,int *) ;

__attribute__((used)) static void
FUNC_4 (value_range_t *VAR_3, tree VAR_4)
{
  value_range_t *VAR_5 = FUNC_2 (VAR_4);

  if (VAR_5->type != VAR_1 && VAR_5->type != VAR_2)
    FUNC_1 (VAR_3, VAR_5);
  else
    FUNC_3 (VAR_3, VAR_0, VAR_4, VAR_4, ((void*)0));

  FUNC_0 (VAR_3->equiv, VAR_4);
}
