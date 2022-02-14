
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct deferred_test_data {int * cbs; int queue; } ;
typedef int THREAD_FN ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int VAR_1 ;
 int FUNC_2 (int *,int ,int ,int *) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static THREAD_FN
FUNC_4(void *VAR_2)
{
 struct deferred_test_data *VAR_3 = VAR_2;
 size_t VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4) {
  FUNC_2(&VAR_3->cbs[VAR_4], 0, VAR_1,
      ((void*)0));
  FUNC_3(VAR_3->queue, &VAR_3->cbs[VAR_4]);
  FUNC_0(1);
 }

 FUNC_1();
}
