
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int fmt; int spd; scalar_t__ dma_was_active; } ;
struct sc_info {int lock; TYPE_1__ rch; TYPE_1__ pch; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct sc_info*,TYPE_1__*) ;
 int FUNC_1 (struct sc_info*,TYPE_1__*) ;
 scalar_t__ FUNC_2 (struct sc_info*) ;
 int FUNC_3 (struct sc_info*,int ) ;
 int FUNC_4 (int *,TYPE_1__*,int ) ;
 int FUNC_5 (int *,TYPE_1__*,int ) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ) ;
 struct sc_info* FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int
FUNC_11(device_t VAR_1)
{
 struct sc_info *VAR_2 = FUNC_8(VAR_1);

 FUNC_9(VAR_2->lock);
 FUNC_3(VAR_2, 0);
 if (FUNC_2(VAR_2) != 0) {
  FUNC_6(VAR_1, "unable to reinitialize the card\n");
  FUNC_10(VAR_2->lock);
  return VAR_0;
 }

 if (FUNC_7(VAR_1) == -1) {
  FUNC_6(VAR_1, "unable to reinitialize the mixer\n");
  FUNC_10(VAR_2->lock);
                return VAR_0;
        }

 if (VAR_2->pch.dma_was_active) {
  FUNC_5(((void*)0), &VAR_2->pch, VAR_2->pch.spd);
  FUNC_4(((void*)0), &VAR_2->pch, VAR_2->pch.fmt);
  FUNC_0(VAR_2, &VAR_2->pch);
 }

 if (VAR_2->rch.dma_was_active) {
  FUNC_5(((void*)0), &VAR_2->rch, VAR_2->rch.spd);
  FUNC_4(((void*)0), &VAR_2->rch, VAR_2->rch.fmt);
  FUNC_1(VAR_2, &VAR_2->rch);
 }
 FUNC_10(VAR_2->lock);
 return 0;
}
