
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rc_state {int c; scalar_t__ ssl; } ;
struct daemon_remote {int active; int busy_list; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct rc_state*) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static void
FUNC_5(struct daemon_remote* VAR_0, struct rc_state* VAR_1)
{
 FUNC_4(&VAR_0->busy_list, VAR_1->c);
 VAR_0->active --;
 if(VAR_1->ssl) {
  FUNC_1(VAR_1->ssl);
  FUNC_0(VAR_1->ssl);
 }
 FUNC_2(VAR_1->c);
 FUNC_3(VAR_1);
}
