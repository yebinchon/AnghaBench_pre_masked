
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (int) ;

int
FUNC_5(const char *VAR_1)
{
        int VAR_2 = VAR_0, VAR_3 = *VAR_1++;
 int VAR_4 = 1;


 if (FUNC_3(VAR_1) > 256)
  return (0);

 while (FUNC_4(VAR_3))
  VAR_3 = *VAR_1++;

        while (VAR_3 != '\0') {
                int VAR_5 = *VAR_1++;

                if (FUNC_2(VAR_3) || FUNC_4(VAR_3)) {
                        ;
                } else if (FUNC_2(VAR_2)) {
                        if (!FUNC_0(VAR_3))
                                return (0);
                } else if (FUNC_2(VAR_5) || VAR_5 == '\0') {
                        if (!FUNC_0(VAR_3))
                                return (0);
                } else {
                        if (!FUNC_1(VAR_3))
                                return (0);
                }
  if (!FUNC_4(VAR_3)) {
   VAR_2 = VAR_3;
  } else {
   while (FUNC_4(VAR_5)) {
    VAR_5 = *VAR_1++;
   }
   if (VAR_5 != '\0')
    VAR_4++;
   VAR_2 = VAR_0;
  }
  VAR_3 = VAR_5;
        }

 if (VAR_4 > 6)
  return (0);
        return (1);
}
