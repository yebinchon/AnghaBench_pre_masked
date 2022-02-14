
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint64_t ;
typedef size_t __cvmx_pow_list_types_t ;
struct TYPE_9__ {TYPE_3__** smemload; } ;
typedef TYPE_4__ __cvmx_pow_dump_t ;
struct TYPE_7__ {size_t next_index; } ;
struct TYPE_6__ {size_t next_index; size_t fwd_index; } ;
struct TYPE_8__ {TYPE_2__ s_smemload0; TYPE_1__ s_smemload3_cn68xx; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int,int,size_t,size_t) ;
 scalar_t__ FUNC_1 (size_t,size_t,int *) ;
 int * VAR_3 ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(__cvmx_pow_list_types_t VAR_4,
                                             __cvmx_pow_dump_t *VAR_5, uint8_t VAR_6[],
                                             int VAR_7, int VAR_8, uint64_t VAR_9, uint64_t VAR_10)
{
    FUNC_0(VAR_3[VAR_4], 0, VAR_7, VAR_8, VAR_9, VAR_10);
    if (VAR_7)
    {
        if (VAR_8)
            FUNC_1(VAR_9, VAR_4, VAR_6);
        else
        {
            while (VAR_9 != VAR_10)
            {
                if (FUNC_1(VAR_9, VAR_4, VAR_6))
                    break;
                if (FUNC_2(VAR_2))
                {
                    if (VAR_4 >= VAR_1 && VAR_4 < VAR_0)

                        VAR_9 = VAR_5->smemload[VAR_9][4].s_smemload3_cn68xx.next_index;
                    else
                        VAR_9 = VAR_5->smemload[VAR_9][4].s_smemload3_cn68xx.fwd_index;
                }
                else
                    VAR_9 = VAR_5->smemload[VAR_9][0].s_smemload0.next_index;
            }
            FUNC_1(VAR_10, VAR_4, VAR_6);
        }
    }
}
