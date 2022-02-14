
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct remote_state {int remote_packet_size; } ;


 int VAR_0 ;
 char* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct remote_state* FUNC_1 () ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_5 (int VAR_3, int VAR_4)
{
  struct remote_state *VAR_5 = FUNC_1 ();
  char *VAR_6 = FUNC_0 (VAR_5->remote_packet_size);
  int VAR_7 = VAR_4 ? VAR_2 : VAR_1;

  if (VAR_7 == VAR_3)
    return;

  VAR_6[0] = 'H';
  VAR_6[1] = VAR_4 ? 'g' : 'c';
  if (VAR_3 == VAR_0)
    {
      VAR_6[2] = '0';
      VAR_6[3] = '\0';
    }
  else if (VAR_3 < 0)
    FUNC_4 (&VAR_6[2], "-%x", -VAR_3);
  else
    FUNC_4 (&VAR_6[2], "%x", VAR_3);
  FUNC_3 (VAR_6);
  FUNC_2 (VAR_6, (VAR_5->remote_packet_size), 0);
  if (VAR_4)
    VAR_2 = VAR_3;
  else
    VAR_1 = VAR_3;
}
