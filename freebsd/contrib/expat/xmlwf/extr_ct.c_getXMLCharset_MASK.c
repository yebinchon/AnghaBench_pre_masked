
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (char const**) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (char const*,char const*,char*) ;
 int FUNC_2 (char*,char*) ;

void
FUNC_3(const char *VAR_2, char *VAR_3)
{
  const char *VAR_4, *VAR_5;

  VAR_3[0] = '\0';
  VAR_4 = VAR_2;
  VAR_5 = FUNC_0(&VAR_4);
  if (FUNC_1(VAR_5, VAR_4, "text"))
    FUNC_2(VAR_3, "us-ascii");
  else if (!FUNC_1(VAR_5, VAR_4, "application"))
    return;
  VAR_5 = FUNC_0(&VAR_4);
  if (!VAR_5 || *VAR_5 != '/')
    return;
  VAR_5 = FUNC_0(&VAR_4);
  if (FUNC_1(VAR_5, VAR_4, "xml"))
    VAR_1 = 1;
  VAR_5 = FUNC_0(&VAR_4);
  while (VAR_5) {
    if (*VAR_5 == ';') {
      VAR_5 = FUNC_0(&VAR_4);
      if (FUNC_1(VAR_5, VAR_4, "charset")) {
        VAR_5 = FUNC_0(&VAR_4);
        if (VAR_5 && *VAR_5 == '=') {
          VAR_5 = FUNC_0(&VAR_4);
          if (VAR_5) {
            char *VAR_6 = VAR_3;
            if (*VAR_5 == '"') {
              while (++VAR_5 != VAR_4 - 1) {
                if (*VAR_5 == '\\')
                  ++VAR_5;
                if (VAR_6 == VAR_3 + VAR_0 - 1) {
                  VAR_3[0] = '\0';
                  break;
                }
                *VAR_6++ = *VAR_5;
              }
              *VAR_6++ = '\0';
            }
            else {
              if (VAR_4 - VAR_5 > VAR_0 - 1)
                break;
              while (VAR_5 != VAR_4)
                *VAR_6++ = *VAR_5++;
              *VAR_6 = 0;
              break;
            }
          }
        }
      }
    }
  else
    VAR_5 = FUNC_0(&VAR_4);
  }
}
