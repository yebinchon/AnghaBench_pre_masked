
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int thrd_t ;
typedef int thrd_start_t ;
struct thrd_param {void* arg; int func; } ;


 int FUNC_0 (struct thrd_param*) ;
 struct thrd_param* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *,int *,int ,struct thrd_param*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int
FUNC_3(thrd_t *VAR_4, thrd_start_t VAR_5, void *VAR_6)
{
 struct thrd_param *VAR_7;





 VAR_7 = FUNC_1(sizeof(*VAR_7));
 if (VAR_7 == ((void*)0))
  return (VAR_2);
 VAR_7->func = VAR_5;
 VAR_7->arg = VAR_6;
 if (FUNC_2(VAR_4, ((void*)0), VAR_0, VAR_7) != 0) {
  FUNC_0(VAR_7);
  return (VAR_1);
 }
 return (VAR_3);
}
