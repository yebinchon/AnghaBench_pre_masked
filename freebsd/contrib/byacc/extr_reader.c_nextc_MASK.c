
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;

__attribute__((used)) static int
FUNC_2(void)
{
    int VAR_1;
    int VAR_2 = 0;

    do
    {
 switch (VAR_1 = FUNC_1())
 {
 case '\n':
     FUNC_0();
     break;
 case ' ':
 case '\t':
 case '\f':
 case '\r':
 case '\v':
 case ',':
 case ';':
     ++VAR_0;
     break;
 case '\\':
     VAR_1 = '%';

 default:
     VAR_2 = 1;
     break;
 }
    }
    while (!VAR_2);

    return VAR_1;
}
