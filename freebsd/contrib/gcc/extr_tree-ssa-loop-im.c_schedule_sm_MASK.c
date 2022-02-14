
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tree ;
struct mem_ref_loc {int stmt; struct mem_ref_loc* next; } ;
struct loop {int num; } ;
struct lim_aux_data {int dummy; } ;
struct fmt_data {struct loop* orig_loop; struct loop* loop; } ;
typedef int edge ;
struct TYPE_6__ {int sm_done; struct loop* tgt_loop; struct loop* max_loop; } ;
struct TYPE_4__ {int aux; } ;
struct TYPE_5__ {TYPE_1__ common; } ;


 TYPE_3__* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int *,int ,struct fmt_data*) ;
 int VAR_4 ;
 int FUNC_5 (scalar_t__,char*,...) ;
 int FUNC_6 (int ) ;
 TYPE_2__* FUNC_7 (int ) ;
 int FUNC_8 (struct loop*) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (scalar_t__,int ,int ) ;
 int FUNC_11 (int ,struct mem_ref_loc*) ;
 int FUNC_12 (int ) ;
 int VAR_5 ;
 int FUNC_13 (int,int) ;

__attribute__((used)) static void
FUNC_14 (struct loop *VAR_6, edge *VAR_7, unsigned VAR_8, tree VAR_9,
      struct mem_ref_loc *VAR_10)
{
  struct mem_ref_loc *VAR_11;
  tree VAR_12;
  unsigned VAR_13;
  tree VAR_14, VAR_15;
  struct fmt_data VAR_16;

  if (VAR_2 && (VAR_3 & VAR_1))
    {
      FUNC_5 (VAR_2, "Executing store motion of ");
      FUNC_10 (VAR_2, VAR_9, 0);
      FUNC_5 (VAR_2, " from loop %d\n", VAR_6->num);
    }

  VAR_12 = FUNC_9 (FUNC_1 (VAR_9),
         FUNC_6 (VAR_9));

  VAR_16.loop = VAR_6;
  VAR_16.orig_loop = VAR_6;
  FUNC_4 (&VAR_9, VAR_4, &VAR_16);

  FUNC_11 (VAR_12, VAR_10);
  for (VAR_11 = VAR_10; VAR_11; VAR_11 = VAR_11->next)
    if (FUNC_0 (VAR_11->stmt))
      FUNC_0 (VAR_11->stmt)->sm_done = 1;


  VAR_14 = FUNC_3 (VAR_0, VAR_5, VAR_12, VAR_9);
  FUNC_7 (VAR_14)->common.aux = FUNC_13 (1, sizeof (struct lim_aux_data));
  FUNC_0 (VAR_14)->max_loop = VAR_6;
  FUNC_0 (VAR_14)->tgt_loop = VAR_6;



  FUNC_2 (FUNC_8 (VAR_6), VAR_14);

  for (VAR_13 = 0; VAR_13 < VAR_8; VAR_13++)
    {
      VAR_15 = FUNC_3 (VAR_0, VAR_5,
        FUNC_12 (VAR_9), VAR_12);
      FUNC_2 (VAR_7[VAR_13], VAR_15);
    }
}
