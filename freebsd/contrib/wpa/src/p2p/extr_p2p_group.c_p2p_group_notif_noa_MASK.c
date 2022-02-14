
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct p2p_group {int beacon_update; TYPE_1__* noa; } ;
struct TYPE_5__ {scalar_t__ used; } ;


 int FUNC_0 (struct p2p_group*) ;
 TYPE_1__* FUNC_1 (int const*,size_t) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int const*,size_t) ;
 size_t FUNC_4 (TYPE_1__*) ;

int FUNC_5(struct p2p_group *VAR_0, const u8 *VAR_1,
   size_t VAR_2)
{
 if (VAR_1 == ((void*)0)) {
  FUNC_2(VAR_0->noa);
  VAR_0->noa = ((void*)0);
 } else {
  if (VAR_0->noa) {
   if (FUNC_4(VAR_0->noa) >= VAR_2) {
    VAR_0->noa->used = 0;
    FUNC_3(VAR_0->noa, VAR_1, VAR_2);
   } else {
    FUNC_2(VAR_0->noa);
    VAR_0->noa = ((void*)0);
   }
  }

  if (!VAR_0->noa) {
   VAR_0->noa = FUNC_1(VAR_1, VAR_2);
   if (VAR_0->noa == ((void*)0))
    return -1;
  }
 }

 VAR_0->beacon_update = 1;
 FUNC_0(VAR_0);
 return 0;
}
