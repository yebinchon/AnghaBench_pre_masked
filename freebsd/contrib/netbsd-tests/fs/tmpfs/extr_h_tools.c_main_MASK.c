
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int,char**) ;
 int FUNC_1 (int,char**) ;
 int FUNC_2 (int,char**) ;
 int FUNC_3 (int,char**) ;
 int FUNC_4 (int,char**) ;
 scalar_t__ FUNC_5 (char*,char*) ;

int
FUNC_6(int VAR_1, char **VAR_2)
{
 int VAR_3;

 if (VAR_1 < 2)
  return VAR_0;

 VAR_1 -= 1;
 VAR_2 += 1;

 if (FUNC_5(VAR_2[0], "getfh") == 0)
  VAR_3 = FUNC_0(VAR_1, VAR_2);
 else if (FUNC_5(VAR_2[0], "kqueue") == 0)
  VAR_3 = FUNC_1(VAR_1, VAR_2);
 else if (FUNC_5(VAR_2[0], "rename") == 0)
  VAR_3 = FUNC_2(VAR_1, VAR_2);
 else if (FUNC_5(VAR_2[0], "sockets") == 0)
  VAR_3 = FUNC_3(VAR_1, VAR_2);
 else if (FUNC_5(VAR_2[0], "statvfs") == 0)
  VAR_3 = FUNC_4(VAR_1, VAR_2);
 else
  VAR_3 = VAR_0;

 return VAR_3;
}
