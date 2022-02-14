
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_sqlite__func_t ;
struct TYPE_4__ {int db3; int state_pool; } ;
typedef TYPE_1__ svn_sqlite__db_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
struct function_wrapper_baton_t {void* baton; int func; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 int * VAR_2 ;
 struct function_wrapper_baton_t* FUNC_1 (int ,int) ;
 int FUNC_2 (int ,char const*,int,int,struct function_wrapper_baton_t*,int ,int *,int *) ;
 int VAR_3 ;

svn_error_t *
FUNC_3(svn_sqlite__db_t *VAR_4,
                                   const char *VAR_5,
                                   int VAR_6,
                                   svn_boolean_t VAR_7,
                                   svn_sqlite__func_t VAR_8,
                                   void *VAR_9)
{
  int VAR_10;
  struct function_wrapper_baton_t *VAR_11 = FUNC_1(VAR_4->state_pool,
                                                     sizeof(*VAR_11));

  VAR_11->func = VAR_8;
  VAR_11->baton = VAR_9;

  VAR_10 = VAR_0;
  if (VAR_7)
    VAR_10 |= VAR_1;

  FUNC_0(FUNC_2(VAR_4->db3, VAR_5, VAR_6, VAR_10,
                                     VAR_11, VAR_3, ((void*)0), ((void*)0)),
             VAR_4);

  return VAR_2;
}
