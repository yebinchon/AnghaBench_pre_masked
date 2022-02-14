
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int * tree ;
struct pointer_set_t {int dummy; } ;
struct cxx_int_tree_map {int * to; int uid; } ;
struct TYPE_2__ {scalar_t__ extern_decl_map; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_6 (int *) ;
 int * VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_7 (int *) ;


 int * FUNC_8 (int *) ;





 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_9 (int *) ;
 int * FUNC_10 (int *,int ) ;
 int FUNC_11 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int * FUNC_12 (int ,int ,int ,int ) ;
 int * FUNC_13 (int ,int *) ;
 int * FUNC_14 (int *) ;
 TYPE_1__* VAR_10 ;
 int VAR_11 ;
 int FUNC_15 (int) ;
 scalar_t__ FUNC_16 (scalar_t__,struct cxx_int_tree_map*,int ) ;
 scalar_t__ FUNC_17 (int *) ;
 scalar_t__ FUNC_18 (struct pointer_set_t*,int *) ;
 int FUNC_19 (struct pointer_set_t*,int *) ;
 int VAR_12 ;

__attribute__((used)) static tree
FUNC_20 (tree *VAR_13, int *VAR_14, void *VAR_15)
{
  tree VAR_16 = *VAR_13;
  struct pointer_set_t *VAR_17 = (struct pointer_set_t*) VAR_15;

  if (FUNC_17 (VAR_16)

      && !(FUNC_4 (VAR_11)
    && FUNC_9 (VAR_16) == VAR_5))
    {
      *VAR_13 = FUNC_14 (VAR_16);
      *VAR_14 = 0;
      return ((void*)0);
    }



  if (VAR_10->extern_decl_map
      && (FUNC_9 (VAR_16) == VAR_2 || FUNC_9 (VAR_16) == VAR_9)
      && FUNC_3 (VAR_16))
    {
      struct cxx_int_tree_map *VAR_18, VAR_19;
      VAR_19.uid = FUNC_5 (VAR_16);
      VAR_18 = (struct cxx_int_tree_map *)
   FUNC_16 (VAR_10->extern_decl_map,
          &VAR_19, VAR_19.uid);
      if (VAR_18)
 {
   *VAR_13 = VAR_18->to;
   *VAR_14 = 0;
   return ((void*)0);
 }
    }


  if (FUNC_18 (VAR_17, VAR_16))
    {
      *VAR_14 = 0;
      return VAR_3;
    }

  if (FUNC_9 (VAR_16) == VAR_0
      && FUNC_17 (FUNC_10 (VAR_16, 0)))
    {
      *VAR_13 = FUNC_13 (FUNC_11 (VAR_16), FUNC_10 (VAR_16, 0));
      *VAR_14 = 0;
    }
  else if (FUNC_9 (VAR_16) == VAR_6
    && FUNC_10 (VAR_16, 0)
    && FUNC_17 (FUNC_10 (VAR_16, 0)))

    *VAR_14 = 0;
  else if (FUNC_9 (VAR_16) == VAR_4)
    switch (FUNC_7 (VAR_16))
      {
      case 130:
      case 128:
      case 132:
      case 131:
      case 134:
      case 133:

 if (FUNC_17 (FUNC_8 (VAR_16)))
   *VAR_14 = 0;
 break;
      case 129:
 FUNC_15 (!FUNC_17 (FUNC_8 (VAR_16)));
 break;
      default:
 break;
      }
  else if (FUNC_6 (VAR_16))
    *VAR_14 = 0;




  else if (FUNC_9 (VAR_16) == VAR_1)
    *VAR_13 = FUNC_12 (FUNC_1 (VAR_16) ? VAR_7
          : VAR_8,
        VAR_12,
        FUNC_0 (VAR_16),
        FUNC_2 (VAR_16));

  FUNC_19 (VAR_17, *VAR_13);

  return ((void*)0);
}
