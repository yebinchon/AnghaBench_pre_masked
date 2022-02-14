
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_request {int dev; } ;
struct TYPE_2__ {scalar_t__ (* end_transaction ) (struct ata_request*) ;int (* status ) (int ) ;} ;
struct ata_channel {scalar_t__ state; int dev; struct ata_request* running; TYPE_1__ hw; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ata_request*,char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,struct ata_request*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct ata_request*) ;

__attribute__((used)) static void
FUNC_5(void *VAR_3)
{
 struct ata_channel *VAR_4 = (struct ata_channel *)VAR_3;
 struct ata_request *VAR_5;


 if (VAR_4->hw.status && !VAR_4->hw.status(VAR_4->dev))
  return;


 if (!(VAR_5 = VAR_4->running))
  return;

 FUNC_0(VAR_5, "interrupt");


 if (VAR_4->state == VAR_1) {
  FUNC_2(VAR_5->dev, "interrupt on idle channel ignored\n");
  return;
 }





 if (VAR_4->hw.end_transaction(VAR_5) == VAR_2) {
  VAR_4->running = ((void*)0);
  if (VAR_4->state == VAR_0)
   VAR_4->state = VAR_1;
  FUNC_1(VAR_4->dev, VAR_5);
  return;
 }
}
