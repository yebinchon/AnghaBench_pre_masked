
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {char* zText; scalar_t__ pNext; } ;
struct TYPE_8__ {scalar_t__ pRow; scalar_t__* zPrefix; } ;
struct TYPE_9__ {TYPE_1__ sGraph; int out; } ;
typedef TYPE_2__ ShellState ;
typedef TYPE_3__ EQPGraphRow ;


 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ,char*,...) ;

__attribute__((used)) static void FUNC_4(ShellState *VAR_0){
  EQPGraphRow *VAR_1 = VAR_0->sGraph.pRow;
  if( VAR_1 ){
    if( VAR_1->zText[0]=='-' ){
      if( VAR_1->pNext==0 ){
        FUNC_1(VAR_0);
        return;
      }
      FUNC_3(VAR_0->out, "%s\n", VAR_1->zText+3);
      VAR_0->sGraph.pRow = VAR_1->pNext;
      FUNC_2(VAR_1);
    }else{
      FUNC_3(VAR_0->out, "QUERY PLAN\n");
    }
    VAR_0->sGraph.zPrefix[0] = 0;
    FUNC_0(VAR_0, 0);
    FUNC_1(VAR_0);
  }
}
