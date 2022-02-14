
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcifront_device {scalar_t__ ref_cnt; scalar_t__ evtchn; scalar_t__ gnt_ref; TYPE_1__* xdev; scalar_t__ sh_info; } ;
struct TYPE_2__ {int * data; } ;


 int FUNC_0 (char*,struct pcifront_device*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct pcifront_device*,int ) ;
 int FUNC_2 (scalar_t__,int ,void*) ;
 int FUNC_3 (TYPE_1__*,scalar_t__) ;

__attribute__((used)) static void
FUNC_4(struct pcifront_device *VAR_3)
{
 if (--VAR_3->ref_cnt > 0)
  return;

 FUNC_0("freeing pdev @ 0x%p (ref_cnt=%d)\n", VAR_3, VAR_3->ref_cnt);

 if (VAR_3->evtchn != VAR_0)
  FUNC_3(VAR_3->xdev, VAR_3->evtchn);

 if (VAR_3->gnt_ref != VAR_1)
  FUNC_2(VAR_3->gnt_ref, 0, (void *)VAR_3->sh_info);

 VAR_3->xdev->data = ((void*)0);

 FUNC_1(VAR_3, VAR_2);
}
