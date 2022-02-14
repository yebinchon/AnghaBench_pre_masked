
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct remote_state {int remote_packet_size; } ;


 int FUNC_0 (int ) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 struct remote_state* FUNC_3 () ;
 int FUNC_4 (char*,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_8 () ;
 int FUNC_9 (char*,char**,int) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_10 (void)
{
  struct remote_state *VAR_2 = FUNC_3 ();
  char *VAR_3 = FUNC_1 (VAR_2->remote_packet_size);
  char *VAR_4;
  int VAR_5;

  if (VAR_0 == 0)
    FUNC_2 ("Command can only be used when connected to the remote target.");

  if (VAR_1)
    {
      FUNC_7 ("qfThreadInfo");
      VAR_4 = VAR_3;
      FUNC_4 (VAR_4, (VAR_2->remote_packet_size), 0);
      if (VAR_4[0] != '\0')
 {
   while (*VAR_4++ == 'm')
     {
       do
  {
    VAR_5 = FUNC_9 (VAR_4, &VAR_4, 16);
    if (VAR_5 != 0 && !FUNC_5 (FUNC_6 (VAR_5)))
      FUNC_0 (FUNC_6 (VAR_5));
  }
       while (*VAR_4++ == ',');
       FUNC_7 ("qsThreadInfo");
       VAR_4 = VAR_3;
       FUNC_4 (VAR_4, (VAR_2->remote_packet_size), 0);
     }
   return;
 }
    }


  VAR_1 = 0;
  FUNC_8 ();
  return;
}
