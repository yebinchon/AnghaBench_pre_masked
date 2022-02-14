
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {TYPE_3__* pFirst; } ;
struct TYPE_10__ {int bRun; int zCandidates; TYPE_1__ hIdx; } ;
typedef TYPE_2__ sqlite3expert ;
struct TYPE_11__ {scalar_t__ zVal2; int zVal; struct TYPE_11__* pNext; } ;
typedef TYPE_3__ IdxHashEntry ;


 int VAR_0 ;
 int FUNC_0 (int*,int ,char*,int ,char*,scalar_t__) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,char**) ;
 int FUNC_3 (TYPE_2__*,char**) ;
 int FUNC_4 (TYPE_2__*,char**) ;

int FUNC_5(sqlite3expert *VAR_1, char **VAR_2){
  int VAR_3;
  IdxHashEntry *VAR_4;


  VAR_3 = FUNC_4(VAR_1, VAR_2);


  if( VAR_3==VAR_0 ){
    VAR_3 = FUNC_1(VAR_1);
  }


  if( VAR_3==VAR_0 ){
    VAR_3 = FUNC_3(VAR_1, VAR_2);
  }


  for(VAR_4=VAR_1->hIdx.pFirst; VAR_4; VAR_4=VAR_4->pNext){
    VAR_1->zCandidates = FUNC_0(&VAR_3, VAR_1->zCandidates,
        "%s;%s%s\n", VAR_4->zVal,
        VAR_4->zVal2 ? " -- stat1: " : "", VAR_4->zVal2
    );
  }



  if( VAR_3==VAR_0 ){
    VAR_3 = FUNC_2(VAR_1, VAR_2);
  }

  if( VAR_3==VAR_0 ){
    VAR_1->bRun = 1;
  }
  return VAR_3;
}
