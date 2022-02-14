
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct remote_state {int remote_packet_size; } ;
typedef int ULONGEST ;
struct TYPE_2__ {int support; } ;
typedef int CORE_ADDR ;





 char* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 struct remote_state* FUNC_2 () ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char*,int) ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static void
FUNC_6 (CORE_ADDR VAR_3)
{
  struct remote_state *VAR_4 = FUNC_2 ();
  switch (VAR_2.support)
    {
    case 130:
      break;
    case 129:
      break;
    case 128:
      {
 char *VAR_5 = FUNC_0 (VAR_4->remote_packet_size);
 char *VAR_6;

 VAR_6 = VAR_5;
 *VAR_6++ = 'X';
 VAR_6 += FUNC_4 (VAR_6, (ULONGEST) VAR_3);
 *VAR_6++ = ',';
 VAR_6 += FUNC_4 (VAR_6, (ULONGEST) 0);
 *VAR_6++ = ':';
 *VAR_6 = '\0';

 FUNC_5 (VAR_5, (int) (VAR_6 - VAR_5));
 FUNC_3 (VAR_5, (VAR_4->remote_packet_size), 0);

 if (VAR_5[0] == '\0')
   {
     if (VAR_1)
       FUNC_1 (VAR_0,
      "binary downloading NOT suppported by target\n");
     VAR_2.support = 130;
   }
 else
   {
     if (VAR_1)
       FUNC_1 (VAR_0,
      "binary downloading suppported by target\n");
     VAR_2.support = 129;
   }
 break;
      }
    }
}
