
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * tree ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int *,int *,char*,char*,int ) ;
 int FUNC_3 (size_t,int *) ;
 int * FUNC_4 (size_t) ;

__attribute__((used)) static tree
FUNC_5 (tree VAR_2, bool VAR_3)
{
  size_t VAR_4 = FUNC_0 (VAR_2) * 2 + VAR_3;
  tree VAR_5 = FUNC_4 (VAR_4);

  if (VAR_5 == ((void*)0))
    {
      VAR_5 = FUNC_2 (FUNC_1 (FUNC_1 (VAR_2)), VAR_2,
          VAR_3 ? "CI" : "CR",
          VAR_3 ? "$imag" : "$real",
          VAR_3 ? VAR_0 : VAR_1);
      FUNC_3 (VAR_4, VAR_5);
    }

  return VAR_5;
}
