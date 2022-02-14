
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ seclen; struct TYPE_6__* next; struct TYPE_6__* keyacclist; } ;
typedef TYPE_1__ KeyDataT ;
typedef TYPE_1__ KeyAccT ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(
 KeyDataT *VAR_0
 )
{
 KeyAccT *VAR_1;

 if (VAR_0) {
  while (VAR_0->keyacclist) {
   VAR_1 = VAR_0->keyacclist;
   VAR_0->keyacclist = VAR_1->next;
   FUNC_0(VAR_1);
  }


  FUNC_1(VAR_0, 0, sizeof(*VAR_0) + VAR_0->seclen);
  FUNC_0(VAR_0);
 }
}
