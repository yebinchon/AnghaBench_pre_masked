
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int cvmx_spinlock_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;

int FUNC_1(uint64_t VAR_1)
{

    if (sizeof(cvmx_spinlock_t) != 4)
    {
        FUNC_0("ERROR: Unexpected size of cvmx_spinlock_t\n");
        return(-1);
    }
    if (!VAR_0)
        VAR_0 = VAR_1;
    return(0);
}
