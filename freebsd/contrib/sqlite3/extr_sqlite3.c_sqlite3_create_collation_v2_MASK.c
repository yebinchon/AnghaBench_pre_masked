
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {int mutex; int mallocFailed; } ;
typedef TYPE_1__ sqlite3 ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,char const*,int ,void*,int (*) (void*,int,void const*,int,void const*),void (*) (void*)) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

int FUNC_6(
  sqlite3* VAR_1,
  const char *VAR_2,
  int VAR_3,
  void* VAR_4,
  int(*VAR_5)(void*,int,const void*,int,const void*),
  void(*VAR_6)(void*)
){
  int VAR_7;




  FUNC_4(VAR_1->mutex);
  FUNC_0( !VAR_1->mallocFailed );
  VAR_7 = FUNC_1(VAR_1, VAR_2, (u8)VAR_3, VAR_4, VAR_5, VAR_6);
  VAR_7 = FUNC_2(VAR_1, VAR_7);
  FUNC_5(VAR_1->mutex);
  return VAR_7;
}
