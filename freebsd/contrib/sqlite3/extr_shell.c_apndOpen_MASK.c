
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


struct TYPE_26__ {int (* xOpen ) (TYPE_3__*,char const*,TYPE_4__*,int,int*) ;int szOsFile; } ;
typedef TYPE_3__ sqlite3_vfs ;
typedef int sqlite3_int64 ;
struct TYPE_27__ {TYPE_2__* pMethods; } ;
typedef TYPE_4__ sqlite3_file ;
struct TYPE_24__ {int * pMethods; } ;
struct TYPE_28__ {int iPgOne; scalar_t__ iMark; TYPE_1__ base; } ;
struct TYPE_25__ {int (* xFileSize ) (TYPE_4__*,int*) ;int (* xClose ) (TYPE_4__*) ;} ;
typedef TYPE_5__ ApndFile ;


 TYPE_4__* FUNC_0 (TYPE_4__*) ;
 TYPE_3__* FUNC_1 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int,TYPE_4__*) ;
 int FUNC_3 (int,TYPE_4__*) ;
 int VAR_4 ;
 int FUNC_4 (TYPE_4__*,TYPE_4__*,int ) ;
 int FUNC_5 (TYPE_5__*,int ,int) ;
 int FUNC_6 (TYPE_3__*,char const*,TYPE_4__*,int,int*) ;
 int FUNC_7 (TYPE_3__*,char const*,TYPE_4__*,int,int*) ;
 int FUNC_8 (TYPE_4__*,int*) ;
 int FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_11(
  sqlite3_vfs *VAR_5,
  const char *VAR_6,
  sqlite3_file *VAR_7,
  int VAR_8,
  int *VAR_9
){
  ApndFile *VAR_10;
  sqlite3_file *VAR_11;
  sqlite3_vfs *VAR_12;
  int VAR_13;
  sqlite3_int64 VAR_14;
  VAR_12 = FUNC_1(VAR_5);
  if( (VAR_8 & VAR_3)==0 ){
    return VAR_12->xOpen(VAR_12, VAR_6, VAR_7, VAR_8, VAR_9);
  }
  VAR_10 = (ApndFile*)VAR_7;
  FUNC_5(VAR_10, 0, sizeof(*VAR_10));
  VAR_11 = FUNC_0(VAR_7);
  VAR_10->base.pMethods = &VAR_4;
  VAR_13 = VAR_12->xOpen(VAR_12, VAR_6, VAR_11, VAR_8, VAR_9);
  if( VAR_13 ) goto apnd_open_done;
  VAR_13 = VAR_11->pMethods->xFileSize(VAR_11, &VAR_14);
  if( VAR_13 ){
    VAR_11->pMethods->xClose(VAR_11);
    goto apnd_open_done;
  }
  if( FUNC_2(VAR_14, VAR_11) ){
    FUNC_4(VAR_7, VAR_11, VAR_12->szOsFile);
    return VAR_1;
  }
  VAR_10->iMark = 0;
  VAR_10->iPgOne = FUNC_3(VAR_14, VAR_7);
  if( VAR_10->iPgOne>0 ){
    return VAR_1;
  }
  if( (VAR_8 & VAR_2)==0 ){
    VAR_11->pMethods->xClose(VAR_11);
    VAR_13 = VAR_0;
  }
  VAR_10->iPgOne = (VAR_14+0xfff) & ~(sqlite3_int64)0xfff;
apnd_open_done:
  if( VAR_13 ) VAR_7->pMethods = 0;
  return VAR_13;
}
