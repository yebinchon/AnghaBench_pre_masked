
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int t_Error ;
struct TYPE_6__ {int majorRev; } ;
struct TYPE_7__ {TYPE_1__ fmRevInfo; } ;
struct TYPE_9__ {scalar_t__ macId; scalar_t__ addr; TYPE_3__* p_DtsecDriverParam; int f_Event; int f_Exception; TYPE_2__ fmMacControllerDriver; int enetMode; } ;
typedef TYPE_4__ t_Dtsec ;
struct TYPE_8__ {int preamble_len; scalar_t__ rx_prepend; scalar_t__ non_back_to_back_ipg1; scalar_t__ non_back_to_back_ipg2; scalar_t__ back_to_back_ipg; scalar_t__ halfdup_alt_backoff_val; scalar_t__ halfdup_retransmit; scalar_t__ halfdup_coll_window; scalar_t__ tbipa; scalar_t__ rx_len_check; scalar_t__ rx_ctrl_acc; scalar_t__ rx_flow; scalar_t__ rx_time_stamp_en; scalar_t__ tx_time_stamp_en; scalar_t__ halfdup_on; scalar_t__ rx_preamble; scalar_t__ tx_preamble; scalar_t__ loopback; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (int ,int ,char*) ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;

__attribute__((used)) static t_Error FUNC_2(t_Dtsec *VAR_17)
{
    if (FUNC_0(VAR_17->enetMode) >= VAR_16)
        FUNC_1(VAR_7, VAR_2, ("Ethernet 1G MAC driver only supports 1G or lower speeds"));
    if (VAR_17->macId >= VAR_6)
        FUNC_1(VAR_7, VAR_2, ("macId can not be greater than the number of 1G MACs"));
    if (VAR_17->addr == 0)
        FUNC_1(VAR_7, VAR_2, ("Ethernet MAC Must have a valid MAC Address"));
    if ((FUNC_0(VAR_17->enetMode) >= VAR_15) &&
        VAR_17->p_DtsecDriverParam->halfdup_on)
        FUNC_1(VAR_7, VAR_2, ("Ethernet MAC 1G can't work in half duplex"));
    if (VAR_17->p_DtsecDriverParam->halfdup_on && (VAR_17->p_DtsecDriverParam)->loopback)
        FUNC_1(VAR_7, VAR_2, ("LoopBack is not supported in halfDuplex mode"));





    if (((VAR_17->p_DtsecDriverParam)->tx_preamble || (VAR_17->p_DtsecDriverParam)->rx_preamble) &&( (VAR_17->p_DtsecDriverParam)->preamble_len != 0x7))
        FUNC_1(VAR_7, VAR_2, ("Preamble length should be 0x7 bytes"));
    if ((VAR_17->p_DtsecDriverParam)->halfdup_on &&
       (VAR_17->p_DtsecDriverParam->tx_time_stamp_en || VAR_17->p_DtsecDriverParam->rx_time_stamp_en))
        FUNC_1(VAR_7, VAR_2, ("dTSEC in half duplex mode has to be with 1588 timeStamping diable"));
    if ((VAR_17->p_DtsecDriverParam)->rx_flow && (VAR_17->p_DtsecDriverParam)->rx_ctrl_acc )
        FUNC_1(VAR_7, VAR_1, ("Receive control frame are not passed to the system memory so it can not be accept "));
    if ((VAR_17->p_DtsecDriverParam)->rx_prepend > VAR_11)
        FUNC_1(VAR_7, VAR_1, ("packetAlignmentPadding can't be greater than %d ",VAR_11 ));
    if (((VAR_17->p_DtsecDriverParam)->non_back_to_back_ipg1 > VAR_9) ||
        ((VAR_17->p_DtsecDriverParam)->non_back_to_back_ipg2 > VAR_9) ||
        ((VAR_17->p_DtsecDriverParam)->back_to_back_ipg > VAR_9))
        FUNC_1(VAR_7, VAR_1, ("Inter packet gap can't be greater than %d ",VAR_9 ));
    if ((VAR_17->p_DtsecDriverParam)->halfdup_alt_backoff_val > VAR_10)
        FUNC_1(VAR_7, VAR_1, ("alternateBackoffVal can't be greater than %d ",VAR_10 ));
    if ((VAR_17->p_DtsecDriverParam)->halfdup_retransmit > VAR_13)
        FUNC_1(VAR_7, VAR_1, ("maxRetransmission can't be greater than %d ",VAR_13 ));
    if ((VAR_17->p_DtsecDriverParam)->halfdup_coll_window > VAR_8)
        FUNC_1(VAR_7, VAR_1, ("collisionWindow can't be greater than %d ",VAR_8 ));



    if (VAR_17->p_DtsecDriverParam->tbipa > VAR_12)
        FUNC_1(VAR_7, VAR_3, ("PHY address (should be 0-%d)", VAR_12));
    if (!VAR_17->f_Exception)
        FUNC_1(VAR_7, VAR_0, ("uninitialized f_Exception"));
    if (!VAR_17->f_Event)
        FUNC_1(VAR_7, VAR_0, ("uninitialized f_Event"));






    return VAR_5;
}
