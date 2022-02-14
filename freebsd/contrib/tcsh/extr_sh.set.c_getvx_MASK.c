
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct varent {int vec; } ;
typedef int Char ;


 int VAR_0 ;
 int VAR_1 ;
 struct varent* FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static struct varent *
FUNC_4(Char *VAR_2, int VAR_3)
{
    struct varent *VAR_4 = FUNC_0(VAR_2);

    if (VAR_4 == 0)
 FUNC_3(VAR_2);
    if (VAR_3 < 1 || VAR_3 > FUNC_1(VAR_4->vec))
 FUNC_2(VAR_0 | VAR_1);
    return (VAR_4);
}
