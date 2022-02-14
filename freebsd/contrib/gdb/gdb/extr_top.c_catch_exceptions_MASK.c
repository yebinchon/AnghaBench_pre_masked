
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_out {int dummy; } ;
typedef int return_mask ;
typedef enum return_reason { ____Placeholder_return_reason } return_reason ;
typedef int catch_exceptions_ftype ;


 int FUNC_0 (int *,struct ui_out*,void*,int*,int*,char*,int *,int ) ;
 int FUNC_1 (int) ;

int
FUNC_2 (struct ui_out *VAR_0,
    catch_exceptions_ftype *VAR_1,
    void *VAR_2,
    char *VAR_3,
    return_mask VAR_4)
{
  int VAR_5;
  enum return_reason VAR_6;
  FUNC_0 (VAR_1, VAR_0, VAR_2, &VAR_5, &VAR_6, VAR_3, ((void*)0), VAR_4);
  FUNC_1 (VAR_5 >= 0);
  FUNC_1 (VAR_6 <= 0);
  if (VAR_6 < 0)
    return VAR_6;
  return VAR_5;
}
