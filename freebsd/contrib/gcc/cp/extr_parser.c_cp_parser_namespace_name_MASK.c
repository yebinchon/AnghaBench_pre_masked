
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef int cp_parser ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,scalar_t__,int ,int,int,int,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,scalar_t__) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static tree
FUNC_6 (cp_parser* VAR_3)
{
  tree VAR_4;
  tree VAR_5;


  VAR_4 = FUNC_2 (VAR_3);
  if (VAR_4 == VAR_1)
    return VAR_1;
  VAR_5 = FUNC_3 (VAR_3, VAR_4,
       VAR_2,
                       0,
                        1,
                            1,
                           ((void*)0));

  if (VAR_5 == VAR_1
      || FUNC_0 (VAR_5) != VAR_0)
    {
      if (!FUNC_4 (VAR_3))
 FUNC_5 ("%qD is not a namespace-name", VAR_4);
      FUNC_1 (VAR_3, "expected namespace-name");
      VAR_5 = VAR_1;
    }

  return VAR_5;
}
