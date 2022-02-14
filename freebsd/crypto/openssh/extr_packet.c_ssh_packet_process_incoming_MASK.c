
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct ssh {struct session_state* state; } ;
struct session_state {scalar_t__ packet_discard; int input; scalar_t__ keep_alive_timeouts; } ;


 int FUNC_0 (struct ssh*) ;
 int FUNC_1 (int ,char const*,scalar_t__) ;

int
FUNC_2(struct ssh *VAR_0, const char *VAR_1, u_int VAR_2)
{
 struct session_state *VAR_3 = VAR_0->state;
 int VAR_4;

 if (VAR_3->packet_discard) {
  VAR_3->keep_alive_timeouts = 0;
  if (VAR_2 >= VAR_3->packet_discard) {
   if ((VAR_4 = FUNC_0(VAR_0)) != 0)
    return VAR_4;
  }
  VAR_3->packet_discard -= VAR_2;
  return 0;
 }
 if ((VAR_4 = FUNC_1(VAR_0->state->input, VAR_1, VAR_2)) != 0)
  return VAR_4;

 return 0;
}
