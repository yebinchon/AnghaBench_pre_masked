
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ssh {TYPE_2__* state; TYPE_1__* kex; } ;
typedef int remote_id ;
struct TYPE_4__ {int server_side; } ;
struct TYPE_3__ {int failed_choice; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,char const*,...) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ssh*) ;
 int FUNC_4 (struct ssh*,char*,int) ;

void
FUNC_5(struct ssh *VAR_3, const char *VAR_4, int VAR_5)
{
 char VAR_6[512];

 FUNC_4(VAR_3, VAR_6, sizeof(VAR_6));

 switch (VAR_5) {
 case 136:
  FUNC_3(VAR_3);
  FUNC_1("Connection closed by %s", VAR_6);
 case 135:
  FUNC_3(VAR_3);
  FUNC_1("Connection %s %s timed out",
      VAR_3->state->server_side ? "from" : "to", VAR_6);
 case 134:
  FUNC_3(VAR_3);
  FUNC_1("Disconnected from %s", VAR_6);
 case 128:
  if (VAR_2 == VAR_1) {
   FUNC_3(VAR_3);
   FUNC_1("Connection reset by %s", VAR_6);
  }

 case 133:
 case 129:
 case 132:
 case 130:
 case 131:
  if (VAR_3 && VAR_3->kex && VAR_3->kex->failed_choice) {
   FUNC_0(VAR_0, "ssh");
   FUNC_3(VAR_3);
   FUNC_1("Unable to negotiate with %s: %s. "
       "Their offer: %s", VAR_6, FUNC_2(VAR_5),
       VAR_3->kex->failed_choice);
  }

 default:
  FUNC_3(VAR_3);
  FUNC_1("%s%sConnection %s %s: %s",
      VAR_4 != ((void*)0) ? VAR_4 : "", VAR_4 != ((void*)0) ? ": " : "",
      VAR_3->state->server_side ? "from" : "to",
      VAR_6, FUNC_2(VAR_5));
 }
}
