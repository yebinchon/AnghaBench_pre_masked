
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* db; } ;
struct TYPE_8__ {int selFlags; struct TYPE_8__* pNext; struct TYPE_8__* pPrior; } ;
struct TYPE_7__ {int* aLimit; } ;
typedef TYPE_2__ Select ;
typedef TYPE_3__ Parse ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,char*) ;

__attribute__((used)) static void FUNC_2(Parse *VAR_3, Select *VAR_4){
    FUNC_0( VAR_4!=0 );
    if( VAR_4->pPrior ){
      Select *VAR_5 = 0, *VAR_6;
      int VAR_7, VAR_8 = 0;
      for(VAR_6=VAR_4; VAR_6; VAR_5=VAR_6, VAR_6=VAR_6->pPrior, VAR_8++){
        VAR_6->pNext = VAR_5;
        VAR_6->selFlags |= VAR_0;
      }
      if( (VAR_4->selFlags & VAR_1)==0 &&
        (VAR_7 = VAR_3->db->aLimit[VAR_2])>0 &&
        VAR_8>VAR_7
      ){
        FUNC_1(VAR_3, "too many terms in compound SELECT");
      }
    }
  }
