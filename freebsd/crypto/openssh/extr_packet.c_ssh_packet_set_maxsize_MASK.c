
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct ssh {struct session_state* state; } ;
struct session_state {int set_maxsize_called; int max_packet_size; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int,...) ;

int
FUNC_2(struct ssh *VAR_0, u_int VAR_1)
{
 struct session_state *VAR_2 = VAR_0->state;

 if (VAR_2->set_maxsize_called) {
  FUNC_1("packet_set_maxsize: called twice: old %d new %d",
      VAR_2->max_packet_size, VAR_1);
  return -1;
 }
 if (VAR_1 < 4 * 1024 || VAR_1 > 1024 * 1024) {
  FUNC_1("packet_set_maxsize: bad size %d", VAR_1);
  return -1;
 }
 VAR_2->set_maxsize_called = 1;
 FUNC_0("packet_set_maxsize: setting to %d", VAR_1);
 VAR_2->max_packet_size = VAR_1;
 return VAR_1;
}
