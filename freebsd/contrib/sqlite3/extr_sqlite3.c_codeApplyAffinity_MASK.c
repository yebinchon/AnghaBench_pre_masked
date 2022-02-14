
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int Vdbe ;
struct TYPE_5__ {TYPE_1__* db; int * pVdbe; } ;
struct TYPE_4__ {int mallocFailed; } ;
typedef TYPE_2__ Parse ;


 int VAR_0 ;
 char VAR_1 ;
 char VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ,int,int,int ,char*,int) ;

__attribute__((used)) static void FUNC_2(Parse *VAR_3, int VAR_4, int VAR_5, char *VAR_6){
  Vdbe *VAR_7 = VAR_3->pVdbe;
  if( VAR_6==0 ){
    FUNC_0( VAR_3->db->mallocFailed );
    return;
  }
  FUNC_0( VAR_7!=0 );




  FUNC_0( VAR_2<VAR_1 );
  while( VAR_5>0 && VAR_6[0]<=VAR_1 ){
    VAR_5--;
    VAR_4++;
    VAR_6++;
  }
  while( VAR_5>1 && VAR_6[VAR_5-1]<=VAR_1 ){
    VAR_5--;
  }


  if( VAR_5>0 ){
    FUNC_1(VAR_7, VAR_0, VAR_4, VAR_5, 0, VAR_6, VAR_5);
  }
}
