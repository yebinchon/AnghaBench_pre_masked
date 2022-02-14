
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
struct iv {scalar_t__ step; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__,int) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static tree
FUNC_8 (struct iv *VAR_1)
{
  tree VAR_2 = VAR_1->step, VAR_3, VAR_4;
  tree VAR_5;

  FUNC_4 (VAR_2 && FUNC_0 (VAR_2) == VAR_0);




  VAR_5 = FUNC_5 (VAR_2);
  VAR_4 = FUNC_7 (FUNC_1 (VAR_2));

  VAR_3 = FUNC_3 (VAR_4,
    (FUNC_2 (VAR_4)
     - FUNC_6 (VAR_5, 1)));

  return VAR_3;
}
