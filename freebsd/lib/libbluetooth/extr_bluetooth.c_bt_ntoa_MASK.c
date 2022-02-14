
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* b; } ;
typedef TYPE_1__ bdaddr_t ;


 int FUNC_0 (char*,char*,int,int,int,int,int,int) ;

char const *
FUNC_1(bdaddr_t const *VAR_0, char *VAR_1)
{
 static char VAR_2[24];

 if (VAR_1 == ((void*)0))
  VAR_1 = VAR_2;

 FUNC_0(VAR_1, "%2.2x:%2.2x:%2.2x:%2.2x:%2.2x:%2.2x",
  VAR_0->b[5], VAR_0->b[4], VAR_0->b[3], VAR_0->b[2], VAR_0->b[1], VAR_0->b[0]);

 return (VAR_1);
}
