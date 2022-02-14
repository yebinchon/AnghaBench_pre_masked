
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef scalar_t__ time_t ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__*,char*) ;
 int FUNC_1 (int *,char*,...) ;

__attribute__((used)) static void
FUNC_2(FILE *VAR_1, u_int32_t VAR_2, int VAR_3)
{
 time_t VAR_4;
 char VAR_5[26];

 if (VAR_3 & VAR_0)
  FUNC_1(VAR_1, "%u", VAR_2);
 else {
  VAR_4 = (time_t)VAR_2;
  FUNC_0(&VAR_4, VAR_5);
  VAR_5[24] = '\0';
  FUNC_1(VAR_1, "%s", VAR_5);
 }
}
