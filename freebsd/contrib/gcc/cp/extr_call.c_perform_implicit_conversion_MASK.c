
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* tree ;
typedef int conversion ;


 int VAR_0 ;
 char* FUNC_0 (char*) ;
 char* FUNC_1 (char*,char*) ;
 int VAR_1 ;
 void* FUNC_2 (int ) ;
 char* FUNC_3 (int *,char*) ;
 int FUNC_4 (char*,char*,char*) ;
 char* VAR_2 ;
 scalar_t__ FUNC_5 (char*) ;
 int * FUNC_6 (char*,char*,char*,int,int ) ;
 int FUNC_7 (int *,void*) ;
 scalar_t__ VAR_3 ;

tree
FUNC_8 (tree VAR_4, tree VAR_5)
{
  conversion *VAR_6;
  void *VAR_7;

  if (FUNC_5 (VAR_5))
    return VAR_2;


  VAR_7 = FUNC_2 (0);

  VAR_6 = FUNC_6 (VAR_4, FUNC_0 (VAR_5), VAR_5,
                      0,
         VAR_0);
  if (!VAR_6)
    {
      FUNC_4 ("could not convert %qE to %qT", VAR_5, VAR_4);
      VAR_5 = VAR_2;
    }
  else if (VAR_3)
    {



      if (FUNC_0 (VAR_5) != VAR_4)
 VAR_5 = FUNC_1 (VAR_4, VAR_5);
    }
  else
    VAR_5 = FUNC_3 (VAR_6, VAR_5);


  FUNC_7 (&VAR_1, VAR_7);

  return VAR_5;
}
