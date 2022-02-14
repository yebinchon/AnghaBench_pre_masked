
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct varobj {int num_children; } ;


 struct varobj* FUNC_0 (struct varobj*,char*) ;
 struct varobj* FUNC_1 (struct varobj*,int,char*) ;
 char* FUNC_2 (struct varobj*,int) ;
 int FUNC_3 (struct varobj*) ;
 struct varobj** FUNC_4 (int) ;

int
FUNC_5 (struct varobj *VAR_0, struct varobj ***VAR_1)
{
  struct varobj *VAR_2;
  char *VAR_3;
  int VAR_4;


  if (VAR_1 == ((void*)0))
    return -1;

  *VAR_1 = ((void*)0);

  if (VAR_0->num_children == -1)
    VAR_0->num_children = FUNC_3 (VAR_0);


  *VAR_1 = FUNC_4 ((VAR_0->num_children + 1) * sizeof (struct varobj *));

  for (VAR_4 = 0; VAR_4 < VAR_0->num_children; VAR_4++)
    {

      *((*VAR_1) + VAR_4) = ((void*)0);


      VAR_3 = FUNC_2 (VAR_0, VAR_4);
      VAR_2 = FUNC_0 (VAR_0, VAR_3);
      if (VAR_2 == ((void*)0))
 VAR_2 = FUNC_1 (VAR_0, VAR_4, VAR_3);

      *((*VAR_1) + VAR_4) = VAR_2;
    }


  *((*VAR_1) + VAR_4) = ((void*)0);

  return VAR_0->num_children;
}
