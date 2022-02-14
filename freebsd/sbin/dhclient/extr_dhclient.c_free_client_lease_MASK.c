
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct client_lease {TYPE_1__* options; struct client_lease* filename; struct client_lease* server_name; } ;
struct TYPE_2__ {struct client_lease* data; scalar_t__ len; } ;


 int FUNC_0 (struct client_lease*) ;

void
FUNC_1(struct client_lease *VAR_0)
{
 int VAR_1;

 if (VAR_0->server_name)
  FUNC_0(VAR_0->server_name);
 if (VAR_0->filename)
  FUNC_0(VAR_0->filename);
 for (VAR_1 = 0; VAR_1 < 256; VAR_1++) {
  if (VAR_0->options[VAR_1].len)
   FUNC_0(VAR_0->options[VAR_1].data);
 }
 FUNC_0(VAR_0);
}
