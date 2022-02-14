
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ type; } ;
struct TYPE_8__ {int state; } ;
struct TYPE_7__ {scalar_t__ enhsp0; } ;
typedef TYPE_1__ Switch ;
typedef TYPE_2__ Port ;
typedef TYPE_3__ Node ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(Node * VAR_1, Port * VAR_2, Switch * VAR_3)
{
 int VAR_4 = 0;
 if (VAR_2->state != 4 &&
     (VAR_1->type != VAR_0 ||
      (VAR_1->type == VAR_0 && VAR_3->enhsp0)))
  VAR_4 = 1;
 return VAR_4;
}
