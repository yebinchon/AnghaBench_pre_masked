
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tree ;
typedef TYPE_1__* edge ;
typedef int basic_block ;
struct TYPE_3__ {void* goto_locus; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ) ;
 TYPE_1__* FUNC_9 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_10 (basic_block VAR_3)
{
  tree VAR_4 = FUNC_8 (VAR_3);
  basic_block VAR_5, VAR_6;
  tree VAR_7, VAR_8;
  edge VAR_9;

  FUNC_6 (VAR_4);
  FUNC_6 (FUNC_5 (VAR_4) == VAR_0);


  VAR_7 = FUNC_4 (FUNC_1 (VAR_4));
  VAR_8 = FUNC_4 (FUNC_0 (VAR_4));
  VAR_5 = FUNC_7 (VAR_7);
  VAR_6 = FUNC_7 (VAR_8);

  VAR_9 = FUNC_9 (VAR_3, VAR_5, VAR_2);



  VAR_9->goto_locus = FUNC_3 (FUNC_1 (VAR_4));

  VAR_9 = FUNC_9 (VAR_3, VAR_6, VAR_1);
  if (VAR_9)
    {



      VAR_9->goto_locus = FUNC_3 (FUNC_0 (VAR_4));

    }
}
