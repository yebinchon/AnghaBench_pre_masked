
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int tree ;
typedef TYPE_4__* histogram_value ;
typedef int block_stmt_iterator ;
struct TYPE_8__ {int steps; int int_start; } ;
struct TYPE_9__ {TYPE_2__ intvl; } ;
struct TYPE_7__ {int stmt; } ;
struct TYPE_10__ {TYPE_3__ hdata; TYPE_1__ hvalue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int VAR_2 ;
 int FUNC_5 (int *,int ,int,int ) ;
 int VAR_3 ;
 int FUNC_6 (int *,TYPE_4__*) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (unsigned int,unsigned int) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_9 (histogram_value VAR_6, unsigned VAR_7, unsigned VAR_8)
{
  tree VAR_9 = VAR_6->hvalue.stmt;
  block_stmt_iterator VAR_10 = FUNC_0 (VAR_9);
  tree VAR_11 = FUNC_8 (VAR_7, VAR_8), VAR_12;
  tree VAR_13, VAR_14, VAR_15;
  tree VAR_16 = FUNC_4 (VAR_3, VAR_6->hdata.intvl.int_start);
  tree VAR_17 = FUNC_4 (VAR_5, VAR_6->hdata.intvl.steps);

  VAR_12 = FUNC_5 (&VAR_10,
          FUNC_2 (VAR_11, VAR_2),
          1, VAR_1);
  VAR_15 = FUNC_6 (&VAR_10, VAR_6);
  VAR_13 = FUNC_7 (VAR_1, VAR_12,
      FUNC_7 (VAR_1, VAR_15,
          FUNC_7 (VAR_1, VAR_16,
       FUNC_7 (VAR_1, VAR_17,
           VAR_1))));
  VAR_14 = FUNC_3 (VAR_4, VAR_13);
  FUNC_1 (&VAR_10, VAR_14, VAR_0);
}
