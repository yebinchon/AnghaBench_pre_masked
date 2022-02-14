
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * pParse; int xExprCallback; int xSelectCallback2; int xSelectCallback; } ;
typedef TYPE_1__ Walker ;
typedef int Select ;
typedef int Parse ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int *) ;

__attribute__((used)) static void FUNC_1(Parse *VAR_3, Select *VAR_4){

  Walker VAR_5;
  VAR_5.xSelectCallback = VAR_2;
  VAR_5.xSelectCallback2 = VAR_0;
  VAR_5.xExprCallback = VAR_1;
  VAR_5.pParse = VAR_3;
  FUNC_0(&VAR_5, VAR_4);

}
