
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct data {size_t i; size_t* data; int mutex; } ;
typedef int POOL_ctx ;


 int FUNC_0 (size_t,size_t) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int * const) ;
 int FUNC_3 (int * const,int *,struct data*) ;
 int * FUNC_4 (size_t,size_t) ;
 int FUNC_5 (int * const) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_8(size_t VAR_1, size_t VAR_2)
{
  struct data VAR_3;
  POOL_ctx* const VAR_4 = FUNC_4(VAR_1, VAR_2);
  FUNC_2(VAR_4);
  VAR_3.i = 0;
  FUNC_1(FUNC_7(&VAR_3.mutex, ((void*)0)));
  { size_t VAR_5;
    for (VAR_5 = 0; VAR_5 < 16; ++VAR_5) {
      FUNC_3(VAR_4, &VAR_0, &VAR_3);
    }
  }
  FUNC_5(VAR_4);
  FUNC_0(16, VAR_3.i);
  { size_t VAR_6;
    for (VAR_6 = 0; VAR_6 < VAR_3.i; ++VAR_6) {
      FUNC_0(VAR_6, VAR_3.data[VAR_6]);
    }
  }
  FUNC_6(&VAR_3.mutex);
  return 0;
}
