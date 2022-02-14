
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * pSelect; } ;
struct TYPE_5__ {TYPE_1__ u; scalar_t__ pParse; scalar_t__ xSelectCallback2; int xSelectCallback; int xExprCallback; } ;
typedef TYPE_2__ Walker ;
typedef int Select ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int *) ;

__attribute__((used)) static void FUNC_1(Select *VAR_2){
  Walker VAR_3;
  VAR_3.xExprCallback = VAR_0;
  VAR_3.xSelectCallback = VAR_1;
  VAR_3.xSelectCallback2 = 0;
  VAR_3.pParse = 0;
  VAR_3.u.pSelect = VAR_2;
  FUNC_0(&VAR_3, VAR_2);
}
