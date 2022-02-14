
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ dma_was_active; } ;
struct TYPE_3__ {scalar_t__ dma_was_active; } ;
struct sc_info {TYPE_2__ pch; TYPE_1__ rch; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 struct sc_info* FUNC_2 (int ) ;
 int FUNC_3 (struct sc_info*) ;
 int FUNC_4 (struct sc_info*) ;
 int FUNC_5 (struct sc_info*,int ) ;
 int FUNC_6 (int ,TYPE_2__*,int ) ;
 int FUNC_7 (int ,TYPE_1__*,int ) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_2)
{
 struct sc_info *VAR_3 = FUNC_2(VAR_2);

 FUNC_4(VAR_3);
 FUNC_5(VAR_3, 0);
 if (FUNC_3(VAR_3) == -1) {
  FUNC_0(VAR_2, "unable to reinitialize the card\n");
  return VAR_0;
 }

 if (FUNC_1(VAR_2) == -1) {
  FUNC_0(VAR_2, "unable to reinitialize the mixer\n");
                return VAR_0;
        }

 if (VAR_3->rch.dma_was_active) {
  FUNC_7(0, &VAR_3->rch, VAR_1);
 }

 if (VAR_3->pch.dma_was_active) {
  FUNC_6(0, &VAR_3->pch, VAR_1);
 }

 return 0;
}
