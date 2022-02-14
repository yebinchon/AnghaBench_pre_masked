
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t varInds_t ;
struct TYPE_3__ {scalar_t__* vals; } ;
typedef TYPE_1__ paramValues_t ;


 int FUNC_0 (int,char*,...) ;
 size_t VAR_0 ;

__attribute__((used)) static void FUNC_1(paramValues_t VAR_1)
{
    varInds_t VAR_2;
    FUNC_0(3, "\r testing :");
    for (VAR_2=0; VAR_2 < VAR_0; VAR_2++) {
        FUNC_0(3, "%3u,", (unsigned)VAR_1.vals[VAR_2]);
    }
    FUNC_0(3, "\b    \r");
}
