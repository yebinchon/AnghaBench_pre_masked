
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ typeMask; } ;
typedef TYPE_1__ VdbeSorter ;
typedef int SorterCompare ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static SorterCompare FUNC_0(VdbeSorter *VAR_5){
  if( VAR_5->typeMask==VAR_0 ){
    return VAR_3;
  }else if( VAR_5->typeMask==VAR_1 ){
    return VAR_4;
  }
  return VAR_2;
}
