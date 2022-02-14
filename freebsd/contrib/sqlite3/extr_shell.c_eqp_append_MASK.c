
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int iEqpId; int iParentId; struct TYPE_8__* pNext; int zText; } ;
struct TYPE_6__ {TYPE_3__* pLast; TYPE_3__* pRow; } ;
struct TYPE_7__ {TYPE_1__ sGraph; int out; scalar_t__ autoEQPtest; } ;
typedef TYPE_2__ ShellState ;
typedef TYPE_3__ EQPGraphRow ;


 int FUNC_0 (int ,char const*,int) ;
 int FUNC_1 () ;
 TYPE_3__* FUNC_2 (int) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (int ,char*,int,int,char const*) ;

__attribute__((used)) static void FUNC_5(ShellState *VAR_0, int VAR_1, int VAR_2, const char *VAR_3){
  EQPGraphRow *VAR_4;
  int VAR_5 = FUNC_3(VAR_3);
  if( VAR_0->autoEQPtest ){
    FUNC_4(VAR_0->out, "%d,%d,%s\n", VAR_1, VAR_2, VAR_3);
  }
  VAR_4 = FUNC_2( sizeof(*VAR_4) + VAR_5 );
  if( VAR_4==0 ) FUNC_1();
  VAR_4->iEqpId = VAR_1;
  VAR_4->iParentId = VAR_2;
  FUNC_0(VAR_4->zText, VAR_3, VAR_5+1);
  VAR_4->pNext = 0;
  if( VAR_0->sGraph.pLast ){
    VAR_0->sGraph.pLast->pNext = VAR_4;
  }else{
    VAR_0->sGraph.pRow = VAR_4;
  }
  VAR_0->sGraph.pLast = VAR_4;
}
