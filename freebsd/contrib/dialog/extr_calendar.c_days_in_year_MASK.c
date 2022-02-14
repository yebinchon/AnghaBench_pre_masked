
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {scalar_t__ tm_year; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int
FUNC_1(struct tm *VAR_0, int VAR_1 )
{
    return FUNC_0(VAR_0->tm_year + 1900 + VAR_1);
}
