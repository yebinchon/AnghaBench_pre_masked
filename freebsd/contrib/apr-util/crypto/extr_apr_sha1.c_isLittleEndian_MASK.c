
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union endianTest {int Long; int* Char; } ;



__attribute__((used)) static char FUNC_0(void)
{
    static union endianTest VAR_0;
    VAR_0.Long = 1;
    return (VAR_0.Char[0] == 1);
}
