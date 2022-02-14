
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* b; } ;
typedef TYPE_1__ bdaddr_t ;


 int FUNC_0 (char*,char*,int,int,int,int,int,int) ;

char *FUNC_1(bdaddr_t *VAR_0)
{
 static char VAR_1[2][18];
 static int VAR_2 = 1;

 VAR_2 ^= 1;
 FUNC_0(VAR_1[VAR_2], "%2.2X:%2.2X:%2.2X:%2.2X:%2.2X:%2.2X",
  VAR_0->b[0], VAR_0->b[1], VAR_0->b[2],
  VAR_0->b[3], VAR_0->b[4], VAR_0->b[5]);

 return VAR_1[VAR_2];
}
