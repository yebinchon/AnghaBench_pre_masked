
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s390_address {int disp; int indx; scalar_t__ literal_pool; } ;
typedef int rtx ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_6 (int ,struct s390_address*) ;
 int FUNC_7 (int ,int *,int *) ;
 int FUNC_8 (int ) ;

int
FUNC_9 (const char *VAR_4, rtx VAR_5)
{
  struct s390_address VAR_6;
  char VAR_7 = VAR_4[0];


  if (VAR_7 == 'A')
    {

      if (!FUNC_1 (VAR_5) || FUNC_2 (VAR_5))
 return 0;

      if ((VAR_2 || VAR_3)
   ? !FUNC_4 (VAR_5) : !FUNC_5 (VAR_5))
 return 0;

      VAR_7 = VAR_4[1];
    }


  else if (VAR_7 == 'B')
    {
      if (FUNC_0 (VAR_5) != VAR_0)
 return 0;
      if (!FUNC_6 (FUNC_3 (VAR_5, 0), &VAR_6))
 return 0;
      if (VAR_6.literal_pool)
 return 0;

      VAR_7 = VAR_4[1];
    }

  switch (VAR_7)
    {
    case 'Q':
      if (FUNC_0 (VAR_5) != VAR_0)
 return 0;
      if (!FUNC_6 (FUNC_3 (VAR_5, 0), &VAR_6))
 return 0;
      if (VAR_6.indx)
 return 0;

      if (VAR_1)
 {
   if (!FUNC_8 (VAR_6.disp))
     return 0;
 }
      break;

    case 'R':
      if (FUNC_0 (VAR_5) != VAR_0)
 return 0;

      if (VAR_1)
 {
   if (!FUNC_6 (FUNC_3 (VAR_5, 0), &VAR_6))
     return 0;
   if (!FUNC_8 (VAR_6.disp))
     return 0;
 }
      break;

    case 'S':
      if (!VAR_1)
 return 0;
      if (FUNC_0 (VAR_5) != VAR_0)
 return 0;
      if (!FUNC_6 (FUNC_3 (VAR_5, 0), &VAR_6))
 return 0;
      if (VAR_6.indx)
 return 0;
      if (FUNC_8 (VAR_6.disp))
 return 0;
      break;

    case 'T':
      if (!VAR_1)
 return 0;
      if (FUNC_0 (VAR_5) != VAR_0)
 return 0;


      if (FUNC_6 (FUNC_3 (VAR_5, 0), &VAR_6)
   && FUNC_8 (VAR_6.disp))
 return 0;
      break;

    case 'U':
      if (VAR_1)
 {
   if (!FUNC_6 (VAR_5, &VAR_6))
     return 0;
   if (!FUNC_8 (VAR_6.disp))
     return 0;
 }
      break;

    case 'W':
      if (!VAR_1)
 return 0;


      if (FUNC_6 (VAR_5, &VAR_6)
   && FUNC_8 (VAR_6.disp))
 return 0;
      break;

    case 'Y':


      if (!FUNC_7 (VAR_5, ((void*)0), ((void*)0)))
 return 0;
      break;

    default:
      return 0;
    }

  return 1;
}
