
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tree ;
typedef TYPE_2__* histogram_value ;
typedef int block_stmt_iterator ;
struct TYPE_4__ {int value; } ;
struct TYPE_5__ {TYPE_1__ hvalue; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int ,int,int ) ;
 int VAR_1 ;

__attribute__((used)) static tree
FUNC_2 (block_stmt_iterator *VAR_2,
       histogram_value VAR_3)
{
  tree VAR_4 = VAR_3->hvalue.value;
  return FUNC_1 (VAR_2, FUNC_0 (VAR_1, VAR_4),
       1, VAR_0);
}
