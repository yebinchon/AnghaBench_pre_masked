
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Boolean ;



Boolean
FUNC_0(char *VAR_0)
{
    char *VAR_1;
    int VAR_2 = 0, VAR_3 = 0, VAR_4 = 0;

    for (VAR_1 = VAR_0; *VAR_1; VAR_1++) {
 switch(*VAR_1) {
 case '{':
  VAR_3++;
  VAR_2 = 1;
  break;
 case '}':
  VAR_3--;
  break;
 case '[':
  VAR_4++;
  VAR_2 = 1;
  break;
 case ']':
  VAR_4--;
  break;
 case '?':
 case '*':
  VAR_2 = 1;
  break;
 default:
  break;
 }
    }
    return VAR_2 && VAR_4 == 0 && VAR_3 == 0;
}
