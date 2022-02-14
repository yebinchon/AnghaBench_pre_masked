
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct remote_state {int remote_packet_size; } ;


 char* FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 struct remote_state* FUNC_2 () ;
 int FUNC_3 (char*) ;
 int VAR_0 ;
 int FUNC_4 (int ,int *,int ) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 () ;

__attribute__((used)) static void
FUNC_7 (char *VAR_1, int VAR_2)
{
  struct remote_state *VAR_3 = FUNC_2 ();
  char *VAR_4 = FUNC_0 (VAR_3->remote_packet_size);

  if (VAR_1)
    FUNC_1 ("Argument given to \"detach\" when remotely debugging.");


  if (FUNC_5 ())
    FUNC_4 (VAR_0, ((void*)0), 0);

  FUNC_6 ();
  if (VAR_2)
    FUNC_3 ("Ending remote debugging.\n");
}
