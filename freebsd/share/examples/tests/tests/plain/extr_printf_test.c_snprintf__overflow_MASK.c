
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buffer ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (char*,int,char*) ;
 scalar_t__ FUNC_2 (char*,char*) ;

__attribute__((used)) static void
FUNC_3(void)
{
 char VAR_1[10];

 if (FUNC_1(VAR_1, sizeof(VAR_1), "0123456789abcdef") != 16)
  FUNC_0(VAR_0, "snprintf did not return the expected "
      "number of characters");

 if (FUNC_2(VAR_1, "012345678") != 0)
  FUNC_0(VAR_0, "Bad formatting: got %s", VAR_1);
}
