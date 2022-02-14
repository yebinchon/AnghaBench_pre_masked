
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_7__ {int head; int tail; TYPE_1__* entry; } ;
typedef TYPE_2__ cvmx_usb_tx_fifo_t ;
struct TYPE_8__ {int index; } ;
typedef TYPE_3__ cvmx_usb_internal_state_t ;
struct TYPE_6__ {int address; int size; int channel; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 int FUNC_4 (int ,int ) ;
 int * FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int,int ) ;

__attribute__((used)) static int FUNC_8(cvmx_usb_internal_state_t *VAR_1, cvmx_usb_tx_fifo_t *VAR_2, int VAR_3)
{
    FUNC_1();
    FUNC_2("%p", VAR_1);
    FUNC_2("%p", VAR_2);
    FUNC_2("%d", VAR_3);



    while (VAR_3 && (VAR_2->head != VAR_2->tail))
    {
        int VAR_4 = VAR_2->tail;
        const uint32_t *VAR_5 = FUNC_5(VAR_2->entry[VAR_4].address);
        uint64_t VAR_6 = FUNC_4(VAR_2->entry[VAR_4].channel, VAR_1->index) ^ 4;
        int VAR_7 = VAR_3;


        if (VAR_2->entry[VAR_4].size <= VAR_3)
        {
            VAR_7 = VAR_2->entry[VAR_4].size;
            VAR_2->tail++;
            if (VAR_2->tail > VAR_0)
                VAR_2->tail = 0;
        }


        VAR_3 -= VAR_7;
        VAR_2->entry[VAR_4].address += VAR_7 * 4;
        VAR_2->entry[VAR_4].size -= VAR_7;



        while (VAR_7 > 3)
        {
            FUNC_7(VAR_6, *VAR_5++);
            FUNC_7(VAR_6, *VAR_5++);
            FUNC_7(VAR_6, *VAR_5++);
            FUNC_6(FUNC_0(VAR_1->index));
            VAR_7 -= 3;
        }
        FUNC_7(VAR_6, *VAR_5++);
        if (--VAR_7)
        {
            FUNC_7(VAR_6, *VAR_5++);
            if (--VAR_7)
                FUNC_7(VAR_6, *VAR_5++);
        }
        FUNC_6(FUNC_0(VAR_1->index));
    }
    FUNC_3(VAR_2->head != VAR_2->tail);
}
