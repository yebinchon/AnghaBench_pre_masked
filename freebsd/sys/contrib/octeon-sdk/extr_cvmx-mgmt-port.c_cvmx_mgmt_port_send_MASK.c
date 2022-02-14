
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int odbell; } ;
struct TYPE_10__ {int u64; TYPE_1__ s; } ;
typedef TYPE_4__ cvmx_mixx_oring2_t ;
struct TYPE_11__ {size_t tx_write_index; int lock; TYPE_3__* tx_ring; int mac; scalar_t__* tx_buffers; } ;
typedef TYPE_5__ cvmx_mgmt_port_state_t ;
typedef int cvmx_mgmt_port_result_t ;
struct TYPE_8__ {int len; scalar_t__ tstamp; } ;
struct TYPE_9__ {TYPE_2__ s; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 int FUNC_2 () ;
 TYPE_5__* VAR_6 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (scalar_t__,char*,int) ;

cvmx_mgmt_port_result_t FUNC_8(int VAR_7, int VAR_8, void *VAR_9)
{
    cvmx_mgmt_port_state_t *VAR_10;
    cvmx_mixx_oring2_t VAR_11;

    if ((VAR_7 < 0) || (VAR_7 >= FUNC_2()))
        return VAR_0;


    if ((VAR_8 < 1) || (VAR_8 > VAR_4))
        return VAR_0;

    if (VAR_9 == ((void*)0))
        return VAR_0;

    VAR_10 = VAR_6 + VAR_7;

    FUNC_4(&VAR_10->lock);

    VAR_11 = FUNC_3(FUNC_1(VAR_7));
    if (VAR_11 >= VAR_2 - 1)
    {

        FUNC_5(&VAR_10->lock);
        return VAR_1;
    }
    else
    {

        FUNC_7(VAR_10->tx_buffers[VAR_10->tx_write_index], VAR_9, VAR_8);

        FUNC_7(VAR_10->tx_buffers[VAR_10->tx_write_index] + 6, ((char*)&VAR_10->mac) + 2, 6);

        VAR_10->tx_ring[VAR_10->tx_write_index].s.len = VAR_8;

        VAR_10->tx_ring[VAR_10->tx_write_index].s.tstamp = 0;

        VAR_10->tx_write_index = (VAR_10->tx_write_index + 1) % VAR_2;

        VAR_5;
        FUNC_6(FUNC_1(VAR_7), 1);
        if (FUNC_3(FUNC_0(VAR_7)))
            FUNC_6(FUNC_0(VAR_7), FUNC_3(FUNC_0(VAR_7)));

        FUNC_5(&VAR_10->lock);
        return VAR_3;
    }
}
