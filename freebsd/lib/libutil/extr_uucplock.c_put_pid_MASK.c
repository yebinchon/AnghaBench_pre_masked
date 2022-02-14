
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pid_t ;


 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (int,char*,size_t) ;

__attribute__((used)) static int
FUNC_2(int VAR_0, pid_t VAR_1)
{
 char VAR_2[32];
 int VAR_3;

 VAR_3 = FUNC_0 (VAR_2, "%10d\n", (int)VAR_1);
 return FUNC_1 (VAR_0, VAR_2, (size_t)VAR_3) == VAR_3;
}
