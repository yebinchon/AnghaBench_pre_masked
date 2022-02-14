
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssh {struct session_state* state; } ;
struct session_state {int set_interactive_called; int interactive_mode; int connection_in; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ssh*) ;
 int FUNC_2 (struct ssh*,int) ;

void
FUNC_3(struct ssh *VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
 struct session_state *VAR_4 = VAR_0->state;

 if (VAR_4->set_interactive_called)
  return;
 VAR_4->set_interactive_called = 1;


 VAR_4->interactive_mode = VAR_1;


 if (!FUNC_1(VAR_0))
  return;
 FUNC_0(VAR_4->connection_in);
 FUNC_2(VAR_0, VAR_1 ? VAR_2 :
     VAR_3);
}
