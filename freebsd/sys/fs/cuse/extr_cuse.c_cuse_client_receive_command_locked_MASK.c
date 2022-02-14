
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct cuse_client_command {scalar_t__ command; int error; scalar_t__ proc_refs; int cv; int * proc_curr; TYPE_3__* client; } ;
struct TYPE_6__ {TYPE_1__* server; } ;
struct TYPE_5__ {int * td_proc; } ;
struct TYPE_4__ {scalar_t__ is_closing; } ;


 scalar_t__ FUNC_0 (TYPE_3__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_1 (struct cuse_client_command*) ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static int
FUNC_5(struct cuse_client_command *VAR_4,
    uint8_t *VAR_5, uint32_t VAR_6)
{
 int VAR_7;

 VAR_7 = 0;

 VAR_4->proc_curr = VAR_2->td_proc;

 if (FUNC_0(VAR_4->client) ||
     VAR_4->client->server->is_closing) {
  VAR_7 = VAR_1;
  goto done;
 }
 while (VAR_4->command == VAR_0) {
  if (VAR_7 != 0) {
   FUNC_3(&VAR_4->cv, &VAR_3);
  } else {
   VAR_7 = FUNC_4(&VAR_4->cv, &VAR_3);

   if (VAR_7 != 0)
    FUNC_1(VAR_4);
  }
  if (FUNC_0(VAR_4->client) ||
      VAR_4->client->server->is_closing) {
   VAR_7 = VAR_1;
   goto done;
  }
 }

 VAR_7 = VAR_4->error;
 VAR_4->command = VAR_0;
 FUNC_2(&VAR_4->cv);

done:



 VAR_4->proc_curr = ((void*)0);

 while (VAR_4->proc_refs != 0)
  FUNC_3(&VAR_4->cv, &VAR_3);

 return (VAR_7);
}
