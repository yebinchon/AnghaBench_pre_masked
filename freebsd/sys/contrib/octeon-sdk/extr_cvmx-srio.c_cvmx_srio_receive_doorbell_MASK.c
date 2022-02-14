
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_7__ {int src_id; int priority; int id16; int dest_id; int data; } ;
struct TYPE_8__ {TYPE_2__ s; void* u64; } ;
typedef TYPE_3__ cvmx_sriox_rx_bell_t ;
struct TYPE_6__ {int seq; int count; } ;
struct TYPE_9__ {TYPE_1__ s; void* u64; } ;
typedef TYPE_4__ cvmx_sriox_rx_bell_seq_t ;
typedef int cvmx_srio_doorbell_status_t ;
struct TYPE_10__ {int flags; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_5__* VAR_3 ;
 int FUNC_2 (char*,int,int ,int,int,int ) ;
 void* FUNC_3 (int ) ;

cvmx_srio_doorbell_status_t FUNC_4(int VAR_4,
        int *VAR_5, uint32_t *VAR_6, int *VAR_7, int *VAR_8,
        int *VAR_9, uint16_t *VAR_10)
{
    cvmx_sriox_rx_bell_seq_t VAR_11;
    cvmx_sriox_rx_bell_t VAR_12;


    VAR_11.u64 = FUNC_3(FUNC_1(VAR_4));
    if (!VAR_11.s.count)
        return VAR_1;


    VAR_12.u64 = FUNC_3(FUNC_0(VAR_4));
    *VAR_6 = VAR_11.s.seq;
    *VAR_7 = VAR_12.s.src_id;
    *VAR_8 = VAR_12.s.priority;
    *VAR_9 = VAR_12.s.id16;
    *VAR_10 = VAR_12.s.data;
    *VAR_5 = VAR_12.s.dest_id;

    if (VAR_3[VAR_4].flags & VAR_2)
        FUNC_2("SRIO%d: Receive doorbell sequence=0x%x, srcid=0x%x, priority=%d, data=0x%x\n",
            VAR_4, VAR_11.s.seq, VAR_12.s.src_id, VAR_12.s.priority, VAR_12.s.data);

    return VAR_0;
}
