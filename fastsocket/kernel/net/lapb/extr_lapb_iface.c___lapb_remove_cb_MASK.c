
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ next; } ;
struct lapb_cb {TYPE_1__ node; } ;


 int FUNC_0 (struct lapb_cb*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(struct lapb_cb *VAR_0)
{
 if (VAR_0->node.next) {
  FUNC_1(&VAR_0->node);
  FUNC_0(VAR_0);
 }
}
