
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ssh {struct session_state* state; } ;
struct TYPE_2__ {int seqnr; } ;
struct session_state {size_t packet_discard_mac_already; int incoming_packet; TYPE_1__ p_read; scalar_t__ packet_discard_mac; } ;
typedef int buf ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (scalar_t__,int ,int ,size_t,int *,int ) ;
 int FUNC_2 (char*,char,int) ;
 int FUNC_3 (struct ssh*) ;
 int FUNC_4 (struct ssh*) ;
 size_t FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,int) ;

int
FUNC_8(struct ssh *VAR_2)
{
 struct session_state *VAR_3 = VAR_2->state;
 int VAR_4;

 if (VAR_3->packet_discard_mac) {
  char VAR_5[1024];
  size_t VAR_6 = VAR_0;

  if (VAR_6 > VAR_3->packet_discard_mac_already)
   VAR_6 -= VAR_3->packet_discard_mac_already;
  FUNC_2(VAR_5, 'a', sizeof(VAR_5));
  while (FUNC_5(VAR_3->incoming_packet) < VAR_6)
   if ((VAR_4 = FUNC_7(VAR_3->incoming_packet, VAR_5,
       sizeof(VAR_5))) != 0)
    return VAR_4;
  (void) FUNC_1(VAR_3->packet_discard_mac,
      VAR_3->p_read.seqnr,
      FUNC_6(VAR_3->incoming_packet), VAR_6,
      ((void*)0), 0);
 }
 FUNC_0("Finished discarding for %.200s port %d",
     FUNC_3(VAR_2), FUNC_4(VAR_2));
 return VAR_1;
}
