
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*) ;
 scalar_t__ FUNC_1 (char const*) ;
 char* FUNC_2 (int) ;

char *
FUNC_3(const char *VAR_0, const char *VAR_1, const char *VAR_2)
{
 int VAR_3 = 1;
 char *VAR_4;
 if (VAR_0)
  VAR_3 += FUNC_1(VAR_0);
 if (VAR_1)
  VAR_3 += FUNC_1(VAR_1);
 if (VAR_2)
  VAR_3 += FUNC_1(VAR_2);
 VAR_4 = FUNC_2(VAR_3);
 VAR_4[0] = '\0';
 if (VAR_0)
  FUNC_0(VAR_4, VAR_0);
 if (VAR_1)
  FUNC_0(VAR_4, VAR_1);
 if (VAR_2)
  FUNC_0(VAR_4, VAR_2);
 return VAR_4;
}
