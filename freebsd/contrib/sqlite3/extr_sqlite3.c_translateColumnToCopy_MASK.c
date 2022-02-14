
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int p1; scalar_t__ opcode; int p2; int p3; } ;
typedef TYPE_2__ VdbeOp ;
typedef int Vdbe ;
struct TYPE_8__ {TYPE_1__* db; int * pVdbe; } ;
struct TYPE_6__ {scalar_t__ mallocFailed; } ;
typedef TYPE_3__ Parse ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 (int *,int) ;

__attribute__((used)) static void FUNC_2(
  Parse *VAR_5,
  int VAR_6,
  int VAR_7,
  int VAR_8,
  int VAR_9
){
  Vdbe *VAR_10 = VAR_5->pVdbe;
  VdbeOp *VAR_11 = FUNC_1(VAR_10, VAR_6);
  int VAR_12 = FUNC_0(VAR_10);
  if( VAR_5->db->mallocFailed ) return;
  for(; VAR_6<VAR_12; VAR_6++, VAR_11++){
    if( VAR_11->p1!=VAR_7 ) continue;
    if( VAR_11->opcode==VAR_0 ){
      VAR_11->opcode = VAR_1;
      VAR_11->p1 = VAR_11->p2 + VAR_8;
      VAR_11->p2 = VAR_11->p3;
      VAR_11->p3 = 0;
    }else if( VAR_11->opcode==VAR_3 ){
      if( VAR_9 ){
        VAR_11->opcode = VAR_4;
        VAR_11->p1 = VAR_9;
      }else{
        VAR_11->opcode = VAR_2;
        VAR_11->p1 = 0;
        VAR_11->p3 = 0;
      }
    }
  }
}
