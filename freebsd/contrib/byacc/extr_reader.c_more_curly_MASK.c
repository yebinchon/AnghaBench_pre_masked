
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int FUNC_0 () ;

__attribute__((used)) static int
FUNC_1(void)
{
    char *VAR_1 = VAR_0;
    int VAR_2 = 0;
    int VAR_3 = 0;
    do
    {
 switch (FUNC_0())
 {
 case 0:
 case '\n':
     VAR_3 = 1;
     break;
 case 128:
     VAR_3 = 1;
     VAR_2 = 1;
     break;
 }
 ++VAR_0;
    }
    while (!VAR_3);
    VAR_0 = VAR_1;
    return VAR_2;
}
