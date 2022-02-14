
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omp_region {scalar_t__ exit; scalar_t__ entry; } ;
typedef int block_stmt_iterator ;
typedef scalar_t__ basic_block ;
struct TYPE_2__ {void* flags; } ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 TYPE_1__* FUNC_5 (scalar_t__) ;

__attribute__((used)) static void
FUNC_6 (struct omp_region *VAR_6)
{
  basic_block VAR_7, VAR_8;
  block_stmt_iterator VAR_9;

  VAR_7 = VAR_6->entry;
  VAR_8 = VAR_6->exit;

  VAR_9 = FUNC_1 (VAR_7);
  FUNC_4 (FUNC_0 (FUNC_3 (VAR_9)) == VAR_5
       || FUNC_0 (FUNC_3 (VAR_9)) == VAR_2
       || FUNC_0 (FUNC_3 (VAR_9)) == VAR_3
       || FUNC_0 (FUNC_3 (VAR_9)) == VAR_1);
  FUNC_2 (&VAR_9, 1);
  FUNC_5 (VAR_7)->flags = VAR_0;

  if (VAR_8)
    {
      VAR_9 = FUNC_1 (VAR_8);
      FUNC_4 (FUNC_0 (FUNC_3 (VAR_9)) == VAR_4);
      FUNC_2 (&VAR_9, 1);
      FUNC_5 (VAR_8)->flags = VAR_0;
    }
}
