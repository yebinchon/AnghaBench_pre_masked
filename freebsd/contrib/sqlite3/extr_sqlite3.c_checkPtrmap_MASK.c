
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_4__ {int mallocFailed; int pBt; } ;
typedef scalar_t__ Pgno ;
typedef TYPE_1__ IntegrityCk ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,char*,scalar_t__,...) ;
 int FUNC_1 (int ,scalar_t__,scalar_t__*,scalar_t__*) ;

__attribute__((used)) static void FUNC_2(
  IntegrityCk *VAR_3,
  Pgno VAR_4,
  u8 VAR_5,
  Pgno VAR_6
){
  int VAR_7;
  u8 VAR_8;
  Pgno VAR_9;

  VAR_7 = FUNC_1(VAR_3->pBt, VAR_4, &VAR_8, &VAR_9);
  if( VAR_7!=VAR_2 ){
    if( VAR_7==VAR_1 || VAR_7==VAR_0 ) VAR_3->mallocFailed = 1;
    FUNC_0(VAR_3, "Failed to read ptrmap key=%d", VAR_4);
    return;
  }

  if( VAR_8!=VAR_5 || VAR_9!=VAR_6 ){
    FUNC_0(VAR_3,
      "Bad ptr map entry key=%d expected=(%d,%d) got=(%d,%d)",
      VAR_4, VAR_5, VAR_6, VAR_8, VAR_9);
  }
}
