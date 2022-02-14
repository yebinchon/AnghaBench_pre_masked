
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {int tm_year; int tm_mon; } ;


 int FUNC_0 (int*,int*) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static int
FUNC_2(struct tm *VAR_0, int VAR_1 )
{
    int VAR_2 = VAR_0->tm_year + 1900;
    int VAR_3 = VAR_0->tm_mon + VAR_1;

    FUNC_0(&VAR_2, &VAR_3);
    return FUNC_1(VAR_2, VAR_3);
}
