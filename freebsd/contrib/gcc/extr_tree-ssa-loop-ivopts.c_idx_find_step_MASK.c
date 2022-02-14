
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* tree ;
struct loop {int dummy; } ;
struct iv {void* step; void* base; } ;
struct ifs_ivopts_data {void** step_p; int stmt; TYPE_1__* ivopts_data; } ;
struct TYPE_2__ {struct loop* current_loop; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (void*) ;
 void* FUNC_1 (void*) ;
 void* FUNC_2 (void*) ;
 void* FUNC_3 (int ,int) ;
 void* FUNC_4 (void*) ;
 int FUNC_5 (struct loop*,int ,void**,void**,int ,int) ;
 int FUNC_6 (struct loop*,void*) ;
 void* FUNC_7 (int ,int ,void*,void*) ;
 struct iv* FUNC_8 (TYPE_1__*,void*) ;
 int VAR_8 ;

__attribute__((used)) static bool
FUNC_9 (tree VAR_9, tree *VAR_10, void *VAR_11)
{
  struct ifs_ivopts_data *VAR_12 = VAR_11;
  struct iv *VAR_13;
  tree VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
  struct loop *VAR_19 = VAR_12->ivopts_data->current_loop;

  if (FUNC_0 (VAR_9) == VAR_4
      || FUNC_0 (VAR_9) == VAR_0)
    return 0;



  if (FUNC_0 (VAR_9) == VAR_2)
    {
      VAR_18 = FUNC_4 (VAR_9);
      return FUNC_6 (VAR_19, VAR_18);
    }





  if (FUNC_0 (VAR_9) == VAR_1)
    {
      VAR_14 = FUNC_1 (VAR_9);
      VAR_17 = FUNC_2 (VAR_9);

      if (!FUNC_6 (VAR_19, VAR_14)
   || !FUNC_6 (VAR_19, VAR_17))
 return 0;
    }

  if (FUNC_0 (*VAR_10) != VAR_7)
    return 1;

  VAR_13 = FUNC_8 (VAR_12->ivopts_data, *VAR_10);
  if (!VAR_13)
    return 0;




  *VAR_10 = VAR_13->base;

  if (!VAR_13->step)
    return 1;

  if (FUNC_0 (VAR_9) == VAR_1)
    {
      VAR_14 = FUNC_1 (VAR_9);


      if (FUNC_0 (VAR_14) != VAR_3)
 return 0;
    }
  else

    VAR_14 = FUNC_3 (VAR_8, 1);

  VAR_15 = VAR_13->base;
  VAR_16 = VAR_13->step;
  if (!FUNC_5 (VAR_12->ivopts_data->current_loop,
       VAR_8, &VAR_15, &VAR_16, VAR_12->stmt,
       0))
    {

      return 0;
    }

  VAR_14 = FUNC_7 (VAR_5, VAR_8, VAR_14, VAR_16);

  if (!*VAR_12->step_p)
    *VAR_12->step_p = VAR_14;
  else
    *VAR_12->step_p = FUNC_7 (VAR_6, VAR_8, *VAR_12->step_p, VAR_14);

  return 1;
}
