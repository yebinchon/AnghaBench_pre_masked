
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hpt_iop_hba {int flag; TYPE_1__* ops; int pciunit; } ;
typedef int device_t ;
struct TYPE_2__ {int (* disable_intr ) (struct hpt_iop_hba*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int ) ;
 scalar_t__ FUNC_2 (struct hpt_iop_hba*,int ,int) ;
 int FUNC_3 (struct hpt_iop_hba*) ;

__attribute__((used)) static int FUNC_4(device_t VAR_3)
{
 struct hpt_iop_hba * VAR_4 = (struct hpt_iop_hba *)FUNC_0(VAR_3);

 int VAR_5 = 0;

 if (VAR_4->flag & VAR_1) {
  FUNC_1(VAR_3, "%d device is busy", VAR_4->pciunit);
  return VAR_0;
 }

 VAR_4->ops->disable_intr(VAR_4);

 if (FUNC_2(VAR_4, VAR_2, 60000))
  VAR_5 = VAR_0;

 return VAR_5;
}
