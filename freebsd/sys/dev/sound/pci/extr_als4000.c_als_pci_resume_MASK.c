
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ dma_was_active; } ;
struct TYPE_3__ {scalar_t__ dma_was_active; } ;
struct sc_info {int lock; TYPE_2__ rch; TYPE_1__ pch; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (struct sc_info*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (int ) ;
 struct sc_info* FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_1)
{
 struct sc_info *VAR_2 = FUNC_5(VAR_1);


 FUNC_6(VAR_2->lock);
 if (FUNC_1(VAR_2) != 0) {
  FUNC_3(VAR_1, "unable to reinitialize the card\n");
  FUNC_7(VAR_2->lock);
  return VAR_0;
 }

 if (FUNC_4(VAR_1) != 0) {
  FUNC_3(VAR_1, "unable to reinitialize the mixer\n");
  FUNC_7(VAR_2->lock);
  return VAR_0;
 }

 if (VAR_2->pch.dma_was_active) {
  FUNC_2(&VAR_2->pch);
 }

 if (VAR_2->rch.dma_was_active) {
  FUNC_0(&VAR_2->rch);
 }
 FUNC_7(VAR_2->lock);

 return 0;
}
