
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (char*,char*,...) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void
FUNC_3(char *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_2(VAR_3);

 if ((VAR_1 + VAR_4 + 2) >= 79) {
  FUNC_0("%s,\n", VAR_0);
  VAR_1 = 0;
  VAR_2 = 1;
 }
 if (VAR_2)
  VAR_1 += FUNC_1(VAR_0 + VAR_1, "  ");
 else
  VAR_1 += FUNC_1(VAR_0 + VAR_1, ", ");
 VAR_2 = 0;


 VAR_1 += FUNC_1(VAR_0 + VAR_1, "%s", VAR_3);
}
