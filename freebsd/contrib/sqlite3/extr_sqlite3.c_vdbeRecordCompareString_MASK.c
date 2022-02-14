
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_10__ {int r1; int r2; int errCode; int nField; int default_rc; int eqSeen; TYPE_6__* pKeyInfo; TYPE_1__* aMem; } ;
typedef TYPE_3__ UnpackedRecord ;
struct TYPE_11__ {TYPE_2__* db; } ;
struct TYPE_9__ {scalar_t__ mallocFailed; } ;
struct TYPE_8__ {int flags; int n; int z; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int const*,int) ;
 int FUNC_3 (int const*,int ,int) ;
 int FUNC_4 (int,void const*,TYPE_3__*,int) ;
 int FUNC_5 (int,void const*,TYPE_6__*) ;
 scalar_t__ FUNC_6 (int,void const*,TYPE_3__*,int) ;

__attribute__((used)) static int FUNC_7(
  int VAR_3, const void *VAR_4,
  UnpackedRecord *VAR_5
){
  const u8 *VAR_6 = (const u8*)VAR_4;
  int VAR_7;
  int VAR_8;

  FUNC_1( VAR_5->aMem[0].flags & VAR_1 );
  FUNC_5(VAR_3, VAR_4, VAR_5->pKeyInfo);
  FUNC_2(&VAR_6[1], VAR_7);
  if( VAR_7<12 ){
    VAR_8 = VAR_5->r1;
  }else if( !(VAR_7 & 0x01) ){
    VAR_8 = VAR_5->r2;
  }else{
    int VAR_9;
    int VAR_10;
    int VAR_11 = VAR_6[0];

    VAR_10 = (VAR_7-12) / 2;
    if( (VAR_11 + VAR_10) > VAR_3 ){
      VAR_5->errCode = (u8)VAR_2;
      return 0;
    }
    VAR_9 = FUNC_0( VAR_5->aMem[0].n, VAR_10 );
    VAR_8 = FUNC_3(&VAR_6[VAR_11], VAR_5->aMem[0].z, VAR_9);

    if( VAR_8>0 ){
      VAR_8 = VAR_5->r2;
    }else if( VAR_8<0 ){
      VAR_8 = VAR_5->r1;
    }else{
      VAR_8 = VAR_10 - VAR_5->aMem[0].n;
      if( VAR_8==0 ){
        if( VAR_5->nField>1 ){
          VAR_8 = FUNC_4(VAR_3, VAR_4, VAR_5, 1);
        }else{
          VAR_8 = VAR_5->default_rc;
          VAR_5->eqSeen = 1;
        }
      }else if( VAR_8>0 ){
        VAR_8 = VAR_5->r2;
      }else{
        VAR_8 = VAR_5->r1;
      }
    }
  }

  FUNC_1( FUNC_6(VAR_3, VAR_4, VAR_5, VAR_8)
       || VAR_0
       || VAR_5->pKeyInfo->db->mallocFailed
  );
  return VAR_8;
}
