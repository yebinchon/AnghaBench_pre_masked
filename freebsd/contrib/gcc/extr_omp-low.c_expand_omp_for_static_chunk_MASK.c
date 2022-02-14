
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* tree ;
struct omp_region {int exit; int cont; int entry; } ;
struct omp_for_data {scalar_t__ cond_code; void* v; void* step; void* n1; void* chunk_size; void* n2; } ;
typedef int block_stmt_iterator ;
typedef int basic_block ;


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
 int FUNC_0 (int ) ;
 scalar_t__ VAR_15 ;
 scalar_t__ FUNC_1 (int ) ;
 void* FUNC_2 (void*) ;
 scalar_t__ VAR_16 ;
 void* FUNC_3 () ;
 int FUNC_4 (void*,void**) ;
 void* VAR_17 ;
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
 void** VAR_18 ;
 int FUNC_16 (int ) ;
 void* FUNC_17 (scalar_t__,void*,void*,void*) ;
 void* FUNC_18 (void*,void*) ;
 int FUNC_19 (int) ;
 void* FUNC_20 (void*,void**) ;
 void* FUNC_21 (void*,void**,int *) ;
 int FUNC_22 (void*,void**) ;
 scalar_t__ FUNC_23 (void*) ;
 int FUNC_24 (int ,int ,int ) ;
 int FUNC_25 (int ) ;
 int FUNC_26 (int ) ;
 int FUNC_27 (int ) ;
 void* FUNC_28 (int ) ;
 void* VAR_19 ;

