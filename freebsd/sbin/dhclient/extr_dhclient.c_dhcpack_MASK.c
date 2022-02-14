
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct packet {int client_addr; TYPE_2__* raw; struct interface_info* interface; } ;
struct TYPE_7__ {scalar_t__ hlen; int haddr; } ;
struct interface_info {TYPE_5__* client; TYPE_1__ hw_address; } ;
struct client_lease {int expiry; int renewal; int rebind; TYPE_3__* options; } ;
struct TYPE_12__ {scalar_t__* default_actions; TYPE_4__* defaults; } ;
struct TYPE_11__ {scalar_t__ xid; scalar_t__ state; struct client_lease* new; TYPE_6__* config; } ;
struct TYPE_10__ {scalar_t__ data; } ;
struct TYPE_9__ {scalar_t__ data; scalar_t__ len; } ;
struct TYPE_8__ {scalar_t__ xid; scalar_t__ hlen; int chaddr; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct interface_info*) ;
 int FUNC_1 (int ,struct interface_info*) ;
 int VAR_9 ;
 int VAR_10 ;
 void* FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ,int ,scalar_t__) ;
 int FUNC_4 (char*,...) ;
 struct client_lease* FUNC_5 (struct packet*) ;
 int FUNC_6 (int ) ;
 int VAR_11 ;

void
FUNC_7(struct packet *VAR_12)
{
 struct interface_info *VAR_13 = VAR_12->interface;
 struct client_lease *VAR_14;



 if (VAR_12->interface->client->xid != VAR_12->raw->xid ||
     (VAR_12->interface->hw_address.hlen != VAR_12->raw->hlen) ||
     (FUNC_3(VAR_12->interface->hw_address.haddr,
     VAR_12->raw->chaddr, VAR_12->raw->hlen)))
  return;

 if (VAR_13->client->state != VAR_5 &&
     VAR_13->client->state != VAR_7 &&
     VAR_13->client->state != VAR_6 &&
     VAR_13->client->state != VAR_4)
  return;

 FUNC_4("DHCPACK from %s", FUNC_6(VAR_12->client_addr));

 VAR_14 = FUNC_5(VAR_12);
 if (!VAR_14) {
  FUNC_4("packet_to_lease failed.");
  return;
 }

 VAR_13->client->new = VAR_14;


 FUNC_1(VAR_11, VAR_13);


        if (VAR_13->client->config->default_actions[VAR_1] ==
            VAR_0)
  VAR_13->client->new->expiry = FUNC_2(
      VAR_13->client->config->defaults[VAR_1].data);
        else if (VAR_13->client->new->options[VAR_1].data)
  VAR_13->client->new->expiry = FUNC_2(
      VAR_13->client->new->options[VAR_1].data);
 else
  VAR_13->client->new->expiry = VAR_10;



 if (VAR_13->client->new->expiry < 0 ||
            VAR_13->client->new->expiry > VAR_8 - VAR_9)
  VAR_13->client->new->expiry = VAR_8 - VAR_9;

 if (VAR_13->client->new->expiry < 60)
  VAR_13->client->new->expiry = 60;





        if (VAR_13->client->config->default_actions[VAR_3] ==
            VAR_0)
  VAR_13->client->new->renewal = FUNC_2(
      VAR_13->client->config->defaults[VAR_3].data);
        else if (VAR_13->client->new->options[VAR_3].len)
  VAR_13->client->new->renewal = FUNC_2(
      VAR_13->client->new->options[VAR_3].data);
 else
  VAR_13->client->new->renewal = VAR_13->client->new->expiry / 2;
        if (VAR_13->client->new->renewal < 0 ||
            VAR_13->client->new->renewal > VAR_13->client->new->expiry / 2)
                VAR_13->client->new->renewal = VAR_13->client->new->expiry / 2;


        if (VAR_13->client->config->default_actions[VAR_2] ==
            VAR_0)
  VAR_13->client->new->rebind = FUNC_2(
      VAR_13->client->config->defaults[VAR_2].data);
        else if (VAR_13->client->new->options[VAR_2].len)
  VAR_13->client->new->rebind = FUNC_2(
      VAR_13->client->new->options[VAR_2].data);
 else
  VAR_13->client->new->rebind = VAR_13->client->new->renewal / 4 * 7;
 if (VAR_13->client->new->rebind < 0 ||
            VAR_13->client->new->rebind > VAR_13->client->new->renewal / 4 * 7)
                VAR_13->client->new->rebind = VAR_13->client->new->renewal / 4 * 7;


        VAR_13->client->new->expiry += VAR_9;
        VAR_13->client->new->renewal += VAR_9;
        VAR_13->client->new->rebind += VAR_9;

 FUNC_0(VAR_13);
}
