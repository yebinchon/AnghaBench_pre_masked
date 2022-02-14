
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int FUNC_0 (char) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*,int *,int) ;

__attribute__((used)) static int
FUNC_4(char *VAR_1)
{

 if (!FUNC_2(VAR_1, VAR_0, FUNC_1(VAR_0)))
  VAR_1 += FUNC_1(VAR_0);
 if (FUNC_2(VAR_1, "ccd", 3))
  return -1;
 VAR_1 += 3;
 if (!FUNC_0(*VAR_1))
  return -1;
 return (FUNC_3(VAR_1, ((void*)0), 10));
}
