
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {int tm_isdst; int tm_min; int tm_hour; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int ) ;

__attribute__((used)) static struct tm *
FUNC_1(
 struct tm * VAR_2
 )
{

    static struct tm VAR_3;

    VAR_3 = *VAR_2;
    VAR_3.tm_isdst = 1;
    VAR_3.tm_min += VAR_0;
    FUNC_0(&VAR_3.tm_hour, &VAR_3.tm_min, VAR_1);
    return &VAR_3;
}
