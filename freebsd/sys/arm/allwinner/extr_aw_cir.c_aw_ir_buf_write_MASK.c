
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aw_ir_softc {scalar_t__ dcnt; unsigned char* buf; int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static void
FUNC_1(struct aw_ir_softc *VAR_2, unsigned char VAR_3)
{

 if (VAR_2->dcnt < VAR_0)
  VAR_2->buf[VAR_2->dcnt++] = VAR_3;
 else
  if (VAR_1)
   FUNC_0(VAR_2->dev, "IR RX Buffer Full!\n");
}
