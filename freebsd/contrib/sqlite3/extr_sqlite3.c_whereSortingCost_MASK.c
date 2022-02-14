
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int wctrlFlags; scalar_t__ iLimit; } ;
typedef TYPE_1__ WhereInfo ;
typedef scalar_t__ LogEst ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;

__attribute__((used)) static LogEst FUNC_3(
  WhereInfo *VAR_1,
  LogEst VAR_2,
  int VAR_3,
  int VAR_4
){
  LogEst VAR_5, VAR_6;
  FUNC_0( VAR_3>0 && 66==FUNC_2(100) );
  VAR_5 = FUNC_2((VAR_3-VAR_4)*100/VAR_3) - 66;
  VAR_6 = VAR_2 + VAR_5 + 16;



  if( (VAR_1->wctrlFlags & VAR_0)!=0 && VAR_1->iLimit<VAR_2 ){
    VAR_2 = VAR_1->iLimit;
  }
  VAR_6 += FUNC_1(VAR_2);
  return VAR_6;
}
