
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sbp_dev {int product; int revision; int vendor; TYPE_1__* target; } ;
struct fw_device {int csrrom; } ;
struct csrreg {scalar_t__ val; } ;
struct crom_context {int dummy; } ;
struct TYPE_2__ {struct fw_device* fwdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct crom_context*,int ) ;
 int FUNC_2 (struct crom_context*) ;
 int FUNC_3 (struct crom_context*,int ,int) ;
 struct csrreg* FUNC_4 (struct crom_context*,int ) ;
 int FUNC_5 (int ,int,char*,scalar_t__) ;

__attribute__((used)) static void
FUNC_6(struct sbp_dev *VAR_5)
{
 struct fw_device *VAR_6;
 struct crom_context VAR_7, *VAR_8 = &VAR_7;
 struct csrreg *VAR_9;

 FUNC_0(VAR_5->vendor, sizeof(VAR_5->vendor));
 FUNC_0(VAR_5->product, sizeof(VAR_5->product));

 VAR_6 = VAR_5->target->fwdev;
 FUNC_1(VAR_8, VAR_6->csrrom);

 FUNC_4(VAR_8, VAR_2);
 FUNC_2(VAR_8);
 FUNC_3(VAR_8, VAR_5->vendor, sizeof(VAR_5->vendor));

 while ((VAR_9 = FUNC_4(VAR_8, VAR_3)) != ((void*)0)) {
  if (VAR_9->val == VAR_4)
   break;
  FUNC_2(VAR_8);
 }

 VAR_9 = FUNC_4(VAR_8, VAR_0);
 if (VAR_9 != ((void*)0))
  FUNC_5(VAR_5->revision, sizeof(VAR_5->revision),
      "%06x", VAR_9->val);

 FUNC_4(VAR_8, VAR_1);
 FUNC_2(VAR_8);
 FUNC_3(VAR_8, VAR_5->product, sizeof(VAR_5->product));
}
