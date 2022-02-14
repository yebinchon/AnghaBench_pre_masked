
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct interface_info {TYPE_2__* client; } ;
struct TYPE_6__ {scalar_t__ is_bootp; } ;
struct TYPE_5__ {int * medium; TYPE_1__* config; int interval; int first_sending; int destination; TYPE_3__* active; int xid; int state; } ;
struct TYPE_4__ {int initial_interval; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct interface_info*,TYPE_3__*) ;
 int FUNC_2 (struct interface_info*) ;
 int FUNC_3 (struct interface_info*) ;

void
FUNC_4(void *VAR_3)
{
 struct interface_info *VAR_4 = VAR_3;


 if (!VAR_4->client->active || VAR_4->client->active->is_bootp) {
  FUNC_3(VAR_4);
  return;
 }


 VAR_4->client->state = VAR_0;




 VAR_4->client->xid = FUNC_0();



 FUNC_1(VAR_4, VAR_4->client->active);
 VAR_4->client->destination = VAR_2;
 VAR_4->client->first_sending = VAR_1;
 VAR_4->client->interval = VAR_4->client->config->initial_interval;


 VAR_4->client->medium = ((void*)0);


 FUNC_2(VAR_4);
}
