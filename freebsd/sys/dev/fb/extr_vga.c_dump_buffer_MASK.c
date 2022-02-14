
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static void
FUNC_1(u_char *VAR_0, size_t VAR_1)
{
    int VAR_2;

    for(VAR_2 = 0; VAR_2 < VAR_1;) {
 FUNC_0("%02x ", VAR_0[VAR_2]);
 if ((++VAR_2 % 16) == 0)
     FUNC_0("\n");
    }
}
