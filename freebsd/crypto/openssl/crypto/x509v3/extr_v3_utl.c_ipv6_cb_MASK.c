
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int total; int zero_pos; scalar_t__ tmp; int zero_cnt; } ;
typedef TYPE_1__ IPV6_STAT ;


 int FUNC_0 (scalar_t__,char const*) ;
 int FUNC_1 (scalar_t__,char const*,int) ;

__attribute__((used)) static int FUNC_2(const char *VAR_0, int VAR_1, void *VAR_2)
{
    IPV6_STAT *VAR_3 = VAR_2;

    if (VAR_3->total == 16)
        return 0;
    if (VAR_1 == 0) {

        if (VAR_3->zero_pos == -1)
            VAR_3->zero_pos = VAR_3->total;

        else if (VAR_3->zero_pos != VAR_3->total)
            return 0;
        VAR_3->zero_cnt++;
    } else {

        if (VAR_1 > 4) {

            if (VAR_3->total > 12)
                return 0;

            if (VAR_0[VAR_1])
                return 0;
            if (!FUNC_0(VAR_3->tmp + VAR_3->total, VAR_0))
                return 0;
            VAR_3->total += 4;
        } else {
            if (!FUNC_1(VAR_3->tmp + VAR_3->total, VAR_0, VAR_1))
                return 0;
            VAR_3->total += 2;
        }
    }
    return 1;
}
