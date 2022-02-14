
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tui_gen_win_info {int type; } ;


 char* VAR_0 ;

 char* VAR_1 ;

 char* VAR_2 ;

 char* VAR_3 ;


char *
FUNC_0 (struct tui_gen_win_info * VAR_4)
{
  char *VAR_5 = (char *) ((void*)0);

  switch (VAR_4->type)
    {
    case 128:
      VAR_5 = VAR_3;
      break;
    case 131:
      VAR_5 = VAR_0;
      break;
    case 129:
      VAR_5 = VAR_2;
      break;
    case 130:
      VAR_5 = VAR_1;
      break;
    default:
      VAR_5 = "";
      break;
    }

  return VAR_5;
}
