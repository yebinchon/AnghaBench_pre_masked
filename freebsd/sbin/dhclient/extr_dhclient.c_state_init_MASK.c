
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct interface_info {TYPE_3__* client; } ;
struct TYPE_4__ {int xid; } ;
struct TYPE_6__ {TYPE_2__* config; int interval; int first_sending; int state; int destination; TYPE_1__ packet; int xid; int active; } ;
struct TYPE_5__ {int initial_interval; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct interface_info*,int ) ;
 int FUNC_2 (struct interface_info*) ;
 int VAR_4 ;

void
FUNC_3(void *VAR_5)
{
 struct interface_info *VAR_6 = VAR_5;

 FUNC_0(VAR_4, VAR_0);



 FUNC_1(VAR_6, VAR_6->client->active);
 VAR_6->client->xid = VAR_6->client->packet.xid;
 VAR_6->client->destination = VAR_3;
 VAR_6->client->state = VAR_1;
 VAR_6->client->first_sending = VAR_2;
 VAR_6->client->interval = VAR_6->client->config->initial_interval;



 FUNC_2(VAR_6);
}
