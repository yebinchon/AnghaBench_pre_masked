
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef int RTX_CODE ;






 int const FUNC_0 (scalar_t__) ;
 char* FUNC_1 (int const) ;
 int FUNC_2 (int const) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;

 scalar_t__ FUNC_5 (scalar_t__,int) ;
 int FUNC_6 (scalar_t__,int ) ;
 int * FUNC_7 (scalar_t__,int) ;
 scalar_t__ FUNC_8 (scalar_t__,int,int) ;
 int FUNC_9 (scalar_t__,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_10 (rtx VAR_7, int VAR_8, int VAR_9)
{
  int VAR_10, VAR_11;
  RTX_CODE VAR_12;
  const char *VAR_13;

  if (VAR_7 == 0)
    return;

  VAR_12 = FUNC_0 (VAR_7);
  switch (VAR_12)
    {
    case 144:
      VAR_0++;
      break;

    case 137:
      if (FUNC_6 (VAR_7, 0) > VAR_6)
 VAR_6 = FUNC_6 (VAR_7, 0);
      return;

    case 135:
    case 133:
      ++VAR_1;
    case 132:
    case 134:
    case 136:
      if (FUNC_6 (VAR_7, 0) > VAR_6)
 VAR_6 = FUNC_6 (VAR_7, 0);


      break;

    case 140:
      if (FUNC_0 (FUNC_5 (VAR_7, 0)) == 137
   || FUNC_0 (FUNC_5 (VAR_7, 0)) == 138)
 break;
      return;

    case 138:
      ++VAR_1;
      if (FUNC_6 (VAR_7, 0) > VAR_6)
 VAR_6 = FUNC_6 (VAR_7, 0);
      return;

    case 145:
      if (VAR_8)
 VAR_2 = 1;
      return;

    case 139:
      if (VAR_8)
 VAR_5 = 1;
      return;

    case 129:
      FUNC_10 (FUNC_3 (VAR_7), 0, VAR_8);
      FUNC_10 (FUNC_4 (VAR_7), VAR_8,
        FUNC_0 (FUNC_3 (VAR_7)) != 131);
      return;

    case 141:






      if (VAR_8 && VAR_9
   && FUNC_0 (FUNC_5 (VAR_7, 1)) == 137
   && FUNC_0 (FUNC_5 (VAR_7, 2)) == 137)
 VAR_3 = 1;
      break;

    case 143:
      if (VAR_8)
 VAR_4 = 1;
      break;

    case 130: case 142: case 128:
    case 131:
      return;

    default:
      break;
    }

  VAR_13 = FUNC_1 (FUNC_0 (VAR_7));

  for (VAR_10 = 0; VAR_10 < FUNC_2 (FUNC_0 (VAR_7)); VAR_10++)
    switch (*VAR_13++)
      {
      case 'e':
      case 'u':
 FUNC_10 (FUNC_5 (VAR_7, VAR_10), VAR_8, VAR_9);
 break;
      case 'E':
 if (FUNC_7 (VAR_7, VAR_10) != ((void*)0))
   for (VAR_11 = 0; VAR_11 < FUNC_9 (VAR_7, VAR_10); VAR_11++)
     FUNC_10 (FUNC_8 (VAR_7, VAR_10, VAR_11), VAR_8, VAR_9);
 break;
      }
}
