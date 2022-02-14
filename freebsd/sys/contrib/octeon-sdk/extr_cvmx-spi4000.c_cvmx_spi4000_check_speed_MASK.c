
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int status; int speed; int duplex; } ;
struct TYPE_5__ {TYPE_1__ s; scalar_t__ u64; } ;
typedef TYPE_2__ cvmx_gmxx_rxx_rx_inbnd_t ;


 int FUNC_0 (int,int,int) ;
 int FUNC_1 (int,int,int) ;
 int * VAR_0 ;

cvmx_gmxx_rxx_rx_inbnd_t FUNC_2(int VAR_1, int VAR_2)
{
    static int VAR_3[10] = {0,};
    cvmx_gmxx_rxx_rx_inbnd_t VAR_4;
    int VAR_5;

    VAR_4.u64 = 0;

    if (!VAR_0[VAR_1])
        return VAR_4;
    if (VAR_2>=10)
        return VAR_4;
    VAR_5 = FUNC_0(VAR_1, VAR_2, 0x11);
    if ((VAR_5 & (1<<10)) == 0)
        VAR_5 = 0;
    else
        VAR_5 &= 0xe400;
    if (VAR_5 != VAR_3[VAR_2])
    {
        VAR_3[VAR_2] = VAR_5;
        if (VAR_5 & (1<<10))
        {

            if (VAR_5 & (1<<15))
                FUNC_1(VAR_1, (VAR_2<<7) | 0x0010, 0x3);
            else
                FUNC_1(VAR_1, (VAR_2<<7) | 0x0010, 0x1);
        }
        else
        {

            FUNC_1(VAR_1, (VAR_2<<7) | 0x0010, 0x3);
        }
    }

    if (VAR_5 & (1<<10))
    {
        VAR_4.s.status = 1;
        if (VAR_5 & (1<<15))
            VAR_4.s.speed = 2;
        else
            VAR_4.s.speed = 1;
    }
    else
    {
        VAR_4.s.speed = 2;
        VAR_4.s.status = 0;
    }
    VAR_4.s.duplex = ((VAR_5 & (1<<13)) != 0);

    return VAR_4;
}
