
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (void*) ;
 void* FUNC_1 (void*,int,int ) ;
 int FUNC_2 (void*,void*,int) ;
 int FUNC_3 (void*) ;
 void* FUNC_4 (int) ;

__attribute__((used)) static void *FUNC_5(void *VAR_1, int VAR_2)
{
 void *VAR_3;

 if (FUNC_0(VAR_1)) {
  VAR_3 = FUNC_4(VAR_2 * sizeof(pid_t));
  if (!VAR_3)
   return ((void*)0);
  FUNC_2(VAR_3, VAR_1, VAR_2 * sizeof(pid_t));
  FUNC_3(VAR_1);
 } else {
  VAR_3 = FUNC_1(VAR_1, VAR_2 * sizeof(pid_t), VAR_0);
 }
 return VAR_3;
}
