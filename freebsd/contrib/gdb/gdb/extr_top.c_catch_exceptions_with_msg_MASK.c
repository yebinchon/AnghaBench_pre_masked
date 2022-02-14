
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_out {int dummy; } ;
typedef int return_mask ;
typedef enum return_reason { ____Placeholder_return_reason } return_reason ;
typedef int catch_exceptions_ftype ;


 int FUNC_0 (int *,struct ui_out*,void*,int*,int*,char*,char**,int ) ;
 int FUNC_1 (int) ;

int
FUNC_2 (struct ui_out *VAR_0,
        catch_exceptions_ftype *VAR_1,
        void *VAR_2,
        char *VAR_3,
      char **VAR_4,
        return_mask VAR_5)
{
  int VAR_6;
  enum return_reason VAR_7;
  FUNC_0 (VAR_1, VAR_0, VAR_2, &VAR_6, &VAR_7, VAR_3, VAR_4, VAR_5);
  FUNC_1 (VAR_6 >= 0);
  FUNC_1 (VAR_7 <= 0);
  if (VAR_7 < 0)
    return VAR_7;
  return VAR_6;
}
