
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmbus_softc {int dummy; } ;
struct vmbus_msghc {int dummy; } ;
struct TYPE_2__ {int chm_type; } ;
struct vmbus_chanmsg_chrequest {TYPE_1__ chm_hdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct vmbus_chanmsg_chrequest* FUNC_0 (struct vmbus_msghc*) ;
 int FUNC_1 (struct vmbus_msghc*) ;
 struct vmbus_msghc* FUNC_2 (struct vmbus_softc*,int) ;
 int FUNC_3 (struct vmbus_softc*,struct vmbus_msghc*) ;

__attribute__((used)) static int
FUNC_4(struct vmbus_softc *VAR_2)
{
 struct vmbus_chanmsg_chrequest *VAR_3;
 struct vmbus_msghc *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_2(VAR_2, sizeof(*VAR_3));
 if (VAR_4 == ((void*)0))
  return VAR_0;

 VAR_3 = FUNC_0(VAR_4);
 VAR_3->chm_hdr.chm_type = VAR_1;

 VAR_5 = FUNC_1(VAR_4);
 FUNC_3(VAR_2, VAR_4);

 return VAR_5;
}
