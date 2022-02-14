
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ccuser {int state; TYPE_1__* cc; } ;
typedef enum user_state { ____Placeholder_user_state } user_state ;
struct TYPE_2__ {int log; } ;


 int VAR_0 ;
 int FUNC_0 (struct ccuser*,char*,int ,int ) ;
 int * VAR_1 ;

__attribute__((used)) static __inline void
FUNC_1(struct ccuser *VAR_2, enum user_state VAR_3)
{
 if (VAR_2->state != VAR_3) {
  if (VAR_2->cc->log & VAR_0)
   FUNC_0(VAR_2, "%s -> %s",
       VAR_1[VAR_2->state], VAR_1[VAR_3]);
  VAR_2->state = VAR_3;
 }
}
