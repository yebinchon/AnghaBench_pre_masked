
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int * tree ;
struct TYPE_4__ {void* sender_decl; void* receiver_decl; int * record_type; } ;
typedef TYPE_1__ omp_context ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int **) ;
 int VAR_6 ;
 int * FUNC_3 (int ,int ,int *) ;
 int * FUNC_4 (int ,int ,void*,int *) ;
 int * FUNC_5 (int ,int ,int *,int *,int *) ;
 int * FUNC_6 (int **) ;
 int * FUNC_7 (void*) ;
 int * FUNC_8 (int *,int *) ;
 int * FUNC_9 (int *,int ) ;
 int * FUNC_10 (int *) ;
 int ** VAR_7 ;
 int * FUNC_11 () ;
 void* FUNC_12 (int *,char*) ;
 int * FUNC_13 (int *,int *) ;
 int FUNC_14 (int *,int **) ;
 int FUNC_15 (int ,int **,int **,TYPE_1__*) ;
 int * FUNC_16 (int *,int *,int *) ;
 int VAR_8 ;

__attribute__((used)) static void
FUNC_17 (tree VAR_9, tree *VAR_10, omp_context *VAR_11)
{
  tree VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;

  VAR_11->sender_decl = FUNC_12 (VAR_11->record_type, ".omp_copy_o");

  VAR_12 = FUNC_10 (VAR_11->record_type);
  VAR_11->receiver_decl = FUNC_12 (VAR_12, ".omp_copy_i");

  VAR_15 = FUNC_11 ();
  VAR_16 = FUNC_11 ();
  VAR_17 = FUNC_11 ();

  VAR_13 = VAR_7[VAR_1];
  VAR_13 = FUNC_8 (VAR_13, ((void*)0));
  VAR_13 = FUNC_13 (VAR_12, VAR_13);
  VAR_13 = FUNC_4 (VAR_5, VAR_8, VAR_11->receiver_decl, VAR_13);
  FUNC_14 (VAR_13, VAR_10);

  VAR_13 = FUNC_4 (VAR_3, VAR_6, VAR_11->receiver_decl,
       FUNC_9 (VAR_12, 0));
  VAR_13 = FUNC_5 (VAR_2, VAR_8, VAR_13,
       FUNC_6 (&VAR_15), FUNC_6 (&VAR_16));
  FUNC_14 (VAR_13, VAR_10);

  VAR_13 = FUNC_3 (VAR_4, VAR_8, VAR_15);
  FUNC_14 (VAR_13, VAR_10);

  FUNC_2 (FUNC_0 (VAR_9), VAR_10);

  VAR_18 = ((void*)0);
  FUNC_15 (FUNC_1 (VAR_9), VAR_10,
         &VAR_18, VAR_11);

  VAR_13 = FUNC_7 (VAR_11->sender_decl);
  VAR_14 = FUNC_16 (((void*)0), VAR_13, ((void*)0));
  VAR_13 = VAR_7[VAR_0];
  VAR_13 = FUNC_8 (VAR_13, VAR_14);
  FUNC_14 (VAR_13, VAR_10);

  VAR_13 = FUNC_6 (&VAR_17);
  FUNC_14 (VAR_13, VAR_10);

  VAR_13 = FUNC_3 (VAR_4, VAR_8, VAR_16);
  FUNC_14 (VAR_13, VAR_10);

  FUNC_2 (VAR_18, VAR_10);

  VAR_13 = FUNC_3 (VAR_4, VAR_8, VAR_17);
  FUNC_14 (VAR_13, VAR_10);
}
