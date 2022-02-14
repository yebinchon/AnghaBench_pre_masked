
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mpt_softc {int dummy; } ;
typedef int request_t ;
struct TYPE_3__ {int Event; } ;
typedef TYPE_1__ MSG_EVENT_NOTIFY_REPLY ;


 int VAR_0 ;
 int FUNC_0 (struct mpt_softc*,int ,char*,int) ;

__attribute__((used)) static int
FUNC_1(struct mpt_softc *VAR_1, request_t *VAR_2, MSG_EVENT_NOTIFY_REPLY *VAR_3)
{

 FUNC_0(VAR_1, VAR_0, "mpt_stdevent: 0x%x\n", VAR_3->Event & 0xFF);

 return (0);
}
