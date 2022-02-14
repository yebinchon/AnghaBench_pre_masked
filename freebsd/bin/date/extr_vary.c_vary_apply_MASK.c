
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vary {char* arg; struct vary* next; } ;
struct tm {int tm_isdst; } ;


 int FUNC_0 (struct tm*,char,int,int) ;
 int FUNC_1 (struct tm*,char,int,int) ;
 int FUNC_2 (struct tm*,char,int,int) ;
 int FUNC_3 (struct tm*,char,int,int,int) ;
 int FUNC_4 (struct tm*,char,int,int) ;
 int FUNC_5 (struct tm*,char,int,int,int) ;
 int FUNC_6 (struct tm*,char,int,int) ;
 int FUNC_7 (char*) ;
 int VAR_0 ;
 size_t FUNC_8 (char*) ;
 size_t FUNC_9 (char*,int ) ;
 int FUNC_10 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;

const struct vary *
FUNC_11(const struct vary *VAR_3, struct tm *VAR_4)
{
  char VAR_5;
  char VAR_6;
  char *VAR_7;
  size_t VAR_8;
  int VAR_9;

  for (; VAR_3; VAR_3 = VAR_3->next) {
    VAR_5 = *VAR_3->arg;
    VAR_7 = VAR_3->arg;
    if (VAR_5 == '+' || VAR_5 == '-')
      VAR_7++;
    else
      VAR_5 = '\0';
    VAR_8 = FUNC_8(VAR_7);
    if (VAR_8 < 2)
      return VAR_3;

    if (VAR_5 == '\0')
      VAR_4->tm_isdst = -1;

    if (FUNC_9(VAR_7, VAR_0) != VAR_8-1) {
      VAR_9 = FUNC_10(VAR_2, VAR_7);
      if (VAR_9 != -1) {
          if (!FUNC_5(VAR_4, VAR_5, VAR_9, 1, 1))
            return VAR_3;
      } else {
        VAR_9 = FUNC_10(VAR_1, VAR_7);
        if (VAR_9 != -1) {
          if (!FUNC_3(VAR_4, VAR_5, VAR_9, 1, 1))
            return VAR_3;
        } else
          return VAR_3;
      }
    } else {
      VAR_9 = FUNC_7(VAR_7);
      VAR_6 = VAR_7[VAR_8-1];

      switch (VAR_6) {
        case 'S':
          if (!FUNC_4(VAR_4, VAR_5, VAR_9, 1))
            return VAR_3;
          break;
        case 'M':
          if (!FUNC_2(VAR_4, VAR_5, VAR_9, 1))
            return VAR_3;
          break;
        case 'H':
          if (!FUNC_1(VAR_4, VAR_5, VAR_9, 1))
            return VAR_3;
          break;
        case 'd':
          VAR_4->tm_isdst = -1;
          if (!FUNC_0(VAR_4, VAR_5, VAR_9, 1))
            return VAR_3;
          break;
        case 'w':
          VAR_4->tm_isdst = -1;
          if (!FUNC_5(VAR_4, VAR_5, VAR_9, 0, 1))
            return VAR_3;
          break;
        case 'm':
          VAR_4->tm_isdst = -1;
          if (!FUNC_3(VAR_4, VAR_5, VAR_9, 0, 1))
            return VAR_3;
          break;
        case 'y':
          VAR_4->tm_isdst = -1;
          if (!FUNC_6(VAR_4, VAR_5, VAR_9, 1))
            return VAR_3;
          break;
        default:
          return VAR_3;
      }
    }
  }
  return 0;
}
