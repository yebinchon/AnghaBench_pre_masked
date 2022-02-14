
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int sqlite3_module ;
struct TYPE_5__ {int mutex; } ;
typedef TYPE_1__ sqlite3 ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,char const*,int const*,void*,void (*) (void*)) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(
  sqlite3 *VAR_1,
  const char *VAR_2,
  const sqlite3_module *VAR_3,
  void *VAR_4,
  void (*VAR_5)(void *)
){
  int VAR_6 = VAR_0;

  FUNC_2(VAR_1->mutex);
  (void)FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
  VAR_6 = FUNC_0(VAR_1, VAR_6);
  if( VAR_6!=VAR_0 && VAR_5 ) VAR_5(VAR_4);
  FUNC_3(VAR_1->mutex);
  return VAR_6;
}
