
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct varobj_root {struct varobj_root* next; struct varobj* rootvar; } ;
struct varobj {int dummy; } ;


 int VAR_0 ;
 struct varobj_root* VAR_1 ;
 int FUNC_0 (char*,int,int) ;
 struct varobj** FUNC_1 (int) ;

int
FUNC_2 (struct varobj ***VAR_2)
{
  struct varobj **VAR_3;
  struct varobj_root *VAR_4;
  int VAR_5 = VAR_0;


  *VAR_2 = FUNC_1 ((VAR_0 + 1) * sizeof (struct varobj *));

  VAR_3 = *VAR_2;
  VAR_4 = VAR_1;
  while ((VAR_4 != ((void*)0)) && (VAR_5 > 0))
    {
      *VAR_3 = VAR_4->rootvar;
      VAR_5--;
      VAR_3++;
      VAR_4 = VAR_4->next;
    }

  *VAR_3 = ((void*)0);

  if (VAR_5 || (VAR_4 != ((void*)0)))
    FUNC_0
      ("varobj_list: assertion failed - wrong tally of root vars (%d:%d)",
       VAR_0, VAR_5);

  return VAR_0;
}
