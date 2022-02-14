
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct termios {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int,int,struct termios const*) ;

int
FUNC_2(int VAR_2, int VAR_3, const struct termios *VAR_4)
{
    int VAR_5;

    while ((VAR_5 = FUNC_1(VAR_2, VAR_3, VAR_4)) == -1 &&
    VAR_1 == VAR_0)
 if (FUNC_0())
     break;
    return VAR_5;
}
