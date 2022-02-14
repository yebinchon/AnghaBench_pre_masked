
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * rtx ;
typedef int RTX_CODE ;



 int FUNC_0 (int *) ;


 int FUNC_1 (int *) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (int) ;




 int * FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int ) ;
 int * FUNC_6 (int *,int) ;
 int * FUNC_7 (int *,int,int) ;
 int FUNC_8 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static void
FUNC_10 (rtx VAR_6)
{
  int VAR_7, VAR_8;
  const char *VAR_9;
  RTX_CODE VAR_10;

  if (VAR_6 == ((void*)0))
    return;

  VAR_10 = FUNC_1 (VAR_6);
  switch (VAR_10)
    {
    case 128:
      if (! FUNC_0 (VAR_6))



 VAR_5 = VAR_4 = 1;
      return;

    case 130:
      VAR_5 = 1;
      return;

    case 132:
      VAR_5 = VAR_4 = 1;
      break;

    case 133:
      if (FUNC_5 (VAR_6, 0) == VAR_1)
 VAR_5 = VAR_4 = 1;
      else if (FUNC_9 (FUNC_5 (VAR_6, 0), VAR_2) == 0)
 VAR_3 = 1;
      return;

    case 131:
      VAR_5 = 1;
      VAR_0 = 1;
      return;

    case 129:
      VAR_0 = 1;
      return;

    case 134:
      return;

    default:
      break;
    }

  for (VAR_7 = 0, VAR_9 = FUNC_2 (VAR_10); VAR_7 < FUNC_3 (VAR_10); VAR_7++)
    switch (*VAR_9++)
      {
      case 'e':
      case 'u':
 FUNC_10 (FUNC_4 (VAR_6, VAR_7));
 break;

      case 'E':
 if (FUNC_6 (VAR_6, VAR_7) != ((void*)0))
   for (VAR_8 = 0; VAR_8 < FUNC_8 (VAR_6, VAR_7); VAR_8++)
     FUNC_10 (FUNC_7 (VAR_6, VAR_7, VAR_8));
 break;
      }
}
