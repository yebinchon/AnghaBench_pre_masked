
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ccparty {int state; TYPE_2__* conn; } ;
typedef enum party_state { ____Placeholder_party_state } party_state ;
struct TYPE_4__ {TYPE_1__* cc; } ;
struct TYPE_3__ {int log; } ;


 int VAR_0 ;
 int FUNC_0 (struct ccparty*,char*,int ,int ) ;
 int * VAR_1 ;

void
FUNC_1(struct ccparty *VAR_2, enum party_state VAR_3)
{

 if (VAR_2->state != VAR_3) {
  if (VAR_2->conn->cc->log & VAR_0)
   FUNC_0(VAR_2, "%s -> %s",
       VAR_1[VAR_2->state], VAR_1[VAR_3]);
  VAR_2->state = VAR_3;
 }
}
