
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int * tree ;
struct omp_region {TYPE_1__* inner; } ;
typedef TYPE_2__* edge ;
typedef int block_stmt_iterator ;
typedef int basic_block ;
struct TYPE_6__ {int dest; int src; } ;
struct TYPE_5__ {int type; int sched_kind; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int * VAR_12 ;
 int VAR_13 ;
 int * FUNC_0 (int *) ;
 int VAR_14 ;
 int * FUNC_1 (int *) ;

 int * FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;

 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int * FUNC_9 (int ,int ,int *) ;
 int * FUNC_10 (int ,int ,int *,int *) ;
 int * FUNC_11 (int ,int ,int *,int ,int ) ;
 int FUNC_12 (int **) ;
 int * FUNC_13 (int *) ;
 int * FUNC_14 (int *,int *) ;
 int * FUNC_15 (int ,int) ;
 int ** VAR_15 ;
 int * FUNC_16 (int *,int *) ;
 int * FUNC_17 () ;
 int FUNC_18 (int ) ;
 int * FUNC_19 (int ,int *) ;
 int * FUNC_20 (int *,int ) ;
 int * FUNC_21 (int ,int *) ;
 int FUNC_22 () ;
 int * FUNC_23 (int *,int **) ;
 int * FUNC_24 (int *) ;
 int FUNC_25 (int *,int **) ;
 scalar_t__ FUNC_26 (int *) ;
 scalar_t__ FUNC_27 (struct omp_region*) ;
 int FUNC_28 (int ,int ,int ) ;
 int * VAR_16 ;
 int FUNC_29 (int *) ;
 int FUNC_30 () ;
 int FUNC_31 (TYPE_2__*) ;
 TYPE_2__* FUNC_32 (int ,int *) ;
 int * FUNC_33 (int *,int *,int *) ;
 int VAR_17 ;
 int VAR_18 ;

__attribute__((used)) static void
FUNC_34 (struct omp_region *VAR_19, basic_block VAR_20,
        tree VAR_21, tree VAR_22)
{
  tree VAR_23, VAR_24, VAR_25, VAR_26, VAR_27, VAR_28, VAR_29;
  block_stmt_iterator VAR_30;
  int VAR_31;

  VAR_29 = FUNC_2 (VAR_21);
  FUNC_30 ();



  VAR_31 = VAR_4;
  if (FUNC_27 (VAR_19))
    {
      switch (VAR_19->inner->type)
 {
 case 129:
   VAR_31 = VAR_2
       + VAR_19->inner->sched_kind;
   break;
 case 128:
   VAR_31 = VAR_3;
   break;
 default:
   FUNC_22 ();
 }
    }



  VAR_26 = VAR_12;
  VAR_25 = FUNC_15 (VAR_17, 0);

  VAR_27 = FUNC_20 (VAR_29, VAR_13);
  if (VAR_27)
    VAR_26 = FUNC_0 (VAR_27);

  VAR_27 = FUNC_20 (VAR_29, VAR_14);
  if (VAR_27)
    VAR_25 = FUNC_1 (VAR_27);


  VAR_25 = FUNC_21 (VAR_17, VAR_25);



  if (VAR_26)
    {
      block_stmt_iterator VAR_32;

      VAR_26 = FUNC_24 (VAR_26);

      if (FUNC_26 (VAR_25))
 VAR_25 = FUNC_10 (VAR_9, VAR_17, VAR_26,
        FUNC_15 (FUNC_5 (VAR_26), 0));
      else
 {
   basic_block VAR_33, VAR_34, VAR_35;
   edge VAR_36;
   tree VAR_37, VAR_38, VAR_39, VAR_40;

   VAR_40 = FUNC_19 (FUNC_5 (VAR_25), ((void*)0));
   VAR_36 = FUNC_32 (VAR_20, ((void*)0));
   VAR_33 = VAR_36->src;
   VAR_20 = VAR_36->dest;
   FUNC_31 (VAR_36);

   VAR_34 = FUNC_18 (VAR_33);
   VAR_35 = FUNC_18 (VAR_34);
   VAR_38 = FUNC_17 ();
   VAR_39 = FUNC_17 ();

   VAR_37 = FUNC_11 (VAR_5, VAR_18,
        VAR_26,
        FUNC_12 (&VAR_38),
        FUNC_12 (&VAR_39));

   VAR_32 = FUNC_8 (VAR_33);
   FUNC_6 (&VAR_32, VAR_37, VAR_0);

   VAR_32 = FUNC_8 (VAR_34);
   VAR_37 = FUNC_9 (VAR_10, VAR_18, VAR_38);
   FUNC_6 (&VAR_32, VAR_37, VAR_0);
   VAR_37 = FUNC_10 (VAR_11, VAR_18, VAR_40, VAR_25);
   FUNC_6 (&VAR_32, VAR_37, VAR_0);

   VAR_32 = FUNC_8 (VAR_35);
   VAR_37 = FUNC_9 (VAR_10, VAR_18, VAR_39);
   FUNC_6 (&VAR_32, VAR_37, VAR_0);
   VAR_37 = FUNC_10 (VAR_11, VAR_18, VAR_40,
               FUNC_15 (VAR_17, 1));
   FUNC_6 (&VAR_32, VAR_37, VAR_0);

   FUNC_28 (VAR_33, VAR_34, VAR_8);
   FUNC_28 (VAR_33, VAR_35, VAR_7);
   FUNC_28 (VAR_34, VAR_20, VAR_6);
   FUNC_28 (VAR_35, VAR_20, VAR_6);

   VAR_25 = VAR_40;
 }

      VAR_28 = VAR_12;
      VAR_25 = FUNC_23 (VAR_25, &VAR_28);
      VAR_32 = FUNC_8 (VAR_20);
      FUNC_6 (&VAR_32, VAR_28, VAR_0);
    }

  VAR_28 = VAR_12;
  VAR_24 = FUNC_33 (((void*)0), VAR_25, ((void*)0));
  VAR_23 = FUNC_3 (VAR_21);
  if (VAR_23 == ((void*)0))
    VAR_23 = VAR_16;
  else
    VAR_23 = FUNC_13 (VAR_23);
  VAR_24 = FUNC_33 (((void*)0), VAR_23, VAR_24);
  VAR_23 = FUNC_13 (FUNC_4 (VAR_21));
  VAR_24 = FUNC_33 (((void*)0), VAR_23, VAR_24);

  if (VAR_22)
    VAR_24 = FUNC_16 (VAR_24, VAR_22);

  VAR_23 = VAR_15[VAR_31];
  VAR_23 = FUNC_14 (VAR_23, VAR_24);
  FUNC_25 (VAR_23, &VAR_28);

  VAR_23 = FUNC_3 (VAR_21);
  if (VAR_23 == ((void*)0))
    VAR_23 = VAR_16;
  else
    VAR_23 = FUNC_13 (VAR_23);
  VAR_24 = FUNC_33 (((void*)0), VAR_23, ((void*)0));
  VAR_23 = FUNC_14 (FUNC_4 (VAR_21), VAR_24);
  FUNC_25 (VAR_23, &VAR_28);

  VAR_23 = VAR_15[VAR_1];
  VAR_23 = FUNC_14 (VAR_23, ((void*)0));
  FUNC_25 (VAR_23, &VAR_28);

  VAR_30 = FUNC_7 (VAR_20);
  FUNC_6 (&VAR_30, VAR_28, VAR_0);

  FUNC_29 (VAR_12);
}
