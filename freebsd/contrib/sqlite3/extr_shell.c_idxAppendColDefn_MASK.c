
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int zColl; int zName; } ;
struct TYPE_7__ {size_t iCol; scalar_t__ bDesc; int zColl; } ;
struct TYPE_6__ {TYPE_3__* aCol; } ;
typedef TYPE_1__ IdxTable ;
typedef TYPE_2__ IdxConstraint ;
typedef TYPE_3__ IdxColumn ;


 char* FUNC_0 (int*,char*,char*,...) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static char *FUNC_3(
  int *VAR_0,
  char *VAR_1,
  IdxTable *VAR_2,
  IdxConstraint *VAR_3
){
  char *VAR_4 = VAR_1;
  IdxColumn *VAR_5 = &VAR_2->aCol[VAR_3->iCol];
  if( VAR_4 ) VAR_4 = FUNC_0(VAR_0, VAR_4, ", ");

  if( FUNC_1(VAR_5->zName) ){
    VAR_4 = FUNC_0(VAR_0, VAR_4, "%Q", VAR_5->zName);
  }else{
    VAR_4 = FUNC_0(VAR_0, VAR_4, "%s", VAR_5->zName);
  }

  if( FUNC_2(VAR_5->zColl, VAR_3->zColl) ){
    if( FUNC_1(VAR_3->zColl) ){
      VAR_4 = FUNC_0(VAR_0, VAR_4, " COLLATE %Q", VAR_3->zColl);
    }else{
      VAR_4 = FUNC_0(VAR_0, VAR_4, " COLLATE %s", VAR_3->zColl);
    }
  }

  if( VAR_3->bDesc ){
    VAR_4 = FUNC_0(VAR_0, VAR_4, " DESC");
  }
  return VAR_4;
}