__attribute__((used)) static void
FUNC_29 (struct omp_region *VAR_20, struct omp_for_data *VAR_21)
{
  tree VAR_22, VAR_23, VAR_24, VAR_25, VAR_26, VAR_27, VAR_28, VAR_29, VAR_30, VAR_31;
  tree VAR_32, VAR_33, VAR_34;
  tree VAR_35;
  basic_block VAR_36, VAR_37, VAR_38, VAR_39, VAR_40;
  basic_block VAR_41, VAR_42, VAR_43;
  tree VAR_44;
  block_stmt_iterator VAR_45;

  VAR_35 = FUNC_2 (VAR_21->v);

  VAR_36 = VAR_20->entry;
  VAR_40 = FUNC_16 (VAR_36);
  VAR_39 = FUNC_16 (VAR_40);
  VAR_38 = FUNC_26 (VAR_36);
  VAR_42 = VAR_20->cont;
  VAR_41 = FUNC_16 (VAR_42);
  VAR_43 = FUNC_26 (VAR_42);
  VAR_37 = VAR_20->exit;

  VAR_22 = FUNC_28 (VAR_40);
  VAR_23 = FUNC_28 (VAR_39);
  VAR_24 = FUNC_28 (VAR_38);
  VAR_25 = FUNC_28 (VAR_41);
  VAR_26 = FUNC_28 (VAR_43);


  VAR_44 = FUNC_3 ();

  VAR_31 = VAR_18[VAR_2];
  VAR_31 = FUNC_13 (VAR_31, ((void*)0));
  VAR_31 = FUNC_18 (VAR_35, VAR_31);
  VAR_33 = FUNC_20 (VAR_31, &VAR_44);

  VAR_31 = VAR_18[VAR_3];
  VAR_31 = FUNC_13 (VAR_31, ((void*)0));
  VAR_31 = FUNC_18 (VAR_35, VAR_31);
  VAR_34 = FUNC_20 (VAR_31, &VAR_44);

  VAR_21->n1 = FUNC_18 (VAR_35, VAR_21->n1);
  if (!FUNC_23 (VAR_21->n1))
    VAR_21->n1 = FUNC_20 (VAR_21->n1, &VAR_44);

  VAR_21->n2 = FUNC_18 (VAR_35, VAR_21->n2);
  if (!FUNC_23 (VAR_21->n2))
    VAR_21->n2 = FUNC_20 (VAR_21->n2, &VAR_44);

  VAR_21->step = FUNC_18 (VAR_35, VAR_21->step);
  if (!FUNC_23 (VAR_21->step))
    VAR_21->step = FUNC_20 (VAR_21->step, &VAR_44);

  VAR_21->chunk_size = FUNC_18 (VAR_35, VAR_21->chunk_size);
  if (!FUNC_23 (VAR_21->chunk_size))
    VAR_21->chunk_size = FUNC_20 (VAR_21->chunk_size, &VAR_44);

  VAR_31 = FUNC_14 (VAR_35, (VAR_21->cond_code == VAR_8 ? -1 : 1));
  VAR_31 = FUNC_17 (VAR_15, VAR_35, VAR_21->step, VAR_31);
  VAR_31 = FUNC_17 (VAR_15, VAR_35, VAR_31, VAR_21->n2);
  VAR_31 = FUNC_17 (VAR_9, VAR_35, VAR_31, VAR_21->n1);
  VAR_31 = FUNC_17 (VAR_16, VAR_35, VAR_31, VAR_21->step);
  VAR_31 = FUNC_18 (VAR_35, VAR_31);
  if (FUNC_23 (VAR_31))
    VAR_27 = VAR_31;
  else
    VAR_27 = FUNC_20 (VAR_31, &VAR_44);

  VAR_31 = FUNC_14 (VAR_35, 0);
  VAR_32 = FUNC_21 (VAR_31, &VAR_44, ((void*)0));

  VAR_45 = FUNC_6 (VAR_36);
  FUNC_19 (FUNC_1 (FUNC_9 (VAR_45)) == VAR_14);
  FUNC_5 (&VAR_45, VAR_44, VAR_1);
  FUNC_7 (&VAR_45, 1);


  VAR_44 = FUNC_3 ();

  VAR_31 = FUNC_10 (VAR_12, VAR_35, VAR_32, VAR_33);
  VAR_31 = FUNC_10 (VAR_15, VAR_35, VAR_31, VAR_34);
  VAR_31 = FUNC_10 (VAR_12, VAR_35, VAR_31, VAR_21->chunk_size);
  VAR_28 = FUNC_20 (VAR_31, &VAR_44);

  VAR_31 = FUNC_10 (VAR_15, VAR_35, VAR_28, VAR_21->chunk_size);
  VAR_31 = FUNC_10 (VAR_10, VAR_35, VAR_31, VAR_27);
  VAR_29 = FUNC_20 (VAR_31, &VAR_44);

  VAR_31 = FUNC_10 (VAR_8, VAR_17, VAR_28, VAR_27);
  VAR_31 = FUNC_11 (VAR_4, VAR_19, VAR_31,
       FUNC_12 (&VAR_23), FUNC_12 (&VAR_26));
  FUNC_4 (VAR_31, &VAR_44);

  VAR_45 = FUNC_8 (VAR_40);
  FUNC_5 (&VAR_45, VAR_44, VAR_0);


  VAR_44 = FUNC_3 ();

  VAR_31 = FUNC_18 (VAR_35, VAR_28);
  VAR_31 = FUNC_10 (VAR_12, VAR_35, VAR_31, VAR_21->step);
  VAR_31 = FUNC_10 (VAR_15, VAR_35, VAR_31, VAR_21->n1);
  VAR_31 = FUNC_10 (VAR_11, VAR_19, VAR_21->v, VAR_31);
  FUNC_22 (VAR_31, &VAR_44);

  VAR_31 = FUNC_18 (VAR_35, VAR_29);
  VAR_31 = FUNC_10 (VAR_12, VAR_35, VAR_31, VAR_21->step);
  VAR_31 = FUNC_10 (VAR_15, VAR_35, VAR_31, VAR_21->n1);
  VAR_30 = FUNC_20 (VAR_31, &VAR_44);

  VAR_45 = FUNC_8 (VAR_39);
  FUNC_5 (&VAR_45, VAR_44, VAR_0);



  VAR_44 = FUNC_3 ();

  VAR_31 = FUNC_10 (VAR_15, VAR_35, VAR_21->v, VAR_21->step);
  VAR_31 = FUNC_10 (VAR_11, VAR_19, VAR_21->v, VAR_31);
  FUNC_22 (VAR_31, &VAR_44);

  VAR_31 = FUNC_10 (VAR_21->cond_code, VAR_17, VAR_21->v, VAR_30);
  VAR_31 = FUNC_20 (VAR_31, &VAR_44);
  VAR_31 = FUNC_11 (VAR_4, VAR_19, VAR_31,
       FUNC_12 (&VAR_24), FUNC_12 (&VAR_25));
  FUNC_4 (VAR_31, &VAR_44);

  VAR_45 = FUNC_6 (VAR_42);
  FUNC_19 (FUNC_1 (FUNC_9 (VAR_45)) == VAR_13);
  FUNC_5 (&VAR_45, VAR_44, VAR_1);
  FUNC_7 (&VAR_45, 1);


  VAR_44 = FUNC_3 ();

  VAR_31 = FUNC_14 (VAR_35, 1);
  VAR_31 = FUNC_10 (VAR_15, VAR_35, VAR_32, VAR_31);
  VAR_31 = FUNC_10 (VAR_11, VAR_19, VAR_32, VAR_31);
  FUNC_22 (VAR_31, &VAR_44);

  VAR_45 = FUNC_8 (VAR_41);
  FUNC_5 (&VAR_45, VAR_44, VAR_0);


  VAR_45 = FUNC_6 (VAR_37);
  if (!FUNC_0 (FUNC_9 (VAR_45)))
    {
      VAR_44 = FUNC_3 ();
      FUNC_15 (&VAR_44);
      FUNC_5 (&VAR_45, VAR_44, VAR_1);
    }
  FUNC_7 (&VAR_45, 1);


  FUNC_25 (FUNC_27 (VAR_36));
  FUNC_24 (VAR_36, VAR_40, VAR_5);

  FUNC_24 (VAR_40, VAR_39, VAR_7);
  FUNC_24 (VAR_40, VAR_43, VAR_6);

  FUNC_24 (VAR_39, VAR_38, VAR_5);

  FUNC_25 (FUNC_27 (VAR_42));
  FUNC_24 (VAR_42, VAR_38, VAR_7);
  FUNC_24 (VAR_42, VAR_41, VAR_6);

  FUNC_24 (VAR_41, VAR_40, VAR_5);
}
