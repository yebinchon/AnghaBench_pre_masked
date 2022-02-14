
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct interface_info {TYPE_2__* client; } ;
struct client_lease {scalar_t__ expiry; scalar_t__ renewal; struct client_lease* next; int * medium; int address; } ;
struct TYPE_4__ {TYPE_1__* config; void* state; struct client_lease* alias; struct client_lease* active; struct client_lease* leases; } ;
struct TYPE_3__ {scalar_t__ retry_interval; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (scalar_t__,int (*) (struct interface_info*),struct interface_info*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (char*,int *) ;
 int FUNC_7 (char*,struct client_lease*) ;
 int FUNC_8 (struct interface_info*) ;
 int FUNC_9 (struct interface_info*) ;

void
FUNC_10(void *VAR_3)
{
 struct interface_info *VAR_4 = VAR_3;
 struct client_lease *VAR_5 = VAR_4->client->active;
 struct client_lease *VAR_6;

 FUNC_2("No DHCPOFFERS received.");



 if (!VAR_4->client->active && VAR_4->client->leases)
  goto activate_next;


 while (VAR_4->client->active) {
  if (VAR_4->client->active->expiry > VAR_2) {
   FUNC_2("Trying recorded lease %s",
       FUNC_3(VAR_4->client->active->address));


   FUNC_6("TIMEOUT",
       VAR_4->client->active->medium);
   FUNC_7("new_", VAR_4->client->active);
   if (VAR_4->client->alias)
    FUNC_7("alias_",
        VAR_4->client->alias);




   if (!FUNC_5()) {
    if (VAR_2 <
        VAR_4->client->active->renewal) {
     VAR_4->client->state = VAR_0;
     FUNC_2("bound: renewal in %d seconds.",
         (int)(VAR_4->client->active->renewal -
         VAR_2));
     FUNC_0(
         VAR_4->client->active->renewal,
         FUNC_8, VAR_4);
    } else {
     VAR_4->client->state = VAR_0;
     FUNC_2("bound: immediate renewal.");
     FUNC_8(VAR_4);
    }
    FUNC_4();
    FUNC_1();
    return;
   }
  }


  if (!VAR_4->client->leases) {
   VAR_4->client->leases = VAR_4->client->active;
   VAR_4->client->active = ((void*)0);
   break;
  }

activate_next:


  for (VAR_6 = VAR_4->client->leases; VAR_6->next; VAR_6 = VAR_6->next)
   ;
  VAR_6->next = VAR_4->client->active;
  if (VAR_6->next)
   VAR_6->next->next = ((void*)0);
  VAR_4->client->active = VAR_4->client->leases;
  VAR_4->client->leases = VAR_4->client->leases->next;




  if (VAR_4->client->active == VAR_5)
   break;
  else if (!VAR_5)
   VAR_5 = VAR_4->client->active;
 }




 FUNC_2("No working leases in persistent database - sleeping.\n");
 FUNC_6("FAIL", ((void*)0));
 if (VAR_4->client->alias)
  FUNC_7("alias_", VAR_4->client->alias);
 FUNC_5();
 VAR_4->client->state = VAR_1;
 FUNC_0(VAR_2 + VAR_4->client->config->retry_interval, FUNC_9,
     VAR_4);
 FUNC_1();
}
