
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t num_attributes; int next_object; TYPE_2__* attributes; } ;
struct session_state {TYPE_1__ find; } ;
struct TYPE_4__ {struct TYPE_4__* pValue; } ;
typedef size_t CK_ULONG ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_1(struct session_state *VAR_0)
{
    if (VAR_0->find.attributes) {
 CK_ULONG VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->find.num_attributes; VAR_1++) {
     if (VAR_0->find.attributes[VAR_1].pValue)
  FUNC_0(VAR_0->find.attributes[VAR_1].pValue);
 }
 FUNC_0(VAR_0->find.attributes);
 VAR_0->find.attributes = ((void*)0);
 VAR_0->find.num_attributes = 0;
 VAR_0->find.next_object = -1;
    }
}
