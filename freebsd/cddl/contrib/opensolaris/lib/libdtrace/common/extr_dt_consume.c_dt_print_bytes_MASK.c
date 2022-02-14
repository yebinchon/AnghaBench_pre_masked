
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uchar_t ;
struct TYPE_4__ {scalar_t__* dt_options; } ;
typedef TYPE_1__ dtrace_hdl_t ;
typedef scalar_t__ caddr_t ;
typedef int FILE ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 char* FUNC_0 (size_t) ;
 int FUNC_1 (char*,char*,size_t) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int *,char*,...) ;
 scalar_t__ FUNC_3 (char) ;
 scalar_t__ FUNC_4 (char) ;

__attribute__((used)) static int
FUNC_5(dtrace_hdl_t *VAR_2, FILE *VAR_3, caddr_t VAR_4,
    size_t VAR_5, int VAR_6, int VAR_7, int VAR_8)
{





 int VAR_9, VAR_10, VAR_11 = 5;
 char *VAR_12 = (char *)VAR_4;

 if (VAR_5 == 0)
  return (0);

 if (VAR_8)
  goto raw;

 if (VAR_2->dt_options[VAR_0] != VAR_1)
  goto raw;

 for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) {
  if (FUNC_3(VAR_12[VAR_9]) || FUNC_4(VAR_12[VAR_9]) ||
      VAR_12[VAR_9] == '\b' || VAR_12[VAR_9] == '\a')
   continue;

  if (VAR_12[VAR_9] == '\0' && VAR_9 > 0) {
   for (VAR_10 = VAR_9 + 1; VAR_10 < VAR_5; VAR_10++) {
    if (VAR_12[VAR_10] != '\0')
     break;
   }

   if (VAR_10 != VAR_5)
    break;

   if (VAR_7) {
    return (FUNC_2(VAR_2, VAR_3, "%s", VAR_12));
   } else {
    return (FUNC_2(VAR_2, VAR_3, " %s%*s",
        VAR_6 < 0 ? " " : "", VAR_6, VAR_12));
   }
  }

  break;
 }

 if (VAR_9 == VAR_5) {





  char *VAR_13 = FUNC_0(VAR_5 + 1);
  FUNC_1(VAR_12, VAR_13, VAR_5);
  VAR_13[VAR_5] = '\0';
  return (FUNC_2(VAR_2, VAR_3, "  %-*s", VAR_6, VAR_13));
 }

raw:
 if (FUNC_2(VAR_2, VAR_3, "\n%*s      ", VAR_11, "") < 0)
  return (-1);

 for (VAR_9 = 0; VAR_9 < 16; VAR_9++)
  if (FUNC_2(VAR_2, VAR_3, "  %c", "0123456789abcdef"[VAR_9]) < 0)
   return (-1);

 if (FUNC_2(VAR_2, VAR_3, "  0123456789abcdef\n") < 0)
  return (-1);


 for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9 += 16) {
  if (FUNC_2(VAR_2, VAR_3, "%*s%5x:", VAR_11, "", VAR_9) < 0)
   return (-1);

  for (VAR_10 = VAR_9; VAR_10 < VAR_9 + 16 && VAR_10 < VAR_5; VAR_10++) {
   if (FUNC_2(VAR_2, VAR_3, " %02x", (uchar_t)VAR_12[VAR_10]) < 0)
    return (-1);
  }

  while (VAR_10++ % 16) {
   if (FUNC_2(VAR_2, VAR_3, "   ") < 0)
    return (-1);
  }

  if (FUNC_2(VAR_2, VAR_3, "  ") < 0)
   return (-1);

  for (VAR_10 = VAR_9; VAR_10 < VAR_9 + 16 && VAR_10 < VAR_5; VAR_10++) {
   if (FUNC_2(VAR_2, VAR_3, "%c",
       VAR_12[VAR_10] < ' ' || VAR_12[VAR_10] > '~' ? '.' : VAR_12[VAR_10]) < 0)
    return (-1);
  }

  if (FUNC_2(VAR_2, VAR_3, "\n") < 0)
   return (-1);
 }

 return (0);
}
