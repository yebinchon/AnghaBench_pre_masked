
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct block_sema_info {scalar_t__ block_byref_decl_list; scalar_t__ block_ref_decl_list; TYPE_1__* prev_block_info; void* BlockHasCopyDispose; } ;
struct TYPE_2__ {void* BlockHasCopyDispose; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 void* VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (void*) ;
 scalar_t__ FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (scalar_t__,scalar_t__) ;
 int FUNC_10 (scalar_t__,scalar_t__,int ) ;
 int FUNC_11 (char*) ;
 int VAR_5 ;
 int FUNC_12 () ;
 int VAR_6 ;
 int FUNC_13 () ;
 int FUNC_14 (char*,char*,int) ;
 scalar_t__ FUNC_15 (int ,int ) ;

__attribute__((used)) static tree
FUNC_16 (struct block_sema_info * VAR_7)
{
  tree VAR_8, VAR_9, VAR_10;
  char VAR_11[32];
  static int VAR_12;
  tree VAR_13;



  for (VAR_10 = VAR_7->block_ref_decl_list; VAR_10;
 VAR_10 = FUNC_2 (VAR_10))
    if (FUNC_5 (FUNC_4 (VAR_10)))
    {
      VAR_7->BlockHasCopyDispose = VAR_3;
      break;
    }



  for (VAR_10 = VAR_7->block_byref_decl_list; VAR_10;
 VAR_10 = FUNC_2 (VAR_10))
    if (FUNC_0 (FUNC_4 (VAR_10)))
      {
 VAR_7->BlockHasCopyDispose = VAR_3;
 break;
      }

  FUNC_14(VAR_11, "__block_literal_%d", ++VAR_12);
  FUNC_13 ();
  VAR_13 = FUNC_15 (VAR_2, FUNC_11 (VAR_11));


  VAR_9 = FUNC_7 (VAR_0, FUNC_11 ("__isa"), VAR_6);
  VAR_8 = VAR_9;


  VAR_9 = FUNC_7 (VAR_0, FUNC_11 ("__flags"),
      VAR_5);
  FUNC_9 (VAR_8, VAR_9);


  VAR_9 = FUNC_7 (VAR_0, FUNC_11 ("__reserved"),
      VAR_5);
  FUNC_9 (VAR_8, VAR_9);


  VAR_9 = FUNC_7 (VAR_0, FUNC_11 ("__FuncPtr"), VAR_6);
  FUNC_9 (VAR_8, VAR_9);


  VAR_9 = FUNC_7 (VAR_0, FUNC_11 ("__descriptor"),
       FUNC_6 (VAR_7->BlockHasCopyDispose));
  FUNC_9 (VAR_8, VAR_9);

  if (VAR_7->BlockHasCopyDispose)
  {


    if (VAR_7->prev_block_info)
      VAR_7->prev_block_info->BlockHasCopyDispose = VAR_3;
  }


  for (VAR_10 = VAR_7->block_ref_decl_list; VAR_10; VAR_10 = FUNC_2 (VAR_10))
  {
    tree VAR_14 = FUNC_4 (VAR_10);



    VAR_9 = FUNC_7 (VAR_0, FUNC_1 (VAR_14),
        FUNC_8 (FUNC_3 (VAR_14),
                                VAR_4));
    FUNC_9 (VAR_8, VAR_9);
  }


  for (VAR_10 = VAR_7->block_byref_decl_list; VAR_10; VAR_10 = FUNC_2 (VAR_10))
  {
    tree VAR_15 = FUNC_4 (VAR_10);
    VAR_9 = FUNC_7 (VAR_0, FUNC_1 (VAR_15),
        FUNC_3 (VAR_15));
    FUNC_9 (VAR_8, VAR_9);
  }
  FUNC_12 ();
  FUNC_10 (VAR_13, VAR_8, VAR_1);
  return VAR_13;
}
