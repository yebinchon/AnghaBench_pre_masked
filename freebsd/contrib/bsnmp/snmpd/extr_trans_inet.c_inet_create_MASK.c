
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inet_port_params {int port; int type; int index; int proto; } ;
struct TYPE_2__ {int index; } ;
struct inet_port {int (* create ) (struct inet_port*,struct inet_port_params*) ;struct inet_port* dns_addr; TYPE_1__ tport; void* deactivate; void* activate; int proto; int socks; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 void* VAR_3 ;
 int FUNC_1 (struct inet_port*,struct inet_port_params*) ;
 void* VAR_4 ;
 int FUNC_2 (struct inet_port*) ;
 void* VAR_5 ;
 int FUNC_3 (struct inet_port*,struct inet_port_params*) ;
 void* VAR_6 ;
 void* VAR_7 ;
 int FUNC_4 (struct inet_port*,struct inet_port_params*) ;
 void* VAR_8 ;
 int FUNC_5 (struct inet_port*,struct inet_port_params*) ;
 struct inet_port* FUNC_6 (int) ;
 int FUNC_7 (struct inet_port*,int ,int) ;
 int VAR_9 ;
 int FUNC_8 (struct inet_port*,struct inet_port_params*) ;
 int FUNC_9 (int ,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_10(struct inet_port_params *VAR_10, struct inet_port **VAR_11)
{
 int VAR_12 = VAR_1;
 struct inet_port *VAR_13 = ((void*)0);

 if (VAR_10->port > 0xffff) {
  VAR_12 = VAR_2;
  goto fail;
 }

 if ((VAR_13 = FUNC_6(sizeof(*VAR_13))) == ((void*)0)) {
  VAR_12 = VAR_0;
  goto fail;
 }
 FUNC_7(VAR_13, 0, sizeof(*VAR_13));
 FUNC_0(&VAR_13->socks);

 VAR_13->proto = VAR_10->proto;
 VAR_13->tport.index = VAR_10->index;

 switch (VAR_10->type) {

   case 130:
  VAR_13->create = FUNC_3;
  VAR_13->activate = VAR_5;
  VAR_13->deactivate = VAR_6;
  break;

   case 129:
  VAR_13->create = FUNC_4;
  VAR_13->activate = VAR_7;
  VAR_13->deactivate = VAR_8;
  break;

   case 128:
  VAR_13->create = FUNC_5;
  VAR_13->activate = VAR_7;
  VAR_13->deactivate = VAR_8;
  break;

   case 131:
  VAR_13->create = FUNC_1;
  VAR_13->activate = VAR_3;
  VAR_13->deactivate = VAR_4;
  break;

   default:
  VAR_12 = VAR_2;
  goto fail;
 }

 if ((VAR_12 = VAR_13->create(VAR_13, VAR_10)) != VAR_1)
  goto fail;

 *VAR_11 = VAR_13;
 FUNC_9(VAR_9, &VAR_13->tport);
 return (VAR_12);

fail:
 FUNC_2(VAR_13->dns_addr);
 FUNC_2(VAR_13);
 return (VAR_12);
}
