
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 int FUNC_0 (int ) ;




 char* FUNC_1 (char*,char*) ;
 char const* FUNC_2 (int ,int *,char const*,char const*) ;

const char *
FUNC_3 (rtx VAR_0, rtx *VAR_1, bool VAR_2)
{
  const char *VAR_3[2];



  switch (FUNC_0 (VAR_1[0]))
    {

    case 129:
      VAR_2 = !VAR_2;

    case 130:
      VAR_3[!VAR_2] = FUNC_1 ("bne", "%2,%.,%1");
      VAR_3[VAR_2] = FUNC_1 ("beq", "%2,%.,%1");
      break;


    case 128:
      VAR_2 = !VAR_2;

    case 131:
      VAR_3[!VAR_2] = FUNC_1 ("beq", "%.,%.,%1");
      VAR_3[VAR_2] = FUNC_1 ("bne", "%.,%.,%1");
      break;

    default:
      VAR_3[!VAR_2] = FUNC_1 ("b%C0z", "%2,%1");
      VAR_3[VAR_2] = FUNC_1 ("b%N0z", "%2,%1");
      break;
    }
  return FUNC_2 (VAR_0, VAR_1, VAR_3[1], VAR_3[0]);
}
