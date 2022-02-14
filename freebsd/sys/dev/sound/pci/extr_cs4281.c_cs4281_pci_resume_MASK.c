
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int dma_active; int fmt; int blksz; int spd; } ;
struct sc_info {TYPE_1__ pch; TYPE_1__ rch; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (struct sc_info*) ;
 int FUNC_2 (struct sc_info*,int ) ;
 int FUNC_3 (int *,TYPE_1__*,int ) ;
 int FUNC_4 (int *,TYPE_1__*,int ) ;
 int FUNC_5 (int *,TYPE_1__*,int ) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ) ;
 struct sc_info* FUNC_8 (int ) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_1)
{
    struct sc_info *VAR_2;

    VAR_2 = FUNC_8(VAR_1);


    FUNC_2(VAR_2, 0);


    if (FUNC_1(VAR_2) == -1) {
        FUNC_6(VAR_1, "unable to reinitialize the card\n");
        return VAR_0;
    }


    if (FUNC_7(VAR_1) == -1) {
 FUNC_6(VAR_1, "unable to reinitialize the mixer\n");
 return VAR_0;
    }


    FUNC_5(((void*)0), &VAR_2->rch, VAR_2->rch.spd);
    FUNC_3(((void*)0), &VAR_2->rch, VAR_2->rch.blksz);
    FUNC_4(((void*)0), &VAR_2->rch, VAR_2->rch.fmt);
    FUNC_0(&VAR_2->rch, VAR_2->rch.dma_active);

    FUNC_5(((void*)0), &VAR_2->pch, VAR_2->pch.spd);
    FUNC_3(((void*)0), &VAR_2->pch, VAR_2->pch.blksz);
    FUNC_4(((void*)0), &VAR_2->pch, VAR_2->pch.fmt);
    FUNC_0(&VAR_2->pch, VAR_2->pch.dma_active);

    return 0;
}
