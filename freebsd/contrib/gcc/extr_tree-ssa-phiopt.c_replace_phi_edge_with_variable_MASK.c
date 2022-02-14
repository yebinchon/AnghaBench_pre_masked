
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int tree ;
typedef TYPE_1__* edge ;
typedef int block_stmt_iterator ;
typedef TYPE_2__* basic_block ;
struct TYPE_12__ {int flags; TYPE_2__* dest; scalar_t__ count; void* probability; } ;
struct TYPE_11__ {int index; } ;
struct TYPE_10__ {int dest_idx; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_8__* FUNC_0 (TYPE_2__*,int) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 void* VAR_3 ;
 int FUNC_2 (int ,int ) ;
 int VAR_4 ;
 TYPE_2__* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (TYPE_2__*) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (scalar_t__,char*,int,int) ;

__attribute__((used)) static void
FUNC_8 (basic_block VAR_7,
    edge VAR_8, tree VAR_9, tree VAR_10)
{
  basic_block VAR_11 = FUNC_3 (VAR_9);
  basic_block VAR_12;
  block_stmt_iterator VAR_13;


  FUNC_2 (FUNC_1 (VAR_9, VAR_8->dest_idx), VAR_10);


  if (FUNC_0 (VAR_7, 0)->dest == VAR_11)
    {
      FUNC_0 (VAR_7, 0)->flags |= VAR_0;
      FUNC_0 (VAR_7, 0)->flags &= ~(VAR_2 | VAR_1);
      FUNC_0 (VAR_7, 0)->probability = VAR_3;
      FUNC_0 (VAR_7, 0)->count += FUNC_0 (VAR_7, 1)->count;

      VAR_12 = FUNC_0 (VAR_7, 1)->dest;
    }
  else
    {
      FUNC_0 (VAR_7, 1)->flags |= VAR_0;
      FUNC_0 (VAR_7, 1)->flags
 &= ~(VAR_2 | VAR_1);
      FUNC_0 (VAR_7, 1)->probability = VAR_3;
      FUNC_0 (VAR_7, 1)->count += FUNC_0 (VAR_7, 0)->count;

      VAR_12 = FUNC_0 (VAR_7, 0)->dest;
    }
  FUNC_6 (VAR_12);


  VAR_13 = FUNC_4 (VAR_7);
  FUNC_5 (&VAR_13, 1);

  if (VAR_5 && (VAR_6 & VAR_4))
    FUNC_7 (VAR_5,
       "COND_EXPR in block %d and PHI in block %d converted to straightline code.\n",
       VAR_7->index,
       VAR_11->index);
}
