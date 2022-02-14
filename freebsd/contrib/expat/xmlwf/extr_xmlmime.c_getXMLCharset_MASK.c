
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (char const**) ;
 scalar_t__ FUNC_1 (char const*,char const*,char*) ;
 int FUNC_2 (char*,char*) ;

void
FUNC_3(const char *VAR_1, char *VAR_2)
{
  const char *VAR_3, *VAR_4;

  VAR_2[0] = '\0';
  VAR_3 = VAR_1;
  VAR_4 = FUNC_0(&VAR_3);
  if (FUNC_1(VAR_4, VAR_3, "text"))
    FUNC_2(VAR_2, "us-ascii");
  else if (!FUNC_1(VAR_4, VAR_3, "application"))
    return;
  VAR_4 = FUNC_0(&VAR_3);
  if (!VAR_4 || *VAR_4 != '/')
    return;
  VAR_4 = FUNC_0(&VAR_3);




  VAR_4 = FUNC_0(&VAR_3);
  while (VAR_4) {
    if (*VAR_4 == ';') {
      VAR_4 = FUNC_0(&VAR_3);
      if (FUNC_1(VAR_4, VAR_3, "charset")) {
        VAR_4 = FUNC_0(&VAR_3);
        if (VAR_4 && *VAR_4 == '=') {
          VAR_4 = FUNC_0(&VAR_3);
          if (VAR_4) {
            char *VAR_5 = VAR_2;
            if (*VAR_4 == '"') {
              while (++VAR_4 != VAR_3 - 1) {
                if (*VAR_4 == '\\')
                  ++VAR_4;
                if (VAR_5 == VAR_2 + VAR_0 - 1) {
                  VAR_2[0] = '\0';
                  break;
                }
                *VAR_5++ = *VAR_4;
              }
              *VAR_5++ = '\0';
            }
            else {
              if (VAR_3 - VAR_4 > VAR_0 - 1)
                break;
              while (VAR_4 != VAR_3)
                *VAR_5++ = *VAR_4++;
              *VAR_5 = 0;
              break;
            }
          }
        }
        break;
      }
    }
  else
    VAR_4 = FUNC_0(&VAR_3);
  }
}
