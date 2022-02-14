
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct varobj {int dummy; } ;
struct cpstack {int dummy; } ;


 char* FUNC_0 (struct cpstack**) ;
 int FUNC_1 (struct cpstack**,int *) ;
 int FUNC_2 (struct cpstack**,struct varobj*,int) ;
 int FUNC_3 (char*,int) ;
 char** FUNC_4 (int) ;

int
FUNC_5 (struct varobj *VAR_0, char ***VAR_1, int VAR_2)
{
  int VAR_3;
  int VAR_4;
  struct cpstack *VAR_5 = ((void*)0);
  char **VAR_6;


  FUNC_1 (&VAR_5, ((void*)0));

  if (VAR_2)

    VAR_3 = FUNC_2 (&VAR_5, VAR_0, 1 );
  else

    VAR_3 = FUNC_2 (&VAR_5, VAR_0, 0 );


  if (VAR_1 != ((void*)0))
    {
      *VAR_1 = FUNC_4 ((VAR_3 + 1) * sizeof (char *));

      VAR_6 = *VAR_1;
      VAR_4 = VAR_3;
      *VAR_6 = FUNC_0 (&VAR_5);
      while ((*VAR_6 != ((void*)0)) && (VAR_4 > 0))
 {
   VAR_4--;
   VAR_6++;
   *VAR_6 = FUNC_0 (&VAR_5);
 }

      if (VAR_4 || (*VAR_6 != ((void*)0)))
 FUNC_3 ("varobj_delete: assertion failed - mycount(=%d) <> 0",
   VAR_4);
    }

  return VAR_3;
}
