
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ sqlite_int64 ;
struct TYPE_11__ {TYPE_1__* pMethods; } ;
typedef TYPE_2__ sqlite3_file ;
struct TYPE_12__ {scalar_t__ iPgOne; scalar_t__ iMark; } ;
struct TYPE_10__ {int (* xTruncate ) (TYPE_2__*,scalar_t__) ;} ;
typedef TYPE_3__ ApndFile ;


 scalar_t__ VAR_0 ;
 TYPE_2__* FUNC_0 (TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,scalar_t__) ;

__attribute__((used)) static int FUNC_3(sqlite3_file *VAR_2, sqlite_int64 VAR_3){
  int VAR_4;
  ApndFile *VAR_5 = (ApndFile *)VAR_2;
  VAR_2 = FUNC_0(VAR_2);
  VAR_4 = VAR_2->pMethods->xTruncate(VAR_2, VAR_3+VAR_5->iPgOne+VAR_0);
  if( VAR_4==VAR_1 ){
    VAR_5->iMark = VAR_5->iPgOne+VAR_3;
    VAR_4 = FUNC_1(VAR_5, VAR_2);
  }
  return VAR_4;
}
