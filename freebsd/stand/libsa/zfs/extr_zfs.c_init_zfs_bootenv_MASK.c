
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,int) ;
 char* FUNC_2 (char*,char) ;
 char* FUNC_3 (char const*) ;
 int FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (char const*,char*,int) ;
 char* FUNC_6 (char*,char) ;
 int FUNC_7 (char*) ;

void
FUNC_8(const char *VAR_0)
{
 char *VAR_1, *VAR_2;
 int VAR_3;

 VAR_2 = ((void*)0);
 VAR_3 = FUNC_4(VAR_0);
 if (VAR_3 == 0)
  return;
 if (FUNC_5(VAR_0, "zfs:", 4) != 0)
  return;
 VAR_2 = FUNC_3(VAR_0);
 if (VAR_2 == ((void*)0))
  return;

 VAR_2[VAR_3 - 1] = '\0';
 FUNC_1("zfs_be_active", VAR_2, 1);
 FUNC_1("zfs_be_currpage", "1", 1);

 VAR_1 = FUNC_6(VAR_2, '/');
 if (VAR_1 != ((void*)0))
  VAR_1[0] = '\0';
 VAR_1 = FUNC_2(VAR_2, ':') + 1;
 FUNC_1("zfs_be_root", VAR_1, 1);
 FUNC_7(VAR_1);
 FUNC_0(VAR_2);
}
