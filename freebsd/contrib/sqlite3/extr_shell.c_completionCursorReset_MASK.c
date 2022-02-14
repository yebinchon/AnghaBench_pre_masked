
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ j; scalar_t__ pStmt; scalar_t__ nLine; scalar_t__ zLine; scalar_t__ nPrefix; scalar_t__ zPrefix; } ;
typedef TYPE_1__ completion_cursor ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(completion_cursor *VAR_0){
  FUNC_1(VAR_0->zPrefix); VAR_0->zPrefix = 0; VAR_0->nPrefix = 0;
  FUNC_1(VAR_0->zLine); VAR_0->zLine = 0; VAR_0->nLine = 0;
  FUNC_0(VAR_0->pStmt); VAR_0->pStmt = 0;
  VAR_0->j = 0;
}
