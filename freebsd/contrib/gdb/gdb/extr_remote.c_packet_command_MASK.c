
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct remote_state {int remote_packet_size; } ;


 char* FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 struct remote_state* FUNC_2 () ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_7 (char *VAR_1, int VAR_2)
{
  struct remote_state *VAR_3 = FUNC_2 ();
  char *VAR_4 = FUNC_0 (VAR_3->remote_packet_size);

  if (!VAR_0)
    FUNC_1 ("command can only be used with remote target");

  if (!VAR_1)
    FUNC_1 ("remote-packet command requires packet text as argument");

  FUNC_6 ("sending: ");
  FUNC_4 (VAR_1);
  FUNC_6 ("\n");
  FUNC_5 (VAR_1);

  FUNC_3 (VAR_4, (VAR_3->remote_packet_size), 0);
  FUNC_6 ("received: ");
  FUNC_4 (VAR_4);
  FUNC_6 ("\n");
}
