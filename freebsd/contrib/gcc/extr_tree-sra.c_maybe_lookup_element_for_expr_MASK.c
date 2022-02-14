
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct sra_elt {int dummy; } ;






 int VAR_0 ;

 int VAR_1 ;

 int VAR_2 ;

 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

 int FUNC_6 (int ,int ,int ,int ) ;
 int FUNC_7 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (int ) ;
 struct sra_elt* FUNC_9 (struct sra_elt*,int ,int ,int ) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static struct sra_elt *
FUNC_11 (tree VAR_6)
{
  struct sra_elt *VAR_7;
  tree VAR_8;

  switch (FUNC_0 (VAR_6))
    {
    case 128:
    case 131:
    case 129:
      if (FUNC_8 (VAR_6))
 return FUNC_9 (((void*)0), VAR_6, FUNC_2 (VAR_6), VAR_0);
      return ((void*)0);

    case 134:

      if (FUNC_7 (VAR_6))
        VAR_8 = FUNC_1 (VAR_6, 1);
      else
 return ((void*)0);
      break;

    case 135:

      if (FUNC_10 (VAR_6))
 {
   tree VAR_9 = FUNC_3 (FUNC_2 (VAR_6));
   VAR_8 = FUNC_6 (VAR_1, VAR_4,
     FUNC_5 (VAR_9), FUNC_4 (VAR_9));
 }
      else
 return ((void*)0);
      break;

    case 133:

      if (FUNC_0 (FUNC_2 (FUNC_1 (VAR_6, 0))) != VAR_2)
 return ((void*)0);
      VAR_8 = FUNC_1 (VAR_6, 1);
      break;

    case 130:
      VAR_8 = VAR_5;
      break;
    case 132:
      VAR_8 = VAR_3;
      break;

    default:
      return ((void*)0);
    }

  VAR_7 = FUNC_11 (FUNC_1 (VAR_6, 0));
  if (VAR_7)
    return FUNC_9 (VAR_7, VAR_8, FUNC_2 (VAR_6), VAR_0);
  return ((void*)0);
}
