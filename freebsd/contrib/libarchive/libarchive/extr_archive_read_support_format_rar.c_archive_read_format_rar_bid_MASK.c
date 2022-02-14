
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_read {int dummy; } ;
typedef int ssize_t ;


 char* VAR_0 ;
 char* FUNC_0 (struct archive_read*,int,int*) ;
 scalar_t__ FUNC_1 (char const*,char*,int) ;

__attribute__((used)) static int
FUNC_2(struct archive_read *VAR_1, int VAR_2)
{
  const char *VAR_3;


  if (VAR_2 > 30)
   return (-1);

  if ((VAR_3 = FUNC_0(VAR_1, 7, ((void*)0))) == ((void*)0))
    return (-1);

  if (FUNC_1(VAR_3, VAR_0, 7) == 0)
    return (30);

  if ((VAR_3[0] == 'M' && VAR_3[1] == 'Z') || FUNC_1(VAR_3, "\x7F\x45LF", 4) == 0) {

    ssize_t VAR_4 = 0x10000;
    ssize_t VAR_5 = 4096;
    ssize_t VAR_6;
    while (VAR_4 + VAR_5 <= (1024 * 128)) {
      const char *VAR_7 = FUNC_0(VAR_1, VAR_4 + VAR_5, &VAR_6);
      if (VAR_7 == ((void*)0)) {

        VAR_5 >>= 1;
        if (VAR_5 < 0x40)
          return (0);
        continue;
      }
      VAR_3 = VAR_7 + VAR_4;
      while (VAR_3 + 7 < VAR_7 + VAR_6) {
        if (FUNC_1(VAR_3, VAR_0, 7) == 0)
          return (30);
        VAR_3 += 0x10;
      }
      VAR_4 = VAR_3 - VAR_7;
    }
  }
  return (0);
}
