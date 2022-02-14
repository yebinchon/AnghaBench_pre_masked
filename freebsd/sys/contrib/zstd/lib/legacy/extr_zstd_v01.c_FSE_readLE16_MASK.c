
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U16 ;
typedef int BYTE ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (void const*) ;

__attribute__((used)) static U16 FUNC_2(const void* VAR_0)
{
    if (FUNC_0())
        return FUNC_1(VAR_0);
    else
    {
        const BYTE* VAR_1 = (const BYTE*)VAR_0;
        return (U16)(VAR_1[0] + (VAR_1[1]<<8));
    }
}
