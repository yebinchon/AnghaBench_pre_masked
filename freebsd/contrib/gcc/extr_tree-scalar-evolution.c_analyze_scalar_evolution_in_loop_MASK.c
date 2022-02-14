
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
struct loop {struct loop* outer; int num; } ;


 scalar_t__ FUNC_0 (struct loop*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__,int ,int*) ;
 scalar_t__ FUNC_2 (struct loop*,scalar_t__) ;

__attribute__((used)) static tree
FUNC_3 (struct loop *VAR_1, struct loop *VAR_2,
      tree VAR_3, bool *VAR_4)
{
  bool VAR_5 = 0;
  tree VAR_6 = VAR_3, VAR_7;

  if (VAR_4)
    *VAR_4 = 0;
  while (1)
    {
      VAR_7 = FUNC_0 (VAR_2, VAR_6);
      VAR_6 = FUNC_2 (VAR_2, VAR_7);

      if (VAR_4 && VAR_7 != VAR_6)
 *VAR_4 = 1;

      if (VAR_2 == VAR_1)
 return VAR_6;




      if (!FUNC_1 (VAR_6, VAR_2->num, &VAR_5)
   || !VAR_5)
 return VAR_0;

      VAR_2 = VAR_2->outer;
    }
}
