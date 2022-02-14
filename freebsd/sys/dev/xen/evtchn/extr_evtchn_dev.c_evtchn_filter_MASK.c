
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_evtchn {int enabled; int port; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(void *VAR_3)
{
 struct user_evtchn *VAR_4;

 VAR_4 = VAR_3;

 if (!VAR_4->enabled && VAR_1) {
  FUNC_0(VAR_2,
      "Received upcall for disabled event channel %d\n",
      VAR_4->port);
 }

 FUNC_1(VAR_4->port);
 VAR_4->enabled = 0;

 return (VAR_0);
}
