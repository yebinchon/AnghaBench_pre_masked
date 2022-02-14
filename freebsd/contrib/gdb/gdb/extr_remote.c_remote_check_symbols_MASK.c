
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct remote_state {int remote_packet_size; } ;
struct objfile {int dummy; } ;
struct minimal_symbol {int dummy; } ;
struct TYPE_3__ {scalar_t__ support; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct minimal_symbol*) ;
 char* FUNC_1 (int ) ;
 struct remote_state* FUNC_2 () ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (char*,char*,int) ;
 struct minimal_symbol* FUNC_5 (char*,int *,int *) ;
 int FUNC_6 (char*,TYPE_1__*) ;
 char* FUNC_7 (int ) ;
 int FUNC_8 (char*) ;
 TYPE_1__ VAR_1 ;
 int FUNC_9 (char*,char*,char*,...) ;
 int FUNC_10 (char*) ;
 scalar_t__ FUNC_11 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_12 (struct objfile *VAR_2)
{
  struct remote_state *VAR_3 = FUNC_2 ();
  char *VAR_4, *VAR_5, *VAR_6;
  struct minimal_symbol *VAR_7;
  int VAR_8;

  if (VAR_1.support == VAR_0)
    return;

  VAR_4 = FUNC_1 (VAR_3->remote_packet_size);
  VAR_5 = FUNC_1 (VAR_3->remote_packet_size);



  FUNC_8 ("qSymbol::");
  FUNC_3 (VAR_5, (VAR_3->remote_packet_size), 0);
  FUNC_6 (VAR_5, &VAR_1);

  while (FUNC_11 (VAR_5, "qSymbol:", 8) == 0)
    {
      VAR_6 = &VAR_5[8];
      VAR_8 = FUNC_4 (VAR_6, VAR_4, FUNC_10 (VAR_6) / 2);
      VAR_4[VAR_8] = '\0';
      VAR_7 = FUNC_5 (VAR_4, ((void*)0), ((void*)0));
      if (VAR_7 == ((void*)0))
 FUNC_9 (VAR_4, "qSymbol::%s", &VAR_5[8]);
      else
 FUNC_9 (VAR_4, "qSymbol:%s:%s",
   FUNC_7 (FUNC_0 (VAR_7)),
   &VAR_5[8]);
      FUNC_8 (VAR_4);
      FUNC_3 (VAR_5, (VAR_3->remote_packet_size), 0);
    }
}
