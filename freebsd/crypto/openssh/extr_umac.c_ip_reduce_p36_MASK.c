
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT64 ;
typedef int UINT32 ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static UINT32 FUNC_0(UINT64 VAR_2)
{

    UINT64 VAR_3;

    VAR_3 = (VAR_2 & VAR_0) + 5 * (VAR_2 >> 36);
    if (VAR_3 >= VAR_1)
        VAR_3 -= VAR_1;


    return (UINT32)(VAR_3);
}
