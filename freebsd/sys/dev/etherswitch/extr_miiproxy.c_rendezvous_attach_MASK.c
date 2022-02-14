
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int (* callback ) (int ,struct rendezvous_entry*) ;} ;
struct TYPE_3__ {int (* callback ) (int ,struct rendezvous_entry*) ;} ;
struct rendezvous_entry {TYPE_2__ proxy; TYPE_1__ target; } ;
struct rendezvous_endpoint {int * callback; int * device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct rendezvous_entry*) ;
 int FUNC_1 (int ,struct rendezvous_entry*) ;
 int FUNC_2 (int ,struct rendezvous_entry*) ;

__attribute__((used)) static int
FUNC_3(struct rendezvous_entry *VAR_2, struct rendezvous_endpoint *VAR_3)
{
 int VAR_4;

 VAR_4 = VAR_2->proxy.callback(VAR_0, VAR_2);
 if (VAR_4 == 0) {
  VAR_4 = VAR_2->target.callback(VAR_0, VAR_2);
  if (VAR_4 != 0) {
   VAR_2->proxy.callback(VAR_1, VAR_2);
   VAR_3->device = ((void*)0);
   VAR_3->callback = ((void*)0);
  }
 }
 return (VAR_4);
}
