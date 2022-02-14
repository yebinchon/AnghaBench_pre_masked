
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* mfsplay_tree_node ;
typedef scalar_t__ mfsplay_tree_key ;
typedef int mfsplay_tree ;
struct TYPE_8__ {uintptr_t low; uintptr_t high; } ;
typedef TYPE_2__ __mf_object_t ;
struct TYPE_7__ {scalar_t__ value; } ;


 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int ,scalar_t__) ;
 TYPE_1__* FUNC_2 (int ,scalar_t__) ;
 TYPE_1__* FUNC_3 (int ,scalar_t__) ;

unsigned
FUNC_4 (uintptr_t VAR_0, uintptr_t VAR_1,
                    __mf_object_t **VAR_2, unsigned VAR_3, int VAR_4)
{
  unsigned VAR_5 = 0;
  mfsplay_tree VAR_6 = FUNC_0 (VAR_4);
  mfsplay_tree_key VAR_7 = (mfsplay_tree_key) VAR_0;
  int VAR_8;

  mfsplay_tree_node VAR_9 = FUNC_1 (VAR_6, VAR_7);

  if (VAR_9 != ((void*)0))
    {
      if (VAR_5 < VAR_3)
        VAR_2[VAR_5] = (__mf_object_t *) VAR_9->value;
      VAR_5 ++;
    }


  for (VAR_8 = 0; VAR_8 < 2; VAR_8 ++)
    {

      VAR_7 = (mfsplay_tree_key) VAR_0;

      while (1)
        {
          __mf_object_t *VAR_10;

          VAR_9 = (VAR_8 == 0 ? FUNC_3 (VAR_6, VAR_7) : FUNC_2 (VAR_6, VAR_7));
          if (VAR_9 == ((void*)0)) break;
          VAR_10 = (__mf_object_t *) VAR_9->value;

          if (! (VAR_10->low <= VAR_1 && VAR_10->high >= VAR_0))
            break;

          if (VAR_5 < VAR_3)
            VAR_2[VAR_5] = (__mf_object_t *) VAR_9->value;
          VAR_5 ++;

          VAR_7 = (mfsplay_tree_key) VAR_10->low;
        }
    }

  return VAR_5;
}
