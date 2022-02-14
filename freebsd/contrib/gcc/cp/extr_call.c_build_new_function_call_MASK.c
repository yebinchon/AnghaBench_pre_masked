
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* tree ;
struct z_candidate {int fn; int next; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (char*) ;
 char* FUNC_3 (char*,int ) ;
 char* FUNC_4 (int ,char*) ;
 char* FUNC_5 (struct z_candidate*,int ) ;
 int VAR_2 ;
 void* FUNC_6 (int ) ;
 int FUNC_7 (char*,int ,char*) ;
 char* VAR_3 ;
 int FUNC_8 (int *,void*) ;
 struct z_candidate* FUNC_9 (char*,char*,struct z_candidate**,int*) ;
 int FUNC_10 (struct z_candidate*) ;
 char* FUNC_11 (char*) ;
 char* FUNC_12 (char*) ;

tree
FUNC_13 (tree VAR_4, tree VAR_5, bool VAR_6)
{
  struct z_candidate *VAR_7, *VAR_8;
  bool VAR_9;
  void *VAR_10;
  tree VAR_11;

  VAR_5 = FUNC_12 (VAR_5);
  if (VAR_5 == VAR_3)
    return VAR_3;




  if (!VAR_6)
    {
      tree VAR_12 = VAR_4;

      VAR_4 = FUNC_11 (VAR_4);
      if (!VAR_4)
 {
   FUNC_7 ("no matching function for call to %<%D(%A)%>",
   FUNC_0 (FUNC_1 (VAR_12)), VAR_5);
   return VAR_3;
 }
    }


  VAR_10 = FUNC_6 (0);

  VAR_8 = FUNC_9 (VAR_4, VAR_5, &VAR_7, &VAR_9);

  if (!VAR_8)
    {
      if (!VAR_9 && VAR_7 && ! VAR_7->next)
 return FUNC_4 (VAR_7->fn, VAR_5);
      if (FUNC_2 (VAR_4) == VAR_1)
 VAR_4 = FUNC_3 (VAR_4, 0);
      if (!VAR_9)
 FUNC_7 ("no matching function for call to %<%D(%A)%>",
        FUNC_0 (FUNC_1 (VAR_4)), VAR_5);
      else
 FUNC_7 ("call of overloaded %<%D(%A)%> is ambiguous",
        FUNC_0 (FUNC_1 (VAR_4)), VAR_5);
      if (VAR_7)
 FUNC_10 (VAR_7);
      VAR_11 = VAR_3;
    }
  else
    VAR_11 = FUNC_5 (VAR_8, VAR_0);


  FUNC_8 (&VAR_2, VAR_10);

  return VAR_11;
}
