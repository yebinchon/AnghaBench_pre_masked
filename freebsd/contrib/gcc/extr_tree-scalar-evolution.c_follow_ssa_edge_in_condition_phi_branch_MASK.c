
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef int t_bool ;
struct loop {int dummy; } ;


 int FUNC_0 (int ,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int) ;
 int VAR_1 ;
 int FUNC_4 (struct loop*,int ,int ,int *,int) ;
 int VAR_2 ;

__attribute__((used)) static inline t_bool
FUNC_5 (int VAR_3,
      struct loop *VAR_4,
      tree VAR_5,
      tree VAR_6,
      tree *VAR_7,
      tree VAR_8, int VAR_9)
{
  tree VAR_10 = FUNC_0 (VAR_5, VAR_3);
  *VAR_7 = VAR_1;



  if (FUNC_3 (VAR_5, VAR_3))
    return VAR_2;

  if (FUNC_2 (VAR_10) == VAR_0)
    {
      *VAR_7 = VAR_8;
      return FUNC_4 (VAR_4, FUNC_1 (VAR_10), VAR_6,
         VAR_7, VAR_9);
    }
  return VAR_2;
}
