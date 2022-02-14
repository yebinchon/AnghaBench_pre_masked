
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef int sqlite3 ;
typedef scalar_t__ i16 ;
struct TYPE_24__ {scalar_t__ iTable; scalar_t__ iRightJoinTable; } ;
struct TYPE_23__ {int * db; } ;
struct TYPE_22__ {int nSrc; TYPE_1__* a; } ;
struct TYPE_21__ {int pTab; } ;
typedef TYPE_2__ SrcList ;
typedef TYPE_3__ Parse ;
typedef TYPE_4__ Expr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_4__*,int) ;
 int FUNC_1 (TYPE_4__*,int ) ;
 int FUNC_2 (TYPE_4__*,int ) ;
 int VAR_4 ;
 int FUNC_3 (int) ;
 TYPE_4__* FUNC_4 (int *,TYPE_2__*,int,int) ;
 TYPE_4__* FUNC_5 (TYPE_3__*,TYPE_4__*,TYPE_4__*) ;
 TYPE_4__* FUNC_6 (TYPE_3__*,int ,TYPE_4__*,TYPE_4__*) ;

__attribute__((used)) static void FUNC_7(
  Parse *VAR_5,
  SrcList *VAR_6,
  int VAR_7,
  int VAR_8,
  int VAR_9,
  int VAR_10,
  int VAR_11,
  Expr **VAR_12
){
  sqlite3 *VAR_13 = VAR_5->db;
  Expr *VAR_14;
  Expr *VAR_15;
  Expr *VAR_16;

  FUNC_3( VAR_7<VAR_9 );
  FUNC_3( VAR_6->nSrc>VAR_9 );
  FUNC_3( VAR_6->a[VAR_7].pTab );
  FUNC_3( VAR_6->a[VAR_9].pTab );

  VAR_14 = FUNC_4(VAR_13, VAR_6, VAR_7, VAR_8);
  VAR_15 = FUNC_4(VAR_13, VAR_6, VAR_9, VAR_10);

  VAR_16 = FUNC_6(VAR_5, VAR_4, VAR_14, VAR_15);
  if( VAR_16 && VAR_11 ){
    FUNC_1(VAR_16, VAR_0);
    FUNC_3( !FUNC_0(VAR_16, VAR_3|VAR_2) );
    FUNC_2(VAR_16, VAR_1);
    VAR_16->iRightJoinTable = (i16)VAR_15->iTable;
  }
  *VAR_12 = FUNC_5(VAR_5, *VAR_12, VAR_16);
}
