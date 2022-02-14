
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,scalar_t__,int ) ;
 scalar_t__ FUNC_2 (char*) ;

int
FUNC_3(int VAR_1, char **VAR_2)
{
 size_t VAR_3;
 int VAR_4;

 FUNC_0("%08x", VAR_1 - 1);
 for (VAR_4 = 1, VAR_3 = 0; VAR_4 < VAR_1; VAR_4++)
  VAR_3 += FUNC_2(VAR_2[VAR_4]);
 FUNC_0("%08x", (int)VAR_3);
 for (VAR_4 = 1; VAR_4 < VAR_1; VAR_4++)
  FUNC_1(VAR_2[VAR_4], FUNC_2(VAR_2[VAR_4]) + 1, VAR_0);
        return (0);
}
