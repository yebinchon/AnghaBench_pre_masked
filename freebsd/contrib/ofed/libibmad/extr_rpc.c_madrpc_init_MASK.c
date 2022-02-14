
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int port_id; int class_agents; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 scalar_t__ FUNC_1 (int,int,TYPE_1__*) ;
 int FUNC_2 (int ,int,int) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (char*,int) ;

void
FUNC_5(char *VAR_3, int VAR_4, int *VAR_5, int VAR_6)
{
 int VAR_7;

 if (FUNC_3() < 0)
  FUNC_0("can't init UMAD library");

 if ((VAR_7 = FUNC_4(VAR_3, VAR_4)) < 0)
  FUNC_0("can't open UMAD port (%s:%d)",
  VAR_3 ? VAR_3 : "(nil)", VAR_4);

 if (VAR_6 >= VAR_1)
  FUNC_0("too many classes %d requested", VAR_6);

 VAR_2->port_id = VAR_7;
 FUNC_2(VAR_2->class_agents, 0xff, sizeof VAR_2->class_agents);
 while (VAR_6--) {
  uint8_t VAR_8 = 0;
  int VAR_9 = *VAR_5++;

  if (VAR_9 == VAR_0)
   VAR_8 = 1;
  if (FUNC_1(VAR_9, VAR_8, VAR_2) < 0)
   FUNC_0("client_register for mgmt class %d failed",
    VAR_9);
 }
}
