
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int heartbeat_timeout_id; int wellness_periodic; int eh; } ;
struct pqisrc_softstate {TYPE_1__ os_specific; } ;
typedef int device_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct pqisrc_softstate*) ;
 int FUNC_3 (struct pqisrc_softstate*) ;
 struct pqisrc_softstate* FUNC_4 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct pqisrc_softstate*) ;
 int VAR_2 ;
 int FUNC_7 (struct pqisrc_softstate*) ;
 int FUNC_8 (int ,struct pqisrc_softstate*,int ) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_3)
{
 struct pqisrc_softstate *VAR_4 = ((void*)0);
 VAR_4 = FUNC_4(VAR_3);
 FUNC_0("IN\n");

 FUNC_1(VAR_2, VAR_4->os_specific.eh);


 FUNC_8(VAR_1, VAR_4,
   VAR_4->os_specific.wellness_periodic);

 FUNC_8(VAR_0, VAR_4,
   VAR_4->os_specific.heartbeat_timeout_id);

 FUNC_7(VAR_4);
 FUNC_3(VAR_4);
 FUNC_6(VAR_4);
 FUNC_2(VAR_4);
 FUNC_5(VAR_3);

 FUNC_0("OUT\n");
 return 0;
}
