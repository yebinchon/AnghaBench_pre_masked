
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_5__ {int nEq; int nTop; int nBtm; int * pIndex; } ;
struct TYPE_6__ {TYPE_1__ btree; } ;
struct TYPE_7__ {int nSkip; int wsFlags; TYPE_2__ u; } ;
typedef TYPE_3__ WhereLoop ;
typedef int StrAccum ;
typedef int Index ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int ,int,int,char*) ;
 char* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,char*,char const*) ;

__attribute__((used)) static void FUNC_4(StrAccum *VAR_2, WhereLoop *VAR_3){
  Index *VAR_4 = VAR_3->u.btree.pIndex;
  u16 VAR_5 = VAR_3->u.btree.nEq;
  u16 VAR_6 = VAR_3->nSkip;
  int VAR_7, VAR_8;

  if( VAR_5==0 && (VAR_3->wsFlags&(VAR_0|VAR_1))==0 ) return;
  FUNC_2(VAR_2, " (", 2);
  for(VAR_7=0; VAR_7<VAR_5; VAR_7++){
    const char *VAR_9 = FUNC_1(VAR_4, VAR_7);
    if( VAR_7 ) FUNC_2(VAR_2, " AND ", 5);
    FUNC_3(VAR_2, VAR_7>=VAR_6 ? "%s=?" : "ANY(%s)", VAR_9);
  }

  VAR_8 = VAR_7;
  if( VAR_3->wsFlags&VAR_0 ){
    FUNC_0(VAR_2, VAR_4, VAR_3->u.btree.nBtm, VAR_8, VAR_7, ">");
    VAR_7 = 1;
  }
  if( VAR_3->wsFlags&VAR_1 ){
    FUNC_0(VAR_2, VAR_4, VAR_3->u.btree.nTop, VAR_8, VAR_7, "<");
  }
  FUNC_2(VAR_2, ")", 1);
}
