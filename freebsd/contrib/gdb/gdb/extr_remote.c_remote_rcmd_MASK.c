
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;
struct remote_state {int remote_packet_size; } ;


 char* FUNC_0 (int) ;
 int FUNC_1 (char*,char*,int ) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char,struct ui_file*) ;
 int FUNC_4 (char) ;
 struct remote_state* FUNC_5 () ;
 int FUNC_6 (char*,int,int ) ;
 scalar_t__ FUNC_7 (char) ;
 scalar_t__ FUNC_8 (char*) ;
 int FUNC_9 (char*) ;
 int VAR_0 ;
 char* FUNC_10 (char*,char) ;
 scalar_t__ FUNC_11 (char*,char*) ;
 int FUNC_12 (char*,char*) ;
 int FUNC_13 (char*) ;

__attribute__((used)) static void
FUNC_14 (char *VAR_1,
      struct ui_file *VAR_2)
{
  struct remote_state *VAR_3 = FUNC_5 ();
  int VAR_4;
  char *VAR_5 = FUNC_0 (VAR_3->remote_packet_size);
  char *VAR_6 = VAR_5;

  if (!VAR_0)
    FUNC_2 ("remote rcmd is only available after target open");


  if (VAR_1 == ((void*)0))
    VAR_1 = "";


  FUNC_12 (VAR_5, "qRcmd,");
  VAR_6 = FUNC_10 (VAR_5, '\0');

  if ((FUNC_13 (VAR_5) + FUNC_13 (VAR_1) * 2 + 8 ) > (VAR_3->remote_packet_size))
    FUNC_2 ("\"monitor\" command ``%s'' is too long\n", VAR_1);


  FUNC_1 (VAR_1, VAR_6, 0);

  if (FUNC_8 (VAR_5) < 0)
    FUNC_2 ("Communication problem with target\n");


  while (1)
    {

      VAR_5[0] = '\0';
      FUNC_6 (VAR_5, (VAR_3->remote_packet_size), 0);
      if (VAR_5[0] == '\0')
 FUNC_2 ("Target does not support this command\n");
      if (VAR_5[0] == 'O' && VAR_5[1] != 'K')
 {
   FUNC_9 (VAR_5 + 1);
   continue;
 }
      if (FUNC_11 (VAR_5, "OK") == 0)
 break;
      if (FUNC_13 (VAR_5) == 3 && VAR_5[0] == 'E'
   && FUNC_7 (VAR_5[1]) && FUNC_7 (VAR_5[2]))
 {
   FUNC_2 ("Protocol error with Rcmd");
 }
      for (VAR_6 = VAR_5; VAR_6[0] != '\0' && VAR_6[1] != '\0'; VAR_6 += 2)
 {
   char VAR_7 = (FUNC_4 (VAR_6[0]) << 4) + FUNC_4 (VAR_6[1]);
   FUNC_3 (VAR_7, VAR_2);
 }
      break;
    }
}
