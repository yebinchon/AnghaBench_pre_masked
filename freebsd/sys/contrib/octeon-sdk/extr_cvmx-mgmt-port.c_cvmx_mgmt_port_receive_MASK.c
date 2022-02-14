
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_7__ {scalar_t__ ircnt; } ;
struct TYPE_10__ {TYPE_1__ s; int u64; } ;
typedef TYPE_4__ cvmx_mixx_ircnt_t ;
struct TYPE_11__ {size_t rx_read_index; int lock; TYPE_3__* rx_ring; scalar_t__* rx_buffers; } ;
typedef TYPE_5__ cvmx_mgmt_port_state_t ;
struct TYPE_8__ {int code; int len; } ;
struct TYPE_9__ {TYPE_2__ s; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,int,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,int ) ;
 TYPE_5__* VAR_6 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (int *,scalar_t__*,int) ;

int FUNC_12(int VAR_7, int VAR_8, uint8_t *VAR_9)
{
    cvmx_mixx_ircnt_t VAR_10;
    cvmx_mgmt_port_state_t *VAR_11;
    int VAR_12;

    if ((VAR_7 < 0) || (VAR_7 >= FUNC_3()))
        return VAR_0;


    if (VAR_8 < 1)
        return VAR_0;

    if (VAR_9 == ((void*)0))
        return VAR_0;

    VAR_11 = VAR_6 + VAR_7;

    FUNC_8(&VAR_11->lock);


    VAR_10.u64 = FUNC_7(FUNC_0(VAR_7));
    if (VAR_10.s.ircnt)
    {
        uint64_t *VAR_13 = (void *)VAR_11->rx_buffers[VAR_11->rx_read_index];
 uint64_t *VAR_14 = VAR_13;



        if (FUNC_2(VAR_5) && (*VAR_14 == 0))
            VAR_13++;

        VAR_12 = 0;


        while (VAR_11->rx_ring[VAR_11->rx_read_index].s.code == 16)
        {

            int VAR_15 = VAR_11->rx_ring[VAR_11->rx_read_index].s.len;
            if (VAR_15 > VAR_8)
                VAR_15 = VAR_8;
            FUNC_11(VAR_9, VAR_13, VAR_15);


            VAR_9 += VAR_15;
            VAR_8 -= VAR_15;
            VAR_12 += VAR_15;


            VAR_11->rx_ring[VAR_11->rx_read_index].s.code = 0;
            VAR_11->rx_ring[VAR_11->rx_read_index].s.len = VAR_3 - 8;
            VAR_11->rx_read_index = (VAR_11->rx_read_index + 1) % VAR_2;

            *VAR_14 = 0;
            VAR_4;

            FUNC_10(FUNC_1(VAR_7), 1);
            VAR_13 = (void *)VAR_11->rx_buffers[VAR_11->rx_read_index];
            VAR_14 = VAR_13;
        }


        if (VAR_11->rx_ring[VAR_11->rx_read_index].s.code == 15)
        {
            if (VAR_8 >= VAR_11->rx_ring[VAR_11->rx_read_index].s.len)
            {
                int VAR_16 = VAR_11->rx_ring[VAR_11->rx_read_index].s.len;
                FUNC_11(VAR_9, VAR_13, VAR_16);
                VAR_12 += VAR_16;
            }
            else
            {

                FUNC_4("ERROR: cvmx_mgmt_port_receive: Packet (%d) larger than supplied buffer (%d)\n", VAR_11->rx_ring[VAR_11->rx_read_index].s.len, VAR_8);
                VAR_12 = VAR_1;
            }
        }
        else
        {
            FUNC_4("ERROR: cvmx_mgmt_port_receive: Receive error code %d. Packet dropped(Len %d), \n",
                         VAR_11->rx_ring[VAR_11->rx_read_index].s.code, VAR_11->rx_ring[VAR_11->rx_read_index].s.len + VAR_12);
            VAR_12 = -VAR_11->rx_ring[VAR_11->rx_read_index].s.code;



            FUNC_6(VAR_7, FUNC_5(VAR_7));
        }



        VAR_11->rx_ring[VAR_11->rx_read_index].s.code = 0;
        VAR_11->rx_ring[VAR_11->rx_read_index].s.len = VAR_3 - 8;
        VAR_11->rx_read_index = (VAR_11->rx_read_index + 1) % VAR_2;

        *VAR_14 = 0;
        VAR_4;

        FUNC_10(FUNC_1(VAR_7), 1);

        FUNC_10(FUNC_0(VAR_7), 1);
    }
    else
    {

        VAR_12 = 0;
    }
    FUNC_9(&VAR_11->lock);
    return VAR_12;
}
