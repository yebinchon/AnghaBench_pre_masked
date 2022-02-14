
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cxa_thread_dtor {void (* func ) (void*) ;void* dso; void* obj; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct cxa_thread_dtor*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct cxa_thread_dtor* FUNC_1 (int) ;

int
FUNC_2(void (*VAR_4)(void *), void *VAR_5,
    void *VAR_6)
{
 struct cxa_thread_dtor *VAR_7;

 VAR_7 = FUNC_1(sizeof(*VAR_7));
 if (VAR_7 == ((void*)0)) {
  VAR_3 = VAR_0;
  return (-1);
 }

 VAR_7->obj = VAR_5;
 VAR_7->func = VAR_4;
 VAR_7->dso = VAR_6;
 FUNC_0(&VAR_1, VAR_7, VAR_2);
 return (0);
}
