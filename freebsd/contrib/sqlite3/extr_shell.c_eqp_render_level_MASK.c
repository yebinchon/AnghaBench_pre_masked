
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {char* zText; int iEqpId; } ;
struct TYPE_8__ {scalar_t__* zPrefix; } ;
struct TYPE_9__ {TYPE_1__ sGraph; int out; } ;
typedef TYPE_2__ ShellState ;
typedef TYPE_3__ EQPGraphRow ;


 TYPE_3__* FUNC_0 (TYPE_2__*,int,TYPE_3__*) ;
 int FUNC_1 (scalar_t__*,char*,int) ;
 int FUNC_2 (scalar_t__*) ;
 int FUNC_3 (int ,char*,scalar_t__*,char*,char*) ;

__attribute__((used)) static void FUNC_4(ShellState *VAR_0, int VAR_1){
  EQPGraphRow *VAR_2, *VAR_3;
  int VAR_4 = FUNC_2(VAR_0->sGraph.zPrefix);
  char *VAR_5;
  for(VAR_2 = FUNC_0(VAR_0, VAR_1, 0); VAR_2; VAR_2 = VAR_3){
    VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
    VAR_5 = VAR_2->zText;
    FUNC_3(VAR_0->out, "%s%s%s\n", VAR_0->sGraph.zPrefix,
                VAR_3 ? "|--" : "`--", VAR_5);
    if( VAR_4<(int)sizeof(VAR_0->sGraph.zPrefix)-7 ){
      FUNC_1(&VAR_0->sGraph.zPrefix[VAR_4], VAR_3 ? "|  " : "   ", 4);
      FUNC_4(VAR_0, VAR_2->iEqpId);
      VAR_0->sGraph.zPrefix[VAR_4] = 0;
    }
  }
}
