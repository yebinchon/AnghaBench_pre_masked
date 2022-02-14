
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* pMethods; } ;
typedef TYPE_2__ sqlite3_file ;
struct TYPE_10__ {int iPgOne; } ;
struct TYPE_8__ {int (* xFileControl ) (TYPE_2__*,int,void*) ;} ;
typedef TYPE_3__ ApndFile ;


 TYPE_2__* FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_1 (char*,int ,char*) ;
 int FUNC_2 (TYPE_2__*,int,void*) ;

__attribute__((used)) static int FUNC_3(sqlite3_file *VAR_2, int VAR_3, void *VAR_4){
  ApndFile *VAR_5 = (ApndFile *)VAR_2;
  int VAR_6;
  VAR_2 = FUNC_0(VAR_2);
  VAR_6 = VAR_2->pMethods->xFileControl(VAR_2, VAR_3, VAR_4);
  if( VAR_6==VAR_1 && VAR_3==VAR_0 ){
    *(char**)VAR_4 = FUNC_1("apnd(%lld)/%z", VAR_5->iPgOne, *(char**)VAR_4);
  }
  return VAR_6;
}
