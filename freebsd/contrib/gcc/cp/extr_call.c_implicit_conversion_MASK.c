
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
struct z_candidate {int * second_conv; } ;
typedef int conversion ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 struct z_candidate* FUNC_2 (scalar_t__,scalar_t__,int ) ;
 scalar_t__ VAR_4 ;
 int * FUNC_3 (scalar_t__,scalar_t__,scalar_t__,int,int) ;
 int * FUNC_4 (scalar_t__,scalar_t__,scalar_t__,int,int) ;

__attribute__((used)) static conversion *
FUNC_5 (tree VAR_5, tree VAR_6, tree VAR_7, bool VAR_8,
       int VAR_9)
{
  conversion *VAR_10;

  if (VAR_6 == VAR_4 || VAR_5 == VAR_4
      || VAR_7 == VAR_4)
    return ((void*)0);

  if (FUNC_1 (VAR_5) == VAR_3)
    VAR_10 = FUNC_3 (VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
  else
    VAR_10 = FUNC_4 (VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);

  if (VAR_10)
    return VAR_10;

  if (VAR_7 != VAR_2
      && (FUNC_0 (VAR_6)
   || FUNC_0 (VAR_5))
      && (VAR_9 & VAR_0) == 0)
    {
      struct z_candidate *VAR_11;

      VAR_11 = FUNC_2
 (VAR_5, VAR_7, VAR_1);
      if (VAR_11)
 VAR_10 = VAR_11->second_conv;




      return VAR_10;
    }

  return ((void*)0);
}
