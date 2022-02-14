
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int tree ;
typedef TYPE_1__* basic_block ;
struct TYPE_5__ {scalar_t__ index; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ,int ,TYPE_1__*,int) ;
 int * VAR_1 ;

__attribute__((used)) static void
FUNC_7 (tree VAR_2, bool VAR_3)
{
  tree VAR_4;
  basic_block VAR_5;

  FUNC_4 (VAR_1 == ((void*)0)
       || !FUNC_3 (VAR_1, FUNC_1 (VAR_2)));

  VAR_4 = FUNC_0 (VAR_2);
  VAR_5 = FUNC_2 (VAR_4);
  if (VAR_5)
    {
      FUNC_4 (VAR_5->index < VAR_0);
      FUNC_5 (VAR_5);
      FUNC_6 (VAR_2, VAR_4, VAR_5, VAR_3);
    }
}
