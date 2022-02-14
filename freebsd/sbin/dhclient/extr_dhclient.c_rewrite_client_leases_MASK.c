
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct client_lease {struct client_lease* next; } ;
typedef int cap_rights_t ;
struct TYPE_5__ {TYPE_1__* client; } ;
struct TYPE_4__ {struct client_lease* active; struct client_lease* leases; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int ,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int ,char*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int ,int ) ;
 TYPE_2__* VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (TYPE_2__*,struct client_lease*,int) ;

void
FUNC_12(void)
{
 struct client_lease *VAR_10;
 cap_rights_t VAR_11;

 if (!VAR_8) {
  VAR_8 = FUNC_6(VAR_9, "w");
  if (!VAR_8)
   FUNC_3("can't create %s: %m", VAR_9);
  FUNC_0(&VAR_11, VAR_0, VAR_2, VAR_3,
      VAR_4, VAR_5, VAR_6);
  if (FUNC_2(FUNC_5(VAR_8), &VAR_11) < 0) {
   FUNC_3("can't limit lease descriptor: %m");
  }
  if (FUNC_1(FUNC_5(VAR_8), VAR_1) < 0) {
   FUNC_3("can't limit lease descriptor fcntls: %m");
  }
 } else {
  FUNC_4(VAR_8);
  FUNC_10(VAR_8);
 }

 for (VAR_10 = VAR_7->client->leases; VAR_10; VAR_10 = VAR_10->next)
  FUNC_11(VAR_7, VAR_10, 1);
 if (VAR_7->client->active)
  FUNC_11(VAR_7, VAR_7->client->active, 1);

 FUNC_4(VAR_8);
 FUNC_9(FUNC_5(VAR_8), FUNC_8(VAR_8));
 FUNC_7(FUNC_5(VAR_8));
}
