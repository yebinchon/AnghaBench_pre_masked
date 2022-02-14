
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct remote_state {int remote_packet_size; struct packet_reg* regs; int sizeof_g_packet; } ;
struct packet_reg {int offset; int regnum; scalar_t__ in_g_packet; } ;
struct TYPE_2__ {int support; } ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (int ) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (char*,char*,int ) ;
 int FUNC_3 (char*) ;
 struct remote_state* FUNC_4 () ;
 int VAR_2 ;
 int FUNC_5 (char*,int ,int ) ;
 int FUNC_6 (int ,char*) ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int) ;

__attribute__((used)) static void
FUNC_10 (int VAR_5)
{
  struct remote_state *VAR_6 = FUNC_4 ();
  char *VAR_7;
  char *VAR_8;
  int VAR_9;
  char *VAR_10;

  FUNC_8 (FUNC_0 (VAR_2), 1);

  if (VAR_5 >= 0)
    {
      switch (VAR_4.support)
 {
 case 130:
   break;
 case 129:
   if (FUNC_9 (VAR_5))
     return;
   else
     FUNC_3 ("Protocol error: P packet not recognized by stub");
 case 128:
   if (FUNC_9 (VAR_5))
     {

       VAR_4.support = 129;
       return;
     }
   else
     {



       VAR_4.support = 130;
       break;
     }
 }
    }



  {
    int VAR_11;
    VAR_8 = FUNC_1 (VAR_6->sizeof_g_packet);
    FUNC_5 (VAR_8, 0, VAR_6->sizeof_g_packet);
    for (VAR_11 = 0; VAR_11 < VAR_1 + VAR_0; VAR_11++)
      {
 struct packet_reg *VAR_12 = &VAR_6->regs[VAR_11];
 if (VAR_12->in_g_packet)
   FUNC_6 (VAR_12->regnum, VAR_8 + VAR_12->offset);
      }
  }



  VAR_7 = FUNC_1 (VAR_6->remote_packet_size);
  VAR_10 = VAR_7;
  *VAR_10++ = 'G';

  FUNC_2 (VAR_8, VAR_10, VAR_3);
  FUNC_7 (VAR_7, (VAR_6->remote_packet_size));
}
