
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_5__ {int extra; } ;
struct TYPE_6__ {TYPE_1__ tsv; } ;
typedef TYPE_2__ TString ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__* FUNC_2 (int *,int ) ;
 int * VAR_1 ;

void FUNC_3 (lua_State *VAR_2) {
  int VAR_3;
  for (VAR_3=0; VAR_3<VAR_0; VAR_3++) {
    TString *VAR_4 = FUNC_2(VAR_2, VAR_1[VAR_3]);
    FUNC_1(VAR_4);
    VAR_4->tsv.extra = FUNC_0(VAR_3+1);
  }
}
