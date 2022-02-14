
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,scalar_t__,int ,scalar_t__,scalar_t__) ;
 int FUNC_2 (int ,unsigned int) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int) ;

__attribute__((used)) static inline tree
FUNC_4 (unsigned VAR_3,
   tree VAR_4,
   tree VAR_5)
{
  if (VAR_4 == VAR_2
      || VAR_5 == VAR_2)
    return VAR_2;

  FUNC_3 (FUNC_0 (VAR_4) == FUNC_0 (VAR_5));

  return FUNC_1 (VAR_1, FUNC_0 (VAR_4),
   FUNC_2 (VAR_0, VAR_3), VAR_4, VAR_5);
}
