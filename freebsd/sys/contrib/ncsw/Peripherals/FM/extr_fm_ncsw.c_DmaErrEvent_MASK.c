
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_5__ {int h_App; int (* f_Exception ) (int ,int ) ;TYPE_1__* p_FmStateStruct; int (* f_BusError ) (int ,scalar_t__,size_t,int ,size_t,scalar_t__) ;struct fman_dma_regs* p_FmDmaRegs; } ;
typedef TYPE_2__ t_Fm ;
struct fman_dma_regs {int dummy; } ;
struct TYPE_4__ {scalar_t__* portsTypes; } ;


 int FUNC_0 (int) ;
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
 int FUNC_1 (size_t,size_t) ;
 int FUNC_2 (int,size_t,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_3 (struct fman_dma_regs*) ;
 int FUNC_4 (struct fman_dma_regs*) ;
 int FUNC_5 (struct fman_dma_regs*) ;
 int FUNC_6 (int ,scalar_t__,size_t,int ,size_t,scalar_t__) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ) ;

__attribute__((used)) static void FUNC_11(t_Fm *VAR_15)
{
    uint32_t VAR_16, VAR_17;
    uint8_t VAR_18;
    uint8_t VAR_19;
    uint8_t VAR_20;
    uint16_t VAR_21;
    struct fman_dma_regs *VAR_22 = VAR_15->p_FmDmaRegs;

    VAR_16 = FUNC_5(VAR_22);

    if (VAR_16 & VAR_0)
    {
        VAR_17 = FUNC_4(VAR_22);
        VAR_19 = (uint8_t)(((VAR_17 & VAR_6) >> VAR_7));
        FUNC_0(FUNC_2(1, VAR_19, 63));
        FUNC_1(VAR_20, VAR_19);
        VAR_18 = (uint8_t)((VAR_17 & VAR_8) >> VAR_9);
        VAR_21 = (uint16_t)(VAR_17 & VAR_5);
        FUNC_0(VAR_15->p_FmStateStruct->portsTypes[VAR_19] != VAR_14);
        VAR_15->f_BusError(VAR_15->h_App,
                         VAR_15->p_FmStateStruct->portsTypes[VAR_19],
                         VAR_20,
                         FUNC_3(VAR_22),
                         VAR_18,
                         VAR_21);
    }
        if (VAR_16 & VAR_1)
            VAR_15->f_Exception(VAR_15->h_App, VAR_12);
        if (VAR_16 & VAR_3)
            VAR_15->f_Exception(VAR_15->h_App, VAR_11);
        if (VAR_16 & VAR_4)
            VAR_15->f_Exception(VAR_15->h_App, VAR_13);
        if (VAR_16 & VAR_2)
            VAR_15->f_Exception(VAR_15->h_App, VAR_10);
    }
