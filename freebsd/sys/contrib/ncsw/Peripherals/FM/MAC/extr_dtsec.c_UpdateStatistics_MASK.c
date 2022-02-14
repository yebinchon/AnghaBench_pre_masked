
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct TYPE_4__ {int tdrp; int txpf; int tbca; int tmca; int tpkt; int tbyt; int tfcs; int rdrp; int rjbr; int rfrg; int rovr; int rund; int rcse; int rcde; int rflr; int raln; int rxpf; int rbca; int rmca; int rpkt; int rbyt; int trmgv; int trmax; int tr1k; int tr511; int tr255; int tr127; int tr64; } ;
struct TYPE_5__ {TYPE_1__ internalStatistics; int p_MemMap; } ;
typedef TYPE_2__ t_Dtsec ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 int FUNC_0 (int ,int*,int*) ;

__attribute__((used)) static void FUNC_1(t_Dtsec *VAR_32)
{
    uint32_t VAR_33, VAR_34;

    FUNC_0(VAR_32->p_MemMap, &VAR_33, &VAR_34);

    if (VAR_33)
    {
        if (VAR_33 & VAR_17)
            VAR_32->internalStatistics.tr64 += VAR_30;
        if (VAR_33 & VAR_14)
            VAR_32->internalStatistics.tr127 += VAR_30;
        if (VAR_33 & VAR_15)
            VAR_32->internalStatistics.tr255 += VAR_30;
        if (VAR_33 & VAR_16)
            VAR_32->internalStatistics.tr511 += VAR_30;
        if (VAR_33 & VAR_18)
            VAR_32->internalStatistics.tr1k += VAR_30;
        if (VAR_33 & VAR_19)
            VAR_32->internalStatistics.trmax += VAR_30;
        if (VAR_33 & VAR_20)
            VAR_32->internalStatistics.trmgv += VAR_30;
        if (VAR_33 & VAR_2)
            VAR_32->internalStatistics.rbyt += (uint64_t)VAR_31;
        if (VAR_33 & VAR_11)
            VAR_32->internalStatistics.rpkt += VAR_30;
        if (VAR_33 & VAR_9)
            VAR_32->internalStatistics.rmca += VAR_30;
        if (VAR_33 & VAR_1)
            VAR_32->internalStatistics.rbca += VAR_30;
        if (VAR_33 & VAR_13)
            VAR_32->internalStatistics.rxpf += VAR_29;
        if (VAR_33 & VAR_0)
            VAR_32->internalStatistics.raln += VAR_29;
        if (VAR_33 & VAR_6)
            VAR_32->internalStatistics.rflr += VAR_29;
        if (VAR_33 & VAR_3)
            VAR_32->internalStatistics.rcde += VAR_29;
        if (VAR_33 & VAR_4)
            VAR_32->internalStatistics.rcse += VAR_29;
        if (VAR_33 & VAR_12)
            VAR_32->internalStatistics.rund += VAR_29;
        if (VAR_33 & VAR_10)
            VAR_32->internalStatistics.rovr += VAR_29;
        if (VAR_33 & VAR_7)
            VAR_32->internalStatistics.rfrg += VAR_29;
        if (VAR_33 & VAR_8)
            VAR_32->internalStatistics.rjbr += VAR_29;
        if (VAR_33 & VAR_5)
            VAR_32->internalStatistics.rdrp += VAR_29;
    }
    if (VAR_34)
    {
        if (VAR_34 & VAR_24)
            VAR_32->internalStatistics.tfcs += VAR_28;
        if (VAR_34 & VAR_22)
            VAR_32->internalStatistics.tbyt += (uint64_t)VAR_31;
        if (VAR_34 & VAR_26)
            VAR_32->internalStatistics.tpkt += VAR_30;
        if (VAR_34 & VAR_25)
            VAR_32->internalStatistics.tmca += VAR_30;
        if (VAR_34 & VAR_21)
            VAR_32->internalStatistics.tbca += VAR_30;
        if (VAR_34 & VAR_27)
            VAR_32->internalStatistics.txpf += VAR_29;
        if (VAR_34 & VAR_23)
            VAR_32->internalStatistics.tdrp += VAR_29;
    }
}
