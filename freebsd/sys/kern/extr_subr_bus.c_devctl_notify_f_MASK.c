
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 char* FUNC_1 (int,int ,int) ;
 int FUNC_2 (char*,int,char*,char const*,char const*,char const*,...) ;
 scalar_t__ FUNC_3 (char const*) ;

void
FUNC_4(const char *VAR_1, const char *VAR_2, const char *VAR_3,
    const char *VAR_4, int VAR_5)
{
 int VAR_6 = 0;
 char *VAR_7;

 if (VAR_1 == ((void*)0))
  return;
 if (VAR_2 == ((void*)0))
  return;
 if (VAR_3 == ((void*)0))
  return;
 VAR_6 += FUNC_3(" system=") + FUNC_3(VAR_1);
 VAR_6 += FUNC_3(" subsystem=") + FUNC_3(VAR_2);
 VAR_6 += FUNC_3(" type=") + FUNC_3(VAR_3);

 if (VAR_4 != ((void*)0))
  VAR_6 += FUNC_3(VAR_4);
 VAR_6 += 3;
 VAR_7 = FUNC_1(VAR_6, VAR_0, VAR_5);
 if (VAR_7 == ((void*)0))
  return;
 if (VAR_4 != ((void*)0))
  FUNC_2(VAR_7, VAR_6, "!system=%s subsystem=%s type=%s %s\n",
      VAR_1, VAR_2, VAR_3, VAR_4);
 else
  FUNC_2(VAR_7, VAR_6, "!system=%s subsystem=%s type=%s\n",
      VAR_1, VAR_2, VAR_3);
 FUNC_0(VAR_7, VAR_5);
}
