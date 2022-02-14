
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 scalar_t__ FUNC_0 (unsigned char) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char const*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int *,int *,char const**,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

int
FUNC_8 (rtx VAR_2)
{
  int VAR_3;
  rtx *VAR_4;
  const char **VAR_5;
  int VAR_6;


  if (VAR_0)
    {

      FUNC_6 (FUNC_7 (VAR_2));
      FUNC_4 (1);
      return VAR_1 >= 0;
    }

  VAR_3 = FUNC_2 (VAR_2);
  if (VAR_3 < 0)
    return 0;
  if (VAR_3 == 0)
    return 1;

  VAR_4 = FUNC_1 (VAR_3 * sizeof (rtx));
  VAR_5 = FUNC_1 (VAR_3 * sizeof (char *));

  FUNC_5 (VAR_2, VAR_4, ((void*)0), VAR_5, ((void*)0));

  for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
    {
      const char *VAR_7 = VAR_5[VAR_6];
      if (VAR_7[0] == '%')
 VAR_7++;
      if (FUNC_0 ((unsigned char) VAR_7[0]) && VAR_7[1] == '\0')
 VAR_7 = VAR_5[VAR_7[0] - '0'];

      if (! FUNC_3 (VAR_4[VAR_6], VAR_7))
 return 0;
    }

  return 1;
}
