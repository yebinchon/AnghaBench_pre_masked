
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc_info {int flags; int dev; int bufsz; int irq; int nabmbar; int nambar; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int FUNC_4 (char*,int,char*,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_5(struct sc_info *VAR_4)
{
 char VAR_5[VAR_1];

 FUNC_4(VAR_5, VAR_1,
     "at io 0x%jx, 0x%jx irq %jd bufsz %u %s",
     FUNC_3(VAR_4->nambar), FUNC_3(VAR_4->nabmbar),
     FUNC_3(VAR_4->irq), VAR_4->bufsz,FUNC_0(VAR_3));

 if (VAR_2 && (VAR_4->flags & VAR_0))
  FUNC_1(VAR_4->dev,
      "PCI Master abort workaround enabled\n");

 FUNC_2(VAR_4->dev, VAR_5);
}
