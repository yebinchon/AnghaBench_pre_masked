
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct remote_state {int remote_packet_size; } ;


 char* FUNC_0 (int ) ;
 struct remote_state* FUNC_1 () ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*,int ) ;

__attribute__((used)) static void
FUNC_5 (void)
{
  struct remote_state *VAR_0 = FUNC_1 ();
  char *VAR_1 = FUNC_0 (VAR_0->remote_packet_size);



  VAR_1[0] = 'R';
  FUNC_4 (&VAR_1[1], "%x", 0);
  FUNC_3 (VAR_1);



  FUNC_3 ("?");
  FUNC_2 (VAR_1, (VAR_0->remote_packet_size), 0);
}
