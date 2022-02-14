
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t varInds_t ;
struct TYPE_3__ {int * vals; } ;
typedef TYPE_1__ paramValues_t ;


 scalar_t__ FUNC_0 (size_t const,int ) ;
 int FUNC_1 (size_t const,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(const varInds_t VAR_0, const int VAR_1, paramValues_t* VAR_2)
{
    VAR_2->vals[VAR_0] = FUNC_1(VAR_0,
                                     FUNC_0(VAR_0, VAR_2->vals[VAR_0]) + VAR_1);
}
