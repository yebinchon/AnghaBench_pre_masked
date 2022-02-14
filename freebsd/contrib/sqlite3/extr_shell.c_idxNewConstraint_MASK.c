
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* zColl; } ;
typedef TYPE_1__ IdxConstraint ;


 int VAR_0 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int*,int) ;
 int FUNC_3 (char*,char const*,int) ;

__attribute__((used)) static IdxConstraint *FUNC_4(int *VAR_1, const char *VAR_2){
  IdxConstraint *VAR_3;
  int VAR_4 = FUNC_0(VAR_2);

  FUNC_1( *VAR_1==VAR_0 );
  VAR_3 = (IdxConstraint*)FUNC_2(VAR_1, sizeof(IdxConstraint) * VAR_4 + 1);
  if( VAR_3 ){
    VAR_3->zColl = (char*)&VAR_3[1];
    FUNC_3(VAR_3->zColl, VAR_2, VAR_4+1);
  }
  return VAR_3;
}
