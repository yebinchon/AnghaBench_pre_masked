
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int constraint_t ;
struct TYPE_7__ {scalar_t__ cSize; scalar_t__ cSpeed; scalar_t__ dSpeed; } ;
typedef TYPE_1__ BMK_benchResult_t ;


 scalar_t__ FUNC_0 (TYPE_1__ const,int const) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_1__ const,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__ const,size_t,int const) ;

__attribute__((used)) static int
FUNC_3(const BMK_benchResult_t VAR_2, const BMK_benchResult_t VAR_3, const constraint_t VAR_4, size_t VAR_5)
{
    if(FUNC_0(VAR_2, VAR_4) && FUNC_0(VAR_3, VAR_4)) {
        if(VAR_1) {
            return FUNC_1(VAR_2, VAR_0) < FUNC_1(VAR_3, VAR_0);
        } else {
            return (VAR_2 > VAR_3)
                || (VAR_2 == VAR_3 && VAR_3 > VAR_2)
                || (VAR_2 == VAR_3 && VAR_3 == VAR_2 && VAR_3 > VAR_2);
        }
    }
    return FUNC_0(VAR_3, VAR_4)
        || (!FUNC_0(VAR_2, VAR_4)
            && (FUNC_2(VAR_2, VAR_5, VAR_4) < FUNC_2(VAR_3, VAR_5, VAR_4)));
}
