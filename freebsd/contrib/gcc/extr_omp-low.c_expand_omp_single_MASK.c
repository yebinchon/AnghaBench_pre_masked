
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tree ;
struct omp_region {int exit; int entry; } ;
typedef int block_stmt_iterator ;
typedef int basic_block ;
struct TYPE_2__ {void* flags; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 int FUNC_10 (int) ;
 TYPE_1__* FUNC_11 (int ) ;

__attribute__((used)) static void
FUNC_12 (struct omp_region *VAR_4)
{
  basic_block VAR_5, VAR_6;
  block_stmt_iterator VAR_7;
  bool VAR_8 = 0;

  VAR_5 = VAR_4->entry;
  VAR_6 = VAR_4->exit;

  VAR_7 = FUNC_5 (VAR_5);



  if (FUNC_9 (FUNC_1 (FUNC_7 (VAR_7)),
         VAR_2))
    VAR_8 = 1;
  FUNC_10 (FUNC_2 (FUNC_7 (VAR_7)) == VAR_3);
  FUNC_6 (&VAR_7, 1);
  FUNC_11 (VAR_5)->flags = VAR_1;

  VAR_7 = FUNC_5 (VAR_6);
  if (!FUNC_0 (FUNC_7 (VAR_7)) || VAR_8)
    {
      tree VAR_9 = FUNC_3 ();
      FUNC_8 (&VAR_9);
      FUNC_4 (&VAR_7, VAR_9, VAR_0);
    }
  FUNC_6 (&VAR_7, 1);
  FUNC_11 (VAR_6)->flags = VAR_1;
}
