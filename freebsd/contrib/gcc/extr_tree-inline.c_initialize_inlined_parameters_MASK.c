
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct TYPE_8__ {int block; } ;
typedef TYPE_2__ copy_body_data ;
typedef int basic_block ;
struct TYPE_10__ {scalar_t__ static_chain_decl; } ;
struct TYPE_7__ {scalar_t__ (* convert_parm_for_inlining ) (scalar_t__,scalar_t__,scalar_t__,int) ;} ;
struct TYPE_9__ {TYPE_1__ tree_inlining; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 TYPE_6__* FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 TYPE_4__ VAR_2 ;
 int FUNC_6 (TYPE_2__*,scalar_t__,scalar_t__,scalar_t__,int ,scalar_t__*) ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__,scalar_t__,int) ;

__attribute__((used)) static void
FUNC_8 (copy_body_data *VAR_3, tree VAR_4, tree VAR_5,
          tree VAR_6, basic_block VAR_7)
{
  tree VAR_8;
  tree VAR_9;
  tree VAR_10;
  tree VAR_11 = VAR_0;
  int VAR_12 = 0;


  VAR_8 = FUNC_0 (VAR_6);



  for (VAR_10 = VAR_8, VAR_9 = VAR_4; VAR_10;
       VAR_9 = VAR_9 ? FUNC_2 (VAR_9) : VAR_9, VAR_10 = FUNC_2 (VAR_10))
    {
      tree VAR_13;

      ++VAR_12;


      VAR_13 = VAR_2.tree_inlining.convert_parm_for_inlining
       (VAR_10, VAR_9 ? FUNC_3 (VAR_9) : VAR_0, VAR_6, VAR_12);

      FUNC_6 (VAR_3, VAR_10, VAR_13, VAR_6, VAR_7, &VAR_11);
    }


  VAR_10 = FUNC_1 (VAR_6)->static_chain_decl;
  FUNC_5 (VAR_6 != VAR_1);
  if (VAR_10)
    {

      FUNC_5 (VAR_5);

      FUNC_6 (VAR_3, VAR_10, VAR_5, VAR_6, VAR_7, &VAR_11);
    }

  FUNC_4 (VAR_3->block, VAR_11);
}
