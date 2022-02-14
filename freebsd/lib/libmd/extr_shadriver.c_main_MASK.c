
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int) ;

int
FUNC_2(void)
{
 FUNC_1("SHA-%d test suite:\n", VAR_0);

 FUNC_0("");
 FUNC_0("abc");
 FUNC_0("message digest");
 FUNC_0("abcdefghijklmnopqrstuvwxyz");
 FUNC_0("ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    "abcdefghijklmnopqrstuvwxyz0123456789");
 FUNC_0("1234567890123456789012345678901234567890"
    "1234567890123456789012345678901234567890");

 return 0;
}
