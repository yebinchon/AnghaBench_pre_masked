
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int sqlite_int64 ;
struct TYPE_9__ {TYPE_1__* pMethods; } ;
typedef TYPE_2__ sqlite3_file ;
struct TYPE_10__ {scalar_t__ iPgOne; } ;
struct TYPE_8__ {int (* xFileSize ) (TYPE_2__*,int *) ;} ;
typedef TYPE_3__ ApndFile ;


 scalar_t__ VAR_0 ;
 TYPE_2__* FUNC_0 (TYPE_3__*) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,int *) ;

__attribute__((used)) static int FUNC_2(sqlite3_file *VAR_2, sqlite_int64 *VAR_3){
  ApndFile *VAR_4 = (ApndFile *)VAR_2;
  int VAR_5;
  VAR_2 = FUNC_0(VAR_4);
  VAR_5 = VAR_2->pMethods->xFileSize(VAR_2, VAR_3);
  if( VAR_5==VAR_1 && VAR_4->iPgOne ){
    *VAR_3 -= VAR_4->iPgOne + VAR_0;
  }
  return VAR_5;
}
