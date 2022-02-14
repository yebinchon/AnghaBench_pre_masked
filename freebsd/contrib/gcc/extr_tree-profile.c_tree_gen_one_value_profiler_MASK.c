
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tree ;
typedef TYPE_2__* histogram_value ;
typedef int block_stmt_iterator ;
struct TYPE_5__ {int stmt; } ;
struct TYPE_6__ {TYPE_1__ hvalue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int VAR_2 ;
 int FUNC_4 (int *,int ,int,int ) ;
 int FUNC_5 (int *,TYPE_2__*) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (unsigned int,unsigned int) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_8 (histogram_value VAR_4, unsigned VAR_5, unsigned VAR_6)
{
  tree VAR_7 = VAR_4->hvalue.stmt;
  block_stmt_iterator VAR_8 = FUNC_0 (VAR_7);
  tree VAR_9 = FUNC_7 (VAR_5, VAR_6), VAR_10;
  tree VAR_11, VAR_12, VAR_13;

  VAR_10 = FUNC_4 (&VAR_8,
          FUNC_2 (VAR_9, VAR_2),
          1, VAR_1);
  VAR_13 = FUNC_5 (&VAR_8, VAR_4);
  VAR_11 = FUNC_6 (VAR_1, VAR_10,
      FUNC_6 (VAR_1, VAR_13,
          VAR_1));
  VAR_12 = FUNC_3 (VAR_3, VAR_11);
  FUNC_1 (&VAR_8, VAR_12, VAR_0);
}
