
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 int FUNC_1 (int,char*,char const*) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int *,char*,char const*) ;

__attribute__((used)) static void
FUNC_4(const char *VAR_0, const char *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2 != 0)
  FUNC_1(1, "chdir to %s", VAR_1);
 VAR_2 = FUNC_3(((void*)0), "/bin/pax -rw -pe . %s", VAR_0);
 if (VAR_2 != 0)
  FUNC_2(1, "skel copy failed");
}
