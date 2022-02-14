
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct interface_info {TYPE_2__* client; } ;
struct TYPE_3__ {scalar_t__ len; int iabuf; } ;
struct client_lease {int is_static; scalar_t__ expiry; struct client_lease* next; TYPE_1__ address; } ;
struct TYPE_4__ {struct client_lease* active; struct client_lease* leases; struct client_lease* alias; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct client_lease*) ;
 int FUNC_2 (struct interface_info*) ;
 struct client_lease* FUNC_3 (int) ;
 int FUNC_4 (int ,int ,scalar_t__) ;
 int FUNC_5 (struct client_lease*,int ,int) ;
 int FUNC_6 (char**,int *) ;
 int FUNC_7 (int *,struct client_lease*,struct interface_info**) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char**,int *) ;
 int FUNC_10 (int *) ;

void
FUNC_11(FILE *VAR_4, int VAR_5)
{
 struct client_lease *VAR_6, *VAR_7, *VAR_8;
 struct interface_info *VAR_9;
 int VAR_10;
 char *VAR_11;

 VAR_10 = FUNC_6(&VAR_11, VAR_4);
 if (VAR_10 != VAR_1) {
  FUNC_8("expecting left brace.");
  FUNC_10(VAR_4);
  return;
 }

 VAR_6 = FUNC_3(sizeof(struct client_lease));
 if (!VAR_6)
  FUNC_0("no memory for lease.");
 FUNC_5(VAR_6, 0, sizeof(*VAR_6));
 VAR_6->is_static = VAR_5;

 VAR_9 = ((void*)0);

 do {
  VAR_10 = FUNC_9(&VAR_11, VAR_4);
  if (VAR_10 == VAR_0) {
   FUNC_8("unterminated lease declaration.");
   FUNC_1(VAR_6);
   return;
  }
  if (VAR_10 == VAR_2)
   break;
  FUNC_7(VAR_4, VAR_6, &VAR_9);
 } while (1);
 VAR_10 = FUNC_6(&VAR_11, VAR_4);




 if (!VAR_9) {
  FUNC_1(VAR_6);
  return;
 }


 if (!VAR_9->client)
  FUNC_2(VAR_9);


 if (VAR_5 == 2) {
  VAR_9->client->alias = VAR_6;
  return;
 }







 VAR_8 = ((void*)0);
 for (VAR_7 = VAR_9->client->leases; VAR_7; VAR_7 = VAR_7->next) {
  if (VAR_7->address.len == VAR_6->address.len &&
      !FUNC_4(VAR_7->address.iabuf, VAR_6->address.iabuf,
      VAR_6->address.len)) {
   if (VAR_8)
    VAR_8->next = VAR_7->next;
   else
    VAR_9->client->leases = VAR_7->next;
   FUNC_1(VAR_7);
   break;
  }
 }





 if (VAR_5) {
  VAR_6->next = VAR_9->client->leases;
  VAR_9->client->leases = VAR_6;
  return;
 }
 if (VAR_9->client->active) {
  if (VAR_9->client->active->expiry < VAR_3)
   FUNC_1(VAR_9->client->active);
  else if (VAR_9->client->active->address.len ==
      VAR_6->address.len &&
      !FUNC_4(VAR_9->client->active->address.iabuf,
      VAR_6->address.iabuf, VAR_6->address.len))
   FUNC_1(VAR_9->client->active);
  else {
   VAR_9->client->active->next = VAR_9->client->leases;
   VAR_9->client->leases = VAR_9->client->active;
  }
 }
 VAR_9->client->active = VAR_6;


}
