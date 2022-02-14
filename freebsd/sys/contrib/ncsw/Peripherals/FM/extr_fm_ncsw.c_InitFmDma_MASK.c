
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_8__ {scalar_t__ fmMuramPhysBaseAddr; void* camBaseAddr; TYPE_4__* p_FmDriverParam; int h_FmMuram; TYPE_2__* p_FmStateStruct; int p_FmDmaRegs; } ;
typedef TYPE_3__ t_Fm ;
typedef scalar_t__ t_Error ;
struct TYPE_9__ {int dma_cam_num_of_entries; scalar_t__ cam_base_addr; } ;
struct TYPE_6__ {int majorRev; } ;
struct TYPE_7__ {TYPE_1__ revInfo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,scalar_t__,int) ;
 int FUNC_1 (int ,int ) ;
 int VAR_5 ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,char*) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (int ,int ,scalar_t__) ;
 int FUNC_6 (scalar_t__,int) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ,TYPE_4__*) ;

__attribute__((used)) static t_Error FUNC_9(t_Fm *VAR_6)
{
    t_Error VAR_7;

    VAR_7 = (t_Error)FUNC_8(VAR_6->p_FmDmaRegs, VAR_6->p_FmDriverParam);
    if (VAR_7 != VAR_4)
        return VAR_7;


    VAR_6->camBaseAddr = FUNC_2(FUNC_0(VAR_6->h_FmMuram,
                                                      (uint32_t)(VAR_6->p_FmDriverParam->dma_cam_num_of_entries*VAR_1),
                                                      VAR_0));
    if (!VAR_6->camBaseAddr)
        FUNC_3(VAR_5, VAR_3, ("MURAM alloc for DMA CAM failed"));

    FUNC_5(FUNC_4(VAR_6->camBaseAddr),
                0,
                (uint32_t)(VAR_6->p_FmDriverParam->dma_cam_num_of_entries*VAR_1));

    if (VAR_6->p_FmStateStruct->revInfo.majorRev == 2)
    {
        FUNC_1(VAR_6->h_FmMuram, FUNC_4(VAR_6->camBaseAddr));

        VAR_6->camBaseAddr = FUNC_2(FUNC_0(VAR_6->h_FmMuram,
                                                          (uint32_t)(VAR_6->p_FmDriverParam->dma_cam_num_of_entries*72 + 128),
                                                          64));
        if (!VAR_6->camBaseAddr)
            FUNC_3(VAR_5, VAR_3, ("MURAM alloc for DMA CAM failed"));

        FUNC_5(FUNC_4(VAR_6->camBaseAddr),
                   0,
               (uint32_t)(VAR_6->p_FmDriverParam->dma_cam_num_of_entries*72 + 128));

        switch(VAR_6->p_FmDriverParam->dma_cam_num_of_entries)
        {
            case (8):
                FUNC_6(*(uint32_t*)VAR_6->camBaseAddr, 0xff000000);
                break;
            case (16):
                FUNC_6(*(uint32_t*)VAR_6->camBaseAddr, 0xffff0000);
                break;
            case (24):
                FUNC_6(*(uint32_t*)VAR_6->camBaseAddr, 0xffffff00);
                break;
            case (32):
                FUNC_6(*(uint32_t*)VAR_6->camBaseAddr, 0xffffffff);
                break;
            default:
                FUNC_3(VAR_5, VAR_2, ("wrong dma_cam_num_of_entries"));
        }
    }

    VAR_6->p_FmDriverParam->cam_base_addr =
                 (uint32_t)(FUNC_7(FUNC_4(VAR_6->camBaseAddr)) - VAR_6->fmMuramPhysBaseAddr);

    return VAR_4;
}
