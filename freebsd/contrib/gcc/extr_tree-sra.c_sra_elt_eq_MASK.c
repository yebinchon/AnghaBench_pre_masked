
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
struct sra_elt {scalar_t__ parent; scalar_t__ element; } ;


 int FUNC_0 (scalar_t__) ;





 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,int) ;

 int FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 () ;
 int FUNC_5 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int
FUNC_6 (const void *VAR_0, const void *VAR_1)
{
  const struct sra_elt *VAR_2 = VAR_0;
  const struct sra_elt *VAR_3 = VAR_1;
  tree VAR_4, VAR_5;

  if (VAR_2->parent != VAR_3->parent)
    return 0;

  VAR_4 = VAR_2->element;
  VAR_5 = VAR_3->element;

  if (VAR_4 == VAR_5)
    return 1;
  if (FUNC_1 (VAR_4) != FUNC_1 (VAR_5))
    return 0;

  switch (FUNC_1 (VAR_4))
    {
    case 128:
    case 131:
    case 129:

      return 0;

    case 132:

      return FUNC_5 (VAR_4, VAR_5);

    case 130:
      return
 FUNC_5 (FUNC_2 (VAR_4, 0), FUNC_2 (VAR_5, 0))
 && FUNC_5 (FUNC_2 (VAR_4, 1), FUNC_2 (VAR_5, 1));

    case 133:


      if (FUNC_0 (VAR_4) == FUNC_0 (VAR_5))
 return 0;
      return FUNC_3 (VAR_4, VAR_5);

    default:
      FUNC_4 ();
    }
}
