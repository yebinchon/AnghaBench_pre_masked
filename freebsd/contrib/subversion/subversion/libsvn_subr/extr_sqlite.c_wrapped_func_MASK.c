
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * context; } ;
typedef TYPE_1__ svn_sqlite__context_t ;
typedef int svn_error_t ;
struct function_wrapper_baton_t {int baton; int * (* func ) (TYPE_1__*,int,void*,int ) ;} ;
typedef int sqlite3_value ;
typedef int sqlite3_context ;
typedef int buf ;


 int FUNC_0 (int *,int ,int) ;
 struct function_wrapper_baton_t* FUNC_1 (int *) ;
 int * FUNC_2 (TYPE_1__*,int,void*,int ) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(sqlite3_context *VAR_0,
             int VAR_1,
             sqlite3_value *VAR_2[])
{
  struct function_wrapper_baton_t *VAR_3 = FUNC_1(VAR_0);
  svn_sqlite__context_t VAR_4;
  svn_error_t *VAR_5;
  void *VAR_6 = VAR_2;

  VAR_4.context = VAR_0;

  VAR_5 = VAR_3->func(&VAR_4, VAR_1, VAR_6, VAR_3->baton);

  if (VAR_5)
    {
      char VAR_7[256];
      FUNC_0(VAR_0,
                           FUNC_3(VAR_5, VAR_7, sizeof(VAR_7)),
                           -1);
      FUNC_4(VAR_5);
    }
}
