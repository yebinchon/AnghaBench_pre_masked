
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vlist {struct varobj* var; struct vlist* next; } ;
struct varobj {char* obj_name; TYPE_1__* root; } ;
struct TYPE_2__ {struct TYPE_2__* next; struct varobj* rootvar; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 scalar_t__ FUNC_1 (char*,char*) ;
 struct vlist** VAR_3 ;
 struct vlist* FUNC_2 (int) ;

__attribute__((used)) static int
FUNC_3 (struct varobj *VAR_4)
{
  struct vlist *VAR_5;
  struct vlist *VAR_6;
  const char *VAR_7;
  unsigned int VAR_8 = 0;
  unsigned int VAR_9 = 1;

  for (VAR_7 = VAR_4->obj_name; *VAR_7; VAR_7++)
    {
      VAR_8 = (VAR_8 + (VAR_9++ * (unsigned int) *VAR_7)) % VAR_0;
    }

  VAR_5 = *(VAR_3 + VAR_8);
  while ((VAR_5 != ((void*)0)) && (FUNC_1 (VAR_5->var->obj_name, VAR_4->obj_name) != 0))
    VAR_5 = VAR_5->next;

  if (VAR_5 != ((void*)0))
    FUNC_0 ("Duplicate variable object name");


  VAR_6 = FUNC_2 (sizeof (struct vlist));
  VAR_6->next = *(VAR_3 + VAR_8);
  VAR_6->var = VAR_4;
  *(VAR_3 + VAR_8) = VAR_6;


  if (VAR_4->root->rootvar == VAR_4)
    {

      if (VAR_2 == ((void*)0))
 VAR_4->root->next = ((void*)0);
      else
 VAR_4->root->next = VAR_2;
      VAR_2 = VAR_4->root;
      VAR_1++;
    }

  return 1;
}
