
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct catch_errors_args {void* func_args; int * func; } ;
typedef int return_mask ;
typedef enum return_reason { ____Placeholder_return_reason } return_reason ;
typedef int catch_errors_ftype ;


 int FUNC_0 (int ,int ,struct catch_errors_args*,int*,int*,char*,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;

int
FUNC_1 (catch_errors_ftype *VAR_2, void *VAR_3, char *VAR_4,
       return_mask VAR_5)
{
  int VAR_6;
  enum return_reason VAR_7;
  struct catch_errors_args VAR_8;
  VAR_8.func = VAR_2;
  VAR_8.func_args = VAR_3;
  FUNC_0 (VAR_0, VAR_1, &VAR_8, &VAR_6, &VAR_7, VAR_4,
    ((void*)0), VAR_5);
  if (VAR_7 != 0)
    return 0;
  return VAR_6;
}
