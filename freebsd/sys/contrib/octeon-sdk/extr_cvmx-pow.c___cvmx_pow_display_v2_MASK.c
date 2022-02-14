
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_9__ ;
typedef struct TYPE_30__ TYPE_8__ ;
typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_15__ ;
typedef struct TYPE_21__ TYPE_14__ ;
typedef struct TYPE_20__ TYPE_13__ ;
typedef struct TYPE_19__ TYPE_12__ ;
typedef struct TYPE_18__ TYPE_11__ ;
typedef struct TYPE_17__ TYPE_10__ ;


typedef size_t uint8_t ;
typedef int entry_list ;
struct TYPE_22__ {TYPE_14__** smemload; TYPE_9__** sindexload; TYPE_7__** sstatus; } ;
typedef TYPE_15__ __cvmx_pow_dump_t ;
struct TYPE_30__ {int queue_tail; int queue_head; int queue_one; int queue_val; } ;
struct TYPE_23__ {int queue_val; int queue_one; int queue_head; int queue_tail; int qnum_head; int qnum_tail; } ;
struct TYPE_31__ {TYPE_8__ sindexload0_cn68xx; TYPE_1__ sindexload1_cn68xx; } ;
struct TYPE_28__ {int pend_wqp; scalar_t__ pend_nosched_clr; } ;
struct TYPE_27__ {int pend_switch; int pend_desched; int pend_nosched; int pend_alloc_we; int pend_nosched_clr; int pend_index; scalar_t__ pend_type; int pend_tag; scalar_t__ pend_get_work_wait; scalar_t__ pend_get_work; } ;
struct TYPE_26__ {int revlink_index; int link_index; scalar_t__ tail; scalar_t__ head; } ;
struct TYPE_25__ {scalar_t__ tag_type; int tag; int index; int grp; } ;
struct TYPE_24__ {int wqp; } ;
struct TYPE_29__ {TYPE_6__ s_sstatus1_cn68xx; TYPE_5__ s_sstatus0_cn68xx; TYPE_4__ s_sstatus4_cn68xx; TYPE_3__ s_sstatus2_cn68xx; TYPE_2__ s_sstatus3_cn68xx; } ;
struct TYPE_20__ {scalar_t__ pend_type; int pend_tag; scalar_t__ pend_switch; } ;
struct TYPE_19__ {int grp; int wqp; int nosched; } ;
struct TYPE_18__ {int fwd_index; } ;
struct TYPE_17__ {scalar_t__ tag_type; int tag; scalar_t__ tail; } ;
struct TYPE_21__ {TYPE_13__ s_smemload2_cn68xx; TYPE_12__ s_smemload1_cn68xx; TYPE_11__ s_smemload3_cn68xx; TYPE_10__ s_smemload0_cn68xx; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 char* FUNC_1 (scalar_t__) ;
 int FUNC_2 (char const*,int,int ,int ,int ,int ) ;
 int FUNC_3 (int,TYPE_15__*,size_t*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_4 (int,scalar_t__,size_t*) ;
 char** VAR_6 ;
 int FUNC_5 (char*,int,int) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (size_t*,int ,int) ;
 int FUNC_9 (char*,...) ;

void FUNC_10(void *VAR_7, int VAR_8)
{
    __cvmx_pow_dump_t *VAR_9 = (__cvmx_pow_dump_t*)VAR_7;
    int VAR_10 = FUNC_7();
    int VAR_11;
    int VAR_12;
    int VAR_13;
    uint8_t VAR_14[2048];

    if (VAR_8 < (int)sizeof(__cvmx_pow_dump_t))
    {
        FUNC_5("cvmx_pow_dump: Buffer too small, pow_dump_t = 0x%x, buffer_size = 0x%x\n", (int)sizeof(__cvmx_pow_dump_t), VAR_8);
        return;
    }

    FUNC_8(VAR_14, 0, sizeof(VAR_14));
    VAR_11 = FUNC_6();


    {
        int VAR_15[3], VAR_16[3], VAR_17[3], VAR_18[3], VAR_19, VAR_20;
        int VAR_21;

        VAR_15[0] = VAR_9->sindexload[0][4].sindexload1_cn68xx.queue_val;
        VAR_15[1] = VAR_9->sindexload[0][5].sindexload1_cn68xx.queue_val;
        VAR_15[2] = VAR_9->sindexload[0][6].sindexload1_cn68xx.queue_val;
        VAR_16[0] = VAR_9->sindexload[0][4].sindexload1_cn68xx.queue_one;
        VAR_16[1] = VAR_9->sindexload[0][5].sindexload1_cn68xx.queue_one;
        VAR_16[2] = VAR_9->sindexload[0][6].sindexload1_cn68xx.queue_one;
        VAR_17[0] = VAR_9->sindexload[0][4].sindexload1_cn68xx.queue_head;
        VAR_17[1] = VAR_9->sindexload[0][5].sindexload1_cn68xx.queue_head;
        VAR_17[2] = VAR_9->sindexload[0][6].sindexload1_cn68xx.queue_head;
        VAR_18[0] = VAR_9->sindexload[0][4].sindexload1_cn68xx.queue_tail;
        VAR_18[1] = VAR_9->sindexload[0][5].sindexload1_cn68xx.queue_tail;
        VAR_18[2] = VAR_9->sindexload[0][6].sindexload1_cn68xx.queue_tail;
        VAR_19 = VAR_9->sindexload[0][4].sindexload1_cn68xx.qnum_head;
        VAR_20 = VAR_9->sindexload[0][4].sindexload1_cn68xx.qnum_tail;

        FUNC_9("Free List: qnum_head=%d, qnum_tail=%d\n", VAR_19, VAR_20);
        FUNC_9("Free0: valid=%d, one=%d, head=%llu, tail=%llu\n", VAR_15[0], VAR_16[0], FUNC_0(VAR_17[0]), FUNC_0(VAR_18[0]));
        FUNC_9("Free1: valid=%d, one=%d, head=%llu, tail=%llu\n", VAR_15[1], VAR_16[1], FUNC_0(VAR_17[1]), FUNC_0(VAR_18[1]));
        FUNC_9("Free2: valid=%d, one=%d, head=%llu, tail=%llu\n", VAR_15[2], VAR_16[2], FUNC_0(VAR_17[2]), FUNC_0(VAR_18[2]));

        VAR_21=VAR_19;
        while (VAR_15[0] || VAR_15[1] || VAR_15[2])
        {
            int VAR_22 = VAR_21 % 3;

            if (VAR_17[VAR_22] == VAR_18[VAR_22])
                VAR_15[VAR_22] = 0;

            if (FUNC_4(VAR_17[VAR_22], VAR_2, VAR_14))
                break;
            VAR_17[VAR_22] = VAR_9->smemload[VAR_17[VAR_22]][4].s_smemload3_cn68xx.fwd_index;

            VAR_21++;
        }
    }


    for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++)
    {
        int VAR_23 = 1;
        int VAR_24 = 2;
        int VAR_25 = 3;
        int VAR_26 = 4;
        int VAR_27 = 5;

        FUNC_9("Core %d State: tag=%s,0x%08x", VAR_12,
               FUNC_1(VAR_9->sstatus[VAR_12][VAR_25].s_sstatus2_cn68xx.tag_type),
               VAR_9->sstatus[VAR_12][VAR_25].s_sstatus2_cn68xx.tag);
        if (VAR_9->sstatus[VAR_12][VAR_25].s_sstatus2_cn68xx.tag_type != VAR_5)
        {
            FUNC_4(VAR_9->sstatus[VAR_12][VAR_25].s_sstatus2_cn68xx.index, VAR_0 + VAR_12, VAR_14);
            FUNC_9(" grp=%d", VAR_9->sstatus[VAR_12][VAR_25].s_sstatus2_cn68xx.grp);
            FUNC_9(" wqp=0x%016llx", FUNC_0(VAR_9->sstatus[VAR_12][VAR_26].s_sstatus3_cn68xx.wqp));
            FUNC_9(" index=%d", VAR_9->sstatus[VAR_12][VAR_25].s_sstatus2_cn68xx.index);
            if (VAR_9->sstatus[VAR_12][VAR_27].s_sstatus4_cn68xx.head)
                FUNC_9(" head");
            else
                FUNC_9(" prev=%d", VAR_9->sstatus[VAR_12][VAR_27].s_sstatus4_cn68xx.revlink_index);
            if (VAR_9->sstatus[VAR_12][VAR_27].s_sstatus4_cn68xx.tail)
                FUNC_9(" tail");
            else
                FUNC_9(" next=%d", VAR_9->sstatus[VAR_12][VAR_27].s_sstatus4_cn68xx.link_index);
        }
        if (VAR_9->sstatus[VAR_12][VAR_23].s_sstatus0_cn68xx.pend_switch)
        {
            FUNC_9(" pend_switch=%d", VAR_9->sstatus[VAR_12][VAR_23].s_sstatus0_cn68xx.pend_switch);
        }

        if (VAR_9->sstatus[VAR_12][VAR_23].s_sstatus0_cn68xx.pend_desched)
        {
            FUNC_9(" pend_desched=%d", VAR_9->sstatus[VAR_12][VAR_23].s_sstatus0_cn68xx.pend_desched);
            FUNC_9(" pend_nosched=%d", VAR_9->sstatus[VAR_12][VAR_23].s_sstatus0_cn68xx.pend_nosched);
        }
        if (VAR_9->sstatus[VAR_12][VAR_23].s_sstatus0_cn68xx.pend_get_work)
        {
            if (VAR_9->sstatus[VAR_12][VAR_23].s_sstatus0_cn68xx.pend_get_work_wait)
                FUNC_9(" (Waiting for work)");
            else
                FUNC_9(" (Getting work)");
        }
        if (VAR_9->sstatus[VAR_12][VAR_23].s_sstatus0_cn68xx.pend_alloc_we)
            FUNC_9(" pend_alloc_we=%d", VAR_9->sstatus[VAR_12][VAR_23].s_sstatus0_cn68xx.pend_alloc_we);
        if (VAR_9->sstatus[VAR_12][VAR_23].s_sstatus0_cn68xx.pend_nosched_clr)
        {
            FUNC_9(" pend_nosched_clr=%d", VAR_9->sstatus[VAR_12][VAR_23].s_sstatus0_cn68xx.pend_nosched_clr);
            FUNC_9(" pend_index=%d", VAR_9->sstatus[VAR_12][VAR_23].s_sstatus0_cn68xx.pend_index);
        }
        if (VAR_9->sstatus[VAR_12][VAR_23].s_sstatus0_cn68xx.pend_switch)
        {
            FUNC_9(" pending tag=%s,0x%08x",
                   FUNC_1(VAR_9->sstatus[VAR_12][VAR_23].s_sstatus0_cn68xx.pend_type),
                   VAR_9->sstatus[VAR_12][VAR_23].s_sstatus0_cn68xx.pend_tag);
        }
        if (VAR_9->sstatus[VAR_12][VAR_24].s_sstatus1_cn68xx.pend_nosched_clr)
            FUNC_9(" pend_wqp=0x%016llx\n", FUNC_0(VAR_9->sstatus[VAR_12][VAR_24].s_sstatus1_cn68xx.pend_wqp));
        FUNC_9("\n");
    }


    FUNC_3(VAR_4, VAR_9, VAR_14,
                            VAR_9->sindexload[0][3].sindexload0_cn68xx.queue_val,
                            VAR_9->sindexload[0][3].sindexload0_cn68xx.queue_one,
                            VAR_9->sindexload[0][3].sindexload0_cn68xx.queue_head,
                            VAR_9->sindexload[0][3].sindexload0_cn68xx.queue_tail);
    for (VAR_13=0; VAR_13<64; VAR_13++)
    {
        FUNC_3(VAR_1 + VAR_13, VAR_9, VAR_14,
                                VAR_9->sindexload[VAR_13][2].sindexload0_cn68xx.queue_val,
                                VAR_9->sindexload[VAR_13][2].sindexload0_cn68xx.queue_one,
                                VAR_9->sindexload[VAR_13][2].sindexload0_cn68xx.queue_head,
                                VAR_9->sindexload[VAR_13][2].sindexload0_cn68xx.queue_tail);
    }


    for (VAR_13=0; VAR_13<8; VAR_13++)
    {
        FUNC_3(VAR_3 + VAR_13, VAR_9, VAR_14,
                                VAR_9->sindexload[VAR_13][1].sindexload0_cn68xx.queue_val,
                                VAR_9->sindexload[VAR_13][1].sindexload0_cn68xx.queue_one,
                                VAR_9->sindexload[VAR_13][1].sindexload0_cn68xx.queue_head,
                                VAR_9->sindexload[VAR_13][1].sindexload0_cn68xx.queue_tail);
    }


    for (VAR_13=0; VAR_13<8; VAR_13++)
    {
        const char *VAR_28;
        if (VAR_9->sindexload[VAR_13][1].sindexload0_cn68xx.queue_head)
            VAR_28 = "Queue %da Memory (is head)";
        else
            VAR_28 = "Queue %da Memory";
        FUNC_2(VAR_28, VAR_13,
                                VAR_9->sindexload[VAR_13][1].sindexload0_cn68xx.queue_val,
                                VAR_9->sindexload[VAR_13][1].sindexload0_cn68xx.queue_one,
                                VAR_9->sindexload[VAR_13][1].sindexload0_cn68xx.queue_head,
                                VAR_9->sindexload[VAR_13][1].sindexload0_cn68xx.queue_tail);
        if (VAR_9->sindexload[VAR_13+8][1].sindexload0_cn68xx.queue_head)
            VAR_28 = "Queue %db Memory (is head)";
        else
            VAR_28 = "Queue %db Memory";
        FUNC_2(VAR_28, VAR_13,
                                VAR_9->sindexload[VAR_13+8][1].sindexload0_cn68xx.queue_val,
                                VAR_9->sindexload[VAR_13+8][1].sindexload0_cn68xx.queue_one,
                                VAR_9->sindexload[VAR_13+8][1].sindexload0_cn68xx.queue_head,
                                VAR_9->sindexload[VAR_13+8][1].sindexload0_cn68xx.queue_tail);
    }




    for (VAR_13=0; VAR_13<VAR_10; VAR_13++)
    {
        FUNC_9("Entry %d(%-10s): tag=%s,0x%08x grp=%d wqp=0x%016llx", VAR_13,
               VAR_6[VAR_14[VAR_13]],
               FUNC_1(VAR_9->smemload[VAR_13][1].s_smemload0_cn68xx.tag_type),
               VAR_9->smemload[VAR_13][1].s_smemload0_cn68xx.tag,
               VAR_9->smemload[VAR_13][2].s_smemload1_cn68xx.grp,
               FUNC_0(VAR_9->smemload[VAR_13][2].s_smemload1_cn68xx.wqp));
        if (VAR_9->smemload[VAR_13][1].s_smemload0_cn68xx.tail)
            FUNC_9(" tail");
        else
            FUNC_9(" next=%d", VAR_9->smemload[VAR_13][4].s_smemload3_cn68xx.fwd_index);
        if (VAR_14[VAR_13] >= VAR_1)
        {
            FUNC_9(" prev=%d", VAR_9->smemload[VAR_13][4].s_smemload3_cn68xx.fwd_index);
            FUNC_9(" nosched=%d", VAR_9->smemload[VAR_13][1].s_smemload1_cn68xx.nosched);
            if (VAR_9->smemload[VAR_13][3].s_smemload2_cn68xx.pend_switch)
            {
                FUNC_9(" pending tag=%s,0x%08x",
                       FUNC_1(VAR_9->smemload[VAR_13][3].s_smemload2_cn68xx.pend_type),
                       VAR_9->smemload[VAR_13][3].s_smemload2_cn68xx.pend_tag);
            }
        }
        FUNC_9("\n");
    }
}
