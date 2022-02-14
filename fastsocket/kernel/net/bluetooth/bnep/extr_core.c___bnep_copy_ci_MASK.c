
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int h_source; } ;
struct bnep_session {int role; int state; int flags; TYPE_2__* dev; TYPE_1__ eh; } ;
struct bnep_conninfo {int role; int state; int flags; int device; int dst; } ;
struct TYPE_4__ {int name; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct bnep_conninfo *VAR_1, struct bnep_session *VAR_2)
{
 FUNC_0(VAR_1->dst, VAR_2->eh.h_source, VAR_0);
 FUNC_1(VAR_1->device, VAR_2->dev->name);
 VAR_1->flags = VAR_2->flags;
 VAR_1->state = VAR_2->state;
 VAR_1->role = VAR_2->role;
}
