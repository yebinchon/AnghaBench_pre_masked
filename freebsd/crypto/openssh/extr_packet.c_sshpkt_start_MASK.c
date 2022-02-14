
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct ssh {TYPE_1__* state; } ;
typedef int buf ;
struct TYPE_2__ {int outgoing_packet; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int ,int *,int) ;
 int FUNC_4 (int ) ;

int
FUNC_5(struct ssh *VAR_0, u_char VAR_1)
{
 u_char VAR_2[6];

 FUNC_0(FUNC_1("packet_start[%d]", VAR_1));
 FUNC_2(VAR_2, 0, sizeof(VAR_2));
 VAR_2[sizeof(VAR_2) - 1] = VAR_1;
 FUNC_4(VAR_0->state->outgoing_packet);
 return FUNC_3(VAR_0->state->outgoing_packet, VAR_2, sizeof(VAR_2));
}
