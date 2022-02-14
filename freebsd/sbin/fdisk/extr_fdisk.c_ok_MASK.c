
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (scalar_t__*,int ,int ) ;
 scalar_t__* VAR_1 ;
 int FUNC_3 (char*,char const*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (scalar_t__*,char*) ;
 int FUNC_5 (scalar_t__*) ;

__attribute__((used)) static int
FUNC_6(const char *VAR_4)
{
 FUNC_3("%s [n] ", VAR_4);
 FUNC_1(VAR_3);
 if (FUNC_2(VAR_1, VAR_0, VAR_2) == ((void*)0))
  FUNC_0(1);
 VAR_1[FUNC_5(VAR_1)-1] = 0;

 if (*VAR_1 &&
  (!FUNC_4(VAR_1, "yes") || !FUNC_4(VAR_1, "YES") ||
   !FUNC_4(VAR_1, "y") || !FUNC_4(VAR_1, "Y")))
  return 1;
 else
  return 0;
}
