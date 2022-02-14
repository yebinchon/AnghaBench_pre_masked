
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int nuse; int size; TYPE_3__** hash; } ;
typedef TYPE_2__ stringtable ;
typedef int lua_State ;
struct TYPE_9__ {TYPE_2__ strt; } ;
struct TYPE_6__ {TYPE_3__* hnext; } ;
struct TYPE_8__ {TYPE_1__ u; int hash; } ;
typedef TYPE_3__ TString ;


 TYPE_5__* FUNC_0 (int *) ;
 size_t FUNC_1 (int ,int ) ;

void FUNC_2 (lua_State *VAR_0, TString *VAR_1) {
  stringtable *VAR_2 = &FUNC_0(VAR_0)->strt;
  TString **VAR_3 = &VAR_2->hash[FUNC_1(VAR_1->hash, VAR_2->size)];
  while (*VAR_3 != VAR_1)
    VAR_3 = &(*VAR_3)->u.hnext;
  *VAR_3 = (*VAR_3)->u.hnext;
  VAR_2->nuse--;
}
