
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Value_t ;


 int* VAR_0 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static Value_t
FUNC_1(void)
{
    int VAR_1;
    Value_t VAR_2;

    VAR_2 = 0;
    for (VAR_1 = *VAR_0; FUNC_0(VAR_1); VAR_1 = *++VAR_0)
 VAR_2 = (Value_t)(10 * VAR_2 + (VAR_1 - '0'));

    return (VAR_2);
}
