
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;
 char* VAR_0 ;
 int VAR_1 ;

void
FUNC_1(int VAR_2)
{
 char *VAR_3 = VAR_0;
 int VAR_4;

 if (VAR_0 == ((void*)0) || VAR_1 == 0)
  return;

 FUNC_0("%d: watch %p len %d\n",VAR_2,VAR_0,VAR_1);
        for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
                if (*VAR_3 >= 0x20 && *VAR_3 < 0x7f) {
                        FUNC_0(" %c",*VAR_3++ & 0xff);
                } else {
                        FUNC_0(" %02x",*VAR_3++ & 0xff);
                }
        }
        FUNC_0("\n");

}
