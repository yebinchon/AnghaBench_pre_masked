
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* tree ;
struct omp_region {int exit; int cont; int entry; } ;
struct omp_for_data {scalar_t__ cond_code; void* v; void* step; void* n1; void* n2; } ;
typedef int block_stmt_iterator ;
typedef int basic_block ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_17 ;
 scalar_t__ FUNC_1 (int ) ;
 void* FUNC_2 (void*) ;
 scalar_t__ VAR_18 ;
 void* FUNC_3 () ;
 int FUNC_4 (void*,void**) ;
 void* VAR_19 ;
 int FUNC_5 (int *,void*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 void* FUNC_10 (scalar_t__,void*,void*,void*) ;
 void* FUNC_11 (int ,void*,void*,int ,int ) ;
 int FUNC_12 (void**) ;
 void* FUNC_13 (void*,int *) ;
 void* FUNC_14 (void*,int) ;
 int FUNC_15 (void**) ;
 void** VAR_20 ;
 int FUNC_16 (int ) ;
 TYPE_1__* FUNC_17 (int ,int ) ;
 void* FUNC_18 (scalar_t__,void*,void*,void*) ;
 void* FUNC_19 (void*,void*) ;
 int FUNC_20 (int) ;
 void* FUNC_21 (void*,void**) ;
 int FUNC_22 (void*,void**) ;
 scalar_t__ FUNC_23 (void*) ;
 int FUNC_24 (int ,int ,int ) ;
 int FUNC_25 (int ) ;
 int FUNC_26 (int ) ;
 int FUNC_27 (int ) ;
 void* FUNC_28 (int ) ;
 void* VAR_21 ;

__attribute__((used)) static void
FUNC_29 (struct omp_region *VAR_22,
          struct omp_for_data *VAR_23)
{
  tree VAR_24, VAR_25, VAR_26, VAR_27, VAR_28, VAR_29, VAR_30, VAR_31, VAR_32, VAR_33, VAR_34;
  tree VAR_35, VAR_36;
  basic_block VAR_37, VAR_38, VAR_39, VAR_40, VAR_41;
  basic_block VAR_42;
  block_stmt_iterator VAR_43;

  VAR_35 = FUNC_2 (VAR_23->v);

  VAR_37 = VAR_22->entry;
  VAR_39 = FUNC_16 (VAR_37);
  VAR_40 = FUNC_26 (VAR_37);
  VAR_41 = VAR_22->cont;
  VAR_42 = FUNC_26 (VAR_41);
  VAR_38 = VAR_22->exit;

  VAR_24 = FUNC_28 (VAR_39);
  VAR_25 = FUNC_28 (VAR_40);
  VAR_26 = FUNC_28 (VAR_42);


  VAR_36 = FUNC_3 ();

  VAR_32 = VAR_20[VAR_2];
  VAR_32 = FUNC_13 (VAR_32, ((void*)0));
  VAR_32 = FUNC_19 (VAR_35, VAR_32);
  VAR_33 = FUNC_21 (VAR_32, &VAR_36);

  VAR_32 = VAR_20[VAR_3];
  VAR_32 = FUNC_13 (VAR_32, ((void*)0));
  VAR_32 = FUNC_19 (VAR_35, VAR_32);
  VAR_34 = FUNC_21 (VAR_32, &VAR_36);

  VAR_23->n1 = FUNC_19 (VAR_35, VAR_23->n1);
  if (!FUNC_23 (VAR_23->n1))
    VAR_23->n1 = FUNC_21 (VAR_23->n1, &VAR_36);

  VAR_23->n2 = FUNC_19 (VAR_35, VAR_23->n2);
  if (!FUNC_23 (VAR_23->n2))
    VAR_23->n2 = FUNC_21 (VAR_23->n2, &VAR_36);

  VAR_23->step = FUNC_19 (VAR_35, VAR_23->step);
  if (!FUNC_23 (VAR_23->step))
    VAR_23->step = FUNC_21 (VAR_23->step, &VAR_36);

  VAR_32 = FUNC_14 (VAR_35, (VAR_23->cond_code == VAR_9 ? -1 : 1));
  VAR_32 = FUNC_18 (VAR_17, VAR_35, VAR_23->step, VAR_32);
  VAR_32 = FUNC_18 (VAR_17, VAR_35, VAR_32, VAR_23->n2);
  VAR_32 = FUNC_18 (VAR_10, VAR_35, VAR_32, VAR_23->n1);
  VAR_32 = FUNC_18 (VAR_18, VAR_35, VAR_32, VAR_23->step);
  VAR_32 = FUNC_19 (VAR_35, VAR_32);
  if (FUNC_23 (VAR_32))
    VAR_27 = VAR_32;
  else
    VAR_27 = FUNC_21 (VAR_32, &VAR_36);

  VAR_32 = FUNC_10 (VAR_18, VAR_35, VAR_27, VAR_33);
  VAR_28 = FUNC_21 (VAR_32, &VAR_36);

  VAR_32 = FUNC_10 (VAR_13, VAR_35, VAR_28, VAR_33);
  VAR_32 = FUNC_10 (VAR_14, VAR_35, VAR_32, VAR_27);
  VAR_32 = FUNC_10 (VAR_17, VAR_35, VAR_28, VAR_32);
  VAR_28 = FUNC_21 (VAR_32, &VAR_36);

  VAR_32 = FUNC_10 (VAR_13, VAR_35, VAR_28, VAR_34);
  VAR_29 = FUNC_21 (VAR_32, &VAR_36);

  VAR_32 = FUNC_10 (VAR_17, VAR_35, VAR_29, VAR_28);
  VAR_32 = FUNC_10 (VAR_11, VAR_35, VAR_32, VAR_27);
  VAR_30 = FUNC_21 (VAR_32, &VAR_36);

  VAR_32 = FUNC_10 (VAR_8, VAR_19, VAR_29, VAR_30);
  VAR_32 = FUNC_11 (VAR_4, VAR_21, VAR_32, FUNC_12 (&VAR_26),
       FUNC_12 (&VAR_24));
  FUNC_4 (VAR_32, &VAR_36);

  VAR_43 = FUNC_6 (VAR_37);
  FUNC_20 (FUNC_1 (FUNC_9 (VAR_43)) == VAR_16);
  FUNC_5 (&VAR_43, VAR_36, VAR_1);
  FUNC_7 (&VAR_43, 1);


  VAR_36 = FUNC_3 ();

  VAR_32 = FUNC_19 (VAR_35, VAR_29);
  VAR_32 = FUNC_10 (VAR_13, VAR_35, VAR_32, VAR_23->step);
  VAR_32 = FUNC_10 (VAR_17, VAR_35, VAR_32, VAR_23->n1);
  VAR_32 = FUNC_10 (VAR_12, VAR_21, VAR_23->v, VAR_32);
  FUNC_22 (VAR_32, &VAR_36);

  VAR_32 = FUNC_19 (VAR_35, VAR_30);
  VAR_32 = FUNC_10 (VAR_13, VAR_35, VAR_32, VAR_23->step);
  VAR_32 = FUNC_10 (VAR_17, VAR_35, VAR_32, VAR_23->n1);
  VAR_31 = FUNC_21 (VAR_32, &VAR_36);

  VAR_43 = FUNC_8 (VAR_39);
  FUNC_5 (&VAR_43, VAR_36, VAR_0);


  VAR_36 = FUNC_3 ();

  VAR_32 = FUNC_10 (VAR_17, VAR_35, VAR_23->v, VAR_23->step);
  VAR_32 = FUNC_10 (VAR_12, VAR_21, VAR_23->v, VAR_32);
  FUNC_22 (VAR_32, &VAR_36);

  VAR_32 = FUNC_10 (VAR_23->cond_code, VAR_19, VAR_23->v, VAR_31);
  VAR_32 = FUNC_21 (VAR_32, &VAR_36);
  VAR_32 = FUNC_11 (VAR_4, VAR_21, VAR_32, FUNC_12 (&VAR_25),
       FUNC_12 (&VAR_26));
  FUNC_4 (VAR_32, &VAR_36);

  VAR_43 = FUNC_6 (VAR_41);
  FUNC_20 (FUNC_1 (FUNC_9 (VAR_43)) == VAR_15);
  FUNC_5 (&VAR_43, VAR_36, VAR_1);
  FUNC_7 (&VAR_43, 1);


  VAR_43 = FUNC_6 (VAR_38);
  if (!FUNC_0 (FUNC_9 (VAR_43)))
    {
      VAR_36 = FUNC_3 ();
      FUNC_15 (&VAR_36);
      FUNC_5 (&VAR_43, VAR_36, VAR_1);
    }
  FUNC_7 (&VAR_43, 1);


  FUNC_24 (VAR_39, VAR_40, VAR_5);

  FUNC_25 (FUNC_27 (VAR_37));
  FUNC_24 (VAR_37, VAR_42, VAR_7);
  FUNC_24 (VAR_37, VAR_39, VAR_6);

  FUNC_24 (VAR_41, VAR_40, VAR_7);
  FUNC_17 (VAR_41, VAR_42)->flags = VAR_6;
}
