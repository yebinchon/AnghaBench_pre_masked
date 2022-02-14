
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;


 int FUNC_0 (int ) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (int) ;




 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int) ;
 int * FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int,int) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 () ;
 int FUNC_10 (int ) ;

__attribute__((used)) static void
FUNC_11 (rtx VAR_0, int *VAR_1, int *VAR_2)
{
  const char *VAR_3;
  enum rtx_code VAR_4;
  int VAR_5, VAR_6, VAR_7;

  VAR_4 = FUNC_0 (VAR_0);
  switch (VAR_4)
    {
    case 131:
      VAR_5 = FUNC_10 (FUNC_5 (VAR_0, 2));
      *VAR_1 = (VAR_5 > *VAR_1 ? VAR_5 : *VAR_1);


    case 130:
    case 128:
    case 129:
      VAR_5 = FUNC_4 (VAR_0, 0);
      if (VAR_5 > *VAR_2)
 *VAR_2 = VAR_5;
      break;

    default:
      break;
    }

  VAR_3 = FUNC_1 (VAR_4);
  VAR_7 = FUNC_2 (VAR_4);
  for (VAR_5 = 0; VAR_5 < VAR_7; VAR_5++)
    {
      switch (VAR_3[VAR_5])
 {
 case 'e': case 'u':
   FUNC_11 (FUNC_3 (VAR_0, VAR_5), VAR_1, VAR_2);
   break;

 case 'V':
   if (FUNC_6 (VAR_0, VAR_5) == ((void*)0))
     break;

 case 'E':
   for (VAR_6 = FUNC_8 (VAR_0, VAR_5) - 1; VAR_6 >= 0; --VAR_6)
     FUNC_11 (FUNC_7 (VAR_0, VAR_5, VAR_6), VAR_1, VAR_2);
   break;

 case 'i': case 'w': case '0': case 's': case 'S': case 'T':
   break;

 default:
   FUNC_9 ();
 }
    }
}
