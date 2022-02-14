
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;

__attribute__((used)) static char
FUNC_1(char **VAR_1)
{
  char VAR_2;

  if ((*VAR_1)[1] == '\0') {
    FUNC_0(VAR_0, "Empty backslash escape");
    return **VAR_1;
  }

  if (**VAR_1 == '\\') {
    (*VAR_1)++;
    switch (**VAR_1) {
    case 'g':
      VAR_2 = '\007';
      break;
    case 'b':
      VAR_2 = '\010';
      break;
    case 't':
      VAR_2 = '\011';
      break;
    case 'n':
      VAR_2 = '\012';
      break;
    case 'v':
      VAR_2 = '\013';
      break;
    case 'f':
      VAR_2 = '\014';
      break;
    case 'r':
      VAR_2 = '\015';
      break;
    case 'e':
      VAR_2 = '\033';
      break;
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
      {
 int VAR_3, VAR_4, VAR_5;

 for (VAR_3 = 0, VAR_4 = 0; VAR_3 < 3; VAR_3++) {
   VAR_5 = *(*VAR_1)++;
   if (VAR_5 < '0' || VAR_5 > '7') {
     (*VAR_1)--;
     break;
   }
   VAR_4 = (VAR_4 << 3) | (VAR_5 - '0');
 }

 if ((VAR_4 & 0xffffff00) != 0)
   FUNC_0(VAR_0,
        "Too large character constant %u\n",
        VAR_4);
 VAR_2 = (char) VAR_4;
 --(*VAR_1);
      }
      break;

    default:
      VAR_2 = **VAR_1;
      break;
    }
  } else
    VAR_2 = **VAR_1;

  return VAR_2;
}
