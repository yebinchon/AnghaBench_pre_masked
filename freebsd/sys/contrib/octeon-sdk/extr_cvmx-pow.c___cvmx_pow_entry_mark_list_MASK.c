
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef size_t __cvmx_pow_list_types_t ;


 char** VAR_0 ;
 int FUNC_0 (char*,int,char*,char*) ;

__attribute__((used)) static int FUNC_1(int VAR_1, __cvmx_pow_list_types_t VAR_2, uint8_t VAR_3[])
{
    if (VAR_3[VAR_1] == 0)
    {
        VAR_3[VAR_1] = VAR_2;
        return 0;
    }
    else
    {
        FUNC_0("\nWARNING: Entry %d already on list %s, but we tried to add it to %s\n",
               VAR_1, VAR_0[VAR_3[VAR_1]], VAR_0[VAR_2]);
        return -1;
    }
}
