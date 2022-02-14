
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct remote_state {int remote_packet_size; } ;
typedef int ptid_t ;


 char* FUNC_0 (int ) ;
 struct remote_state* FUNC_1 () ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int *,int) ;

__attribute__((used)) static ptid_t
FUNC_6 (ptid_t VAR_0)
{
  struct remote_state *VAR_1 = FUNC_1 ();
  char *VAR_2 = FUNC_0 (VAR_1->remote_packet_size);

  FUNC_4 ("qC");
  FUNC_2 (VAR_2, (VAR_1->remote_packet_size), 0);
  if (VAR_2[0] == 'Q' && VAR_2[1] == 'C')
    return FUNC_3 (FUNC_5 (&VAR_2[2], ((void*)0), 16));
  else
    return VAR_0;
}
