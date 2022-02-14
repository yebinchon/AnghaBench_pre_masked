
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ pTmpSpace; int pageSize; } ;
typedef TYPE_1__ BtShared ;


 int FUNC_0 (scalar_t__,int ,int) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(BtShared *VAR_0){
  if( !VAR_0->pTmpSpace ){
    VAR_0->pTmpSpace = FUNC_1( VAR_0->pageSize );
    if( VAR_0->pTmpSpace ){
      FUNC_0(VAR_0->pTmpSpace, 0, 8);
      VAR_0->pTmpSpace += 4;
    }
  }
}
