
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gomp_thread {int release; } ;


 int FUNC_0 (int *,int ) ;
 struct gomp_thread VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,struct gomp_thread*) ;

__attribute__((used)) static void __attribute__((constructor))
FUNC_3 (void)
{
  struct gomp_thread *VAR_2;


  static struct gomp_thread VAR_3;

  FUNC_1 (&VAR_1, ((void*)0));
  FUNC_2 (VAR_1, &VAR_3);





  VAR_2 = &VAR_3;

  FUNC_0 (&VAR_2->release, 0);
}
