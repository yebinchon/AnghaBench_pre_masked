
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ sqlite3_int64 ;
struct TYPE_9__ {TYPE_1__* pMethods; } ;
typedef TYPE_2__ sqlite3_file ;
struct TYPE_10__ {scalar_t__ iPgOne; } ;
struct TYPE_8__ {int (* xUnfetch ) (TYPE_2__*,scalar_t__,void*) ;} ;
typedef TYPE_3__ ApndFile ;


 TYPE_2__* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,scalar_t__,void*) ;

__attribute__((used)) static int FUNC_2(sqlite3_file *VAR_0, sqlite3_int64 VAR_1, void *VAR_2){
  ApndFile *VAR_3 = (ApndFile *)VAR_0;
  VAR_0 = FUNC_0(VAR_0);
  return VAR_0->pMethods->xUnfetch(VAR_0, VAR_1+VAR_3->iPgOne, VAR_2);
}
