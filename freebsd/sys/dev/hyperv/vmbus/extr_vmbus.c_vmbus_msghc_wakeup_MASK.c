
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmbus_softc {int vmbus_xc; } ;
struct vmbus_message {int dummy; } ;


 int FUNC_0 (int ,struct vmbus_message const*,int) ;

void
FUNC_1(struct vmbus_softc *VAR_0, const struct vmbus_message *VAR_1)
{

 FUNC_0(VAR_0->vmbus_xc, VAR_1, sizeof(*VAR_1));
}
