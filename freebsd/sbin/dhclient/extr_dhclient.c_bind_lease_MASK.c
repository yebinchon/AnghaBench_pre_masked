
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u_int16_t ;
struct option_data {int len; int data; } ;
struct interface_info {TYPE_3__* client; } ;
struct TYPE_10__ {scalar_t__ renewal; int address; int medium; struct option_data* options; } ;
struct TYPE_9__ {scalar_t__ state; TYPE_4__* active; TYPE_4__* new; TYPE_4__* alias; TYPE_2__* config; int medium; } ;
struct TYPE_8__ {scalar_t__* default_actions; TYPE_1__* defaults; } ;
struct TYPE_7__ {int data; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (scalar_t__,int ,struct interface_info*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (TYPE_4__*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (char*,int ,int) ;
 int FUNC_7 (int ) ;
 int VAR_8 ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (char*,int ) ;
 int FUNC_11 (char*,TYPE_4__*) ;
 int VAR_9 ;
 int FUNC_12 (char*,unsigned int,scalar_t__) ;
 int FUNC_13 (struct interface_info*,TYPE_4__*,int ) ;

void
FUNC_14(struct interface_info *VAR_10)
{
 struct option_data *VAR_11;


 VAR_10->client->new->medium = VAR_10->client->medium;

 VAR_11 = &VAR_10->client->new->options[VAR_1];
 if (VAR_11->len == sizeof(u_int16_t)) {
  u_int16_t VAR_12 = 0;
  u_int16_t VAR_13 = 0;
  bool VAR_14 = (VAR_10->client->config->default_actions[VAR_1] ==
   VAR_0);

  if (VAR_14)
   VAR_12 = FUNC_3(VAR_10->client->config->defaults[VAR_1].data);
  else
   VAR_12 = FUNC_1(VAR_11->data);

  if (VAR_10->client->active) {
   VAR_11 = &VAR_10->client->active->options[VAR_1];
   if (VAR_11->len == sizeof(u_int16_t)) {
    VAR_13 = FUNC_1(VAR_11->data);
   }
  }

  if (VAR_12 < VAR_2) {


   if (!VAR_14 || VAR_12 != 0)
    FUNC_12("mtu size %u < %d: ignored", (unsigned)VAR_12, VAR_2);
  } else if (VAR_10->client->state != VAR_5 || VAR_12 != VAR_13) {
   FUNC_5(VAR_8, VAR_12);
  }
 }


 FUNC_13(VAR_10, VAR_10->client->new, 0);


 FUNC_10((VAR_10->client->state == VAR_6 ? "BOUND" :
     (VAR_10->client->state == VAR_5 ? "RENEW" :
     (VAR_10->client->state == VAR_4 ? "REBOOT" : "REBIND"))),
     VAR_10->client->new->medium);
 if (VAR_10->client->active && VAR_10->client->state != VAR_4)
  FUNC_11("old_", VAR_10->client->active);
 FUNC_11("new_", VAR_10->client->new);
 if (VAR_10->client->alias)
  FUNC_11("alias_", VAR_10->client->alias);
 FUNC_9();


 if (VAR_10->client->active)
  FUNC_2(VAR_10->client->active);
 VAR_10->client->active = VAR_10->client->new;
 VAR_10->client->new = ((void*)0);


 FUNC_0(VAR_10->client->active->renewal, VAR_9, VAR_10);

 FUNC_6("bound to %s -- renewal in %d seconds.",
     FUNC_7(VAR_10->client->active->address),
     (int)(VAR_10->client->active->renewal - VAR_7));
 VAR_10->client->state = VAR_3;
 FUNC_8();
 FUNC_4();
}
