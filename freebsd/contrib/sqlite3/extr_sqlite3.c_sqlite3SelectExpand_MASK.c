
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ eCode; scalar_t__ xSelectCallback2; int xSelectCallback; TYPE_2__* pParse; int xExprCallback; } ;
typedef TYPE_1__ Walker ;
struct TYPE_6__ {int hasCompound; } ;
typedef int Select ;
typedef TYPE_2__ Parse ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*,int *) ;

__attribute__((used)) static void FUNC_2(Parse *VAR_4, Select *VAR_5){
  Walker VAR_6;
  VAR_6.xExprCallback = VAR_3;
  VAR_6.pParse = VAR_4;
  if( FUNC_0(VAR_4->hasCompound) ){
    VAR_6.xSelectCallback = VAR_0;
    VAR_6.xSelectCallback2 = 0;
    FUNC_1(&VAR_6, VAR_5);
  }
  VAR_6.xSelectCallback = VAR_1;
  VAR_6.xSelectCallback2 = VAR_2;
  VAR_6.eCode = 0;
  FUNC_1(&VAR_6, VAR_5);
}
