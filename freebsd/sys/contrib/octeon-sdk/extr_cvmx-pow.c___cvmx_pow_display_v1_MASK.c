
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_9__ ;
typedef struct TYPE_32__ TYPE_8__ ;
typedef struct TYPE_31__ TYPE_7__ ;
typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;
typedef struct TYPE_24__ TYPE_16__ ;
typedef struct TYPE_23__ TYPE_15__ ;
typedef struct TYPE_22__ TYPE_14__ ;
typedef struct TYPE_21__ TYPE_13__ ;
typedef struct TYPE_20__ TYPE_12__ ;
typedef struct TYPE_19__ TYPE_11__ ;
typedef struct TYPE_18__ TYPE_10__ ;


typedef size_t uint8_t ;
typedef int entry_list ;
struct TYPE_24__ {TYPE_15__** smemload; TYPE_11__** sindexload; TYPE_6__** sstatus; } ;
typedef TYPE_16__ __cvmx_pow_dump_t ;
struct TYPE_33__ {int rmt_head; int rmt_one; int rmt_val; scalar_t__ rmt_is_head; } ;
struct TYPE_32__ {int loc_tail; int loc_head; int loc_one; int loc_val; int free_tail; int free_head; int free_one; int free_val; } ;
struct TYPE_31__ {int des_tail; int des_head; int des_one; int des_val; int nosched_tail; int nosched_head; int nosched_one; int nosched_val; } ;
struct TYPE_29__ {int pend_wqp; } ;
struct TYPE_28__ {int pend_switch; int pend_switch_full; int pend_switch_null; int pend_desched; int pend_desched_switch; int pend_nosched; int pend_grp; int pend_null_rd; int pend_nosched_clr; int pend_index; scalar_t__ pend_type; int pend_tag; scalar_t__ pend_new_work_wait; scalar_t__ pend_new_work; } ;
struct TYPE_27__ {scalar_t__ tag_type; int tag; int index; int grp; int link_index; scalar_t__ tail; scalar_t__ head; } ;
struct TYPE_26__ {int revlink_index; } ;
struct TYPE_25__ {int wqp; } ;
struct TYPE_30__ {TYPE_5__ s_sstatus1; TYPE_4__ s_sstatus0; TYPE_3__ s_sstatus2; TYPE_2__ s_sstatus3; TYPE_1__ s_sstatus4; } ;
struct TYPE_22__ {int nosched; scalar_t__ pend_type; int pend_tag; scalar_t__ pend_switch; } ;
struct TYPE_21__ {scalar_t__ tag_type; int tag; int grp; int next_index; scalar_t__ tail; } ;
struct TYPE_20__ {int wqp; } ;
struct TYPE_23__ {TYPE_14__ s_smemload2; TYPE_13__ s_smemload0; TYPE_12__ s_smemload1; } ;
struct TYPE_18__ {int rmt_tail; } ;
struct TYPE_19__ {TYPE_10__ sindexload3; TYPE_9__ sindexload2; TYPE_8__ sindexload0; TYPE_7__ sindexload1; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 char* FUNC_1 (scalar_t__) ;
 int FUNC_2 (char const*,int,int ,int ,int ,int ) ;
 int FUNC_3 (int,TYPE_16__*,size_t*,int ,int ,int ,int ) ;
 int FUNC_4 (int,scalar_t__,size_t*) ;
 char** VAR_6 ;
 int FUNC_5 (char*) ;
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
        FUNC_5("cvmx_pow_dump: Buffer too small\n");
        return;
    }

    FUNC_8(VAR_14, 0, sizeof(VAR_14));
    VAR_11 = FUNC_6();


    FUNC_3(VAR_2, VAR_9, VAR_14,
                                     VAR_9->sindexload[0][0].sindexload0.free_val,
                                     VAR_9->sindexload[0][0].sindexload0.free_one,
                                     VAR_9->sindexload[0][0].sindexload0.free_head,
                                     VAR_9->sindexload[0][0].sindexload0.free_tail);


    for (VAR_12=0; VAR_12<VAR_11; VAR_12++)
    {
        const int VAR_15 = 1;
        const int VAR_16 = 2;
        const int VAR_17 = 4;
        FUNC_9("Core %d State:  tag=%s,0x%08x", VAR_12,
               FUNC_1(VAR_9->sstatus[VAR_12][VAR_16].s_sstatus2.tag_type),
               VAR_9->sstatus[VAR_12][VAR_16].s_sstatus2.tag);
        if (VAR_9->sstatus[VAR_12][VAR_16].s_sstatus2.tag_type != VAR_5)
        {
            FUNC_4(VAR_9->sstatus[VAR_12][VAR_16].s_sstatus2.index, VAR_0 + VAR_12, VAR_14);
            FUNC_9(" grp=%d", VAR_9->sstatus[VAR_12][VAR_16].s_sstatus2.grp);
            FUNC_9(" wqp=0x%016llx", FUNC_0(VAR_9->sstatus[VAR_12][VAR_16|VAR_17].s_sstatus4.wqp));
            FUNC_9(" index=%d", VAR_9->sstatus[VAR_12][VAR_16].s_sstatus2.index);
            if (VAR_9->sstatus[VAR_12][VAR_16].s_sstatus2.head)
                FUNC_9(" head");
            else
                FUNC_9(" prev=%d", VAR_9->sstatus[VAR_12][VAR_16|VAR_15].s_sstatus3.revlink_index);
            if (VAR_9->sstatus[VAR_12][VAR_16].s_sstatus2.tail)
                FUNC_9(" tail");
            else
                FUNC_9(" next=%d", VAR_9->sstatus[VAR_12][VAR_16].s_sstatus2.link_index);
        }

        if (VAR_9->sstatus[VAR_12][0].s_sstatus0.pend_switch)
        {
            FUNC_9(" pend_switch=%d", VAR_9->sstatus[VAR_12][0].s_sstatus0.pend_switch);
            FUNC_9(" pend_switch_full=%d", VAR_9->sstatus[VAR_12][0].s_sstatus0.pend_switch_full);
            FUNC_9(" pend_switch_null=%d", VAR_9->sstatus[VAR_12][0].s_sstatus0.pend_switch_null);
        }

        if (VAR_9->sstatus[VAR_12][0].s_sstatus0.pend_desched)
        {
            FUNC_9(" pend_desched=%d", VAR_9->sstatus[VAR_12][0].s_sstatus0.pend_desched);
            FUNC_9(" pend_desched_switch=%d", VAR_9->sstatus[VAR_12][0].s_sstatus0.pend_desched_switch);
            FUNC_9(" pend_nosched=%d", VAR_9->sstatus[VAR_12][0].s_sstatus0.pend_nosched);
            if (VAR_9->sstatus[VAR_12][0].s_sstatus0.pend_desched_switch)
                FUNC_9(" pend_grp=%d", VAR_9->sstatus[VAR_12][0].s_sstatus0.pend_grp);
        }

        if (VAR_9->sstatus[VAR_12][0].s_sstatus0.pend_new_work)
        {
            if (VAR_9->sstatus[VAR_12][0].s_sstatus0.pend_new_work_wait)
                FUNC_9(" (Waiting for work)");
            else
                FUNC_9(" (Getting work)");
        }
        if (VAR_9->sstatus[VAR_12][0].s_sstatus0.pend_null_rd)
            FUNC_9(" pend_null_rd=%d", VAR_9->sstatus[VAR_12][0].s_sstatus0.pend_null_rd);
        if (VAR_9->sstatus[VAR_12][0].s_sstatus0.pend_nosched_clr)
        {
            FUNC_9(" pend_nosched_clr=%d", VAR_9->sstatus[VAR_12][0].s_sstatus0.pend_nosched_clr);
            FUNC_9(" pend_index=%d", VAR_9->sstatus[VAR_12][0].s_sstatus0.pend_index);
        }
        if (VAR_9->sstatus[VAR_12][0].s_sstatus0.pend_switch ||
            (VAR_9->sstatus[VAR_12][0].s_sstatus0.pend_desched &&
            VAR_9->sstatus[VAR_12][0].s_sstatus0.pend_desched_switch))
        {
            FUNC_9(" pending tag=%s,0x%08x",
                   FUNC_1(VAR_9->sstatus[VAR_12][0].s_sstatus0.pend_type),
                   VAR_9->sstatus[VAR_12][0].s_sstatus0.pend_tag);
        }
        if (VAR_9->sstatus[VAR_12][0].s_sstatus0.pend_nosched_clr)
            FUNC_9(" pend_wqp=0x%016llx\n", FUNC_0(VAR_9->sstatus[VAR_12][VAR_17].s_sstatus1.pend_wqp));
        FUNC_9("\n");
    }


    FUNC_3(VAR_4, VAR_9, VAR_14,
                            VAR_9->sindexload[0][2].sindexload1.nosched_val,
                            VAR_9->sindexload[0][2].sindexload1.nosched_one,
                            VAR_9->sindexload[0][2].sindexload1.nosched_head,
                            VAR_9->sindexload[0][2].sindexload1.nosched_tail);
    for (VAR_13=0; VAR_13<16; VAR_13++)
    {
        FUNC_3(VAR_1 + VAR_13, VAR_9, VAR_14,
                                VAR_9->sindexload[VAR_13][2].sindexload1.des_val,
                                VAR_9->sindexload[VAR_13][2].sindexload1.des_one,
                                VAR_9->sindexload[VAR_13][2].sindexload1.des_head,
                                VAR_9->sindexload[VAR_13][2].sindexload1.des_tail);
    }


    for (VAR_13=0; VAR_13<8; VAR_13++)
    {
        FUNC_3(VAR_3 + VAR_13, VAR_9, VAR_14,
                                VAR_9->sindexload[VAR_13][0].sindexload0.loc_val,
                                VAR_9->sindexload[VAR_13][0].sindexload0.loc_one,
                                VAR_9->sindexload[VAR_13][0].sindexload0.loc_head,
                                VAR_9->sindexload[VAR_13][0].sindexload0.loc_tail);
    }


    for (VAR_13=0; VAR_13<8; VAR_13++)
    {
        const char *VAR_18;
        if (VAR_9->sindexload[VAR_13][1].sindexload2.rmt_is_head)
            VAR_18 = "Queue %da Memory (is head)";
        else
            VAR_18 = "Queue %da Memory";
        FUNC_2(VAR_18, VAR_13,
                                VAR_9->sindexload[VAR_13][1].sindexload2.rmt_val,
                                VAR_9->sindexload[VAR_13][1].sindexload2.rmt_one,
                                VAR_9->sindexload[VAR_13][1].sindexload2.rmt_head,
                                VAR_9->sindexload[VAR_13][3].sindexload3.rmt_tail);
        if (VAR_9->sindexload[VAR_13+8][1].sindexload2.rmt_is_head)
            VAR_18 = "Queue %db Memory (is head)";
        else
            VAR_18 = "Queue %db Memory";
        FUNC_2(VAR_18, VAR_13,
                                VAR_9->sindexload[VAR_13+8][1].sindexload2.rmt_val,
                                VAR_9->sindexload[VAR_13+8][1].sindexload2.rmt_one,
                                VAR_9->sindexload[VAR_13+8][1].sindexload2.rmt_head,
                                VAR_9->sindexload[VAR_13+8][3].sindexload3.rmt_tail);
    }




    for (VAR_13=0; VAR_13<VAR_10; VAR_13++)
    {
        FUNC_9("Entry %d(%-10s): tag=%s,0x%08x grp=%d wqp=0x%016llx", VAR_13,
               VAR_6[VAR_14[VAR_13]],
               FUNC_1(VAR_9->smemload[VAR_13][0].s_smemload0.tag_type),
               VAR_9->smemload[VAR_13][0].s_smemload0.tag,
               VAR_9->smemload[VAR_13][0].s_smemload0.grp,
               FUNC_0(VAR_9->smemload[VAR_13][2].s_smemload1.wqp));
        if (VAR_9->smemload[VAR_13][0].s_smemload0.tail)
            FUNC_9(" tail");
        else
            FUNC_9(" next=%d", VAR_9->smemload[VAR_13][0].s_smemload0.next_index);
        if (VAR_14[VAR_13] >= VAR_1)
        {
            FUNC_9(" nosched=%d", VAR_9->smemload[VAR_13][1].s_smemload2.nosched);
            if (VAR_9->smemload[VAR_13][1].s_smemload2.pend_switch)
            {
                FUNC_9(" pending tag=%s,0x%08x",
                       FUNC_1(VAR_9->smemload[VAR_13][1].s_smemload2.pend_type),
                       VAR_9->smemload[VAR_13][1].s_smemload2.pend_tag);
            }
        }
        FUNC_9("\n");
    }
}
