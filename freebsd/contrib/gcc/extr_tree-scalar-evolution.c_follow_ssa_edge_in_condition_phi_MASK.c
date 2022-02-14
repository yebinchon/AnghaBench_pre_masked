
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef scalar_t__ t_bool ;
struct loop {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int,struct loop*,int ,int ,int *,int ,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static t_bool
FUNC_3 (struct loop *VAR_4,
      tree VAR_5,
      tree VAR_6,
      tree *VAR_7, int VAR_8)
{
  int VAR_9;
  tree VAR_10 = *VAR_7;
  tree VAR_11;
  t_bool VAR_12 = FUNC_2 (0, VAR_4, VAR_5,
       VAR_6,
       &VAR_11,
       VAR_10, VAR_8);
  if (VAR_12 == VAR_2 || VAR_12 == VAR_1)
    return VAR_12;

  *VAR_7 = VAR_11;

  for (VAR_9 = 1; VAR_9 < FUNC_0 (VAR_5); VAR_9++)
    {


      if (*VAR_7 == VAR_0)
 return VAR_3;

      VAR_12 = FUNC_2 (VAR_9, VAR_4, VAR_5,
           VAR_6,
           &VAR_11,
           VAR_10, VAR_8);
      if (VAR_12 == VAR_2 || VAR_12 == VAR_1)
 return VAR_12;

      *VAR_7 = FUNC_1 (*VAR_7,
     VAR_11);
    }

  return VAR_3;
}
