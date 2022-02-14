
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (void*) ;
 int FUNC_2 (void*,size_t,int ,int *) ;
 int FUNC_3 () ;
 int VAR_2 ;
 int FUNC_4 (void*) ;
 void* FUNC_5 (size_t,int ) ;
 scalar_t__ FUNC_6 (int) ;
 int VAR_3 ;
 size_t FUNC_7 (int,int ) ;
 scalar_t__ FUNC_8 (int) ;

void *FUNC_9(size_t VAR_4, size_t VAR_5)
{



 size_t VAR_6 = FUNC_7(VAR_3 * sizeof(void *), FUNC_3());
 void *VAR_7 = FUNC_5(VAR_6, VAR_0);
 void *VAR_8 = FUNC_1(VAR_7);






 FUNC_0(VAR_5 > VAR_1);

 if (FUNC_8(!VAR_7))
  return ((void*)0);
 if (FUNC_6(!FUNC_2(VAR_8, VAR_4, VAR_0,
        &VAR_2)))
  return VAR_8;
 FUNC_4(VAR_7);
 return ((void*)0);
}
