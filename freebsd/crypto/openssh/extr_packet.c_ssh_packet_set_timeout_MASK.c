
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssh {struct session_state* state; } ;
struct session_state {int packet_timeout_ms; } ;


 int VAR_0 ;

void
FUNC_0(struct ssh *VAR_1, int VAR_2, int VAR_3)
{
 struct session_state *VAR_4 = VAR_1->state;

 if (VAR_2 <= 0 || VAR_3 <= 0) {
  VAR_4->packet_timeout_ms = -1;
  return;
 }
 if ((VAR_0 / 1000) / VAR_3 < VAR_2)
  VAR_4->packet_timeout_ms = VAR_0;
 else
  VAR_4->packet_timeout_ms = VAR_2 * VAR_3 * 1000;
}
