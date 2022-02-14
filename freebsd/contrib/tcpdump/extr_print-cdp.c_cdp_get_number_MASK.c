
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u_char ;



__attribute__((used)) static unsigned long FUNC_0(const u_char * VAR_0, int VAR_1)
{
    unsigned long VAR_2=0;
    while( VAR_1>0 )
    {
 VAR_2 = (VAR_2<<8) + *VAR_0;
 VAR_0++; VAR_1--;
    }
    return VAR_2;
}
