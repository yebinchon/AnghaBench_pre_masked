
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* zVal; } ;
typedef TYPE_1__ IdxHashEntry ;
typedef int IdxHash ;


 TYPE_1__* FUNC_0 (int *,char const*,int) ;

__attribute__((used)) static const char *FUNC_1(IdxHash *VAR_0, const char *VAR_1, int VAR_2){
  IdxHashEntry *VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
  if( VAR_3 ) return VAR_3->zVal;
  return 0;
}
