
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; int * data; } ;
typedef TYPE_1__ dictionary ;
typedef int ZSTD_DDict ;
typedef int ZSTD_CDict ;


 int * FUNC_0 (int *,int ,int) ;
 int * FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_1__* VAR_0 ;

int FUNC_4(int VAR_1, const char** VAR_2) {
  const dictionary *VAR_3;
  for (VAR_3 = VAR_0; VAR_3->data != ((void*)0); ++VAR_3) {
    ZSTD_CDict *VAR_4;
    ZSTD_DDict *VAR_5;
    VAR_4 = FUNC_0(VAR_3->data, VAR_3->size, 1);
    if (VAR_4) {
      FUNC_2(VAR_4);
      return 1;
    }
    VAR_5 = FUNC_1(VAR_3->data, VAR_3->size);
    if (VAR_5) {
      FUNC_3(VAR_5);
      return 2;
    }
  }

  (void)VAR_1;
  (void)VAR_2;
  return 0;
}
