
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_3__ {int (* user_callback ) (int *,char*) ;int * pending_errors; } ;
typedef TYPE_1__ bdb_error_info_t ;
typedef int bdb_env_t ;
typedef int DB_ENV ;


 int FUNC_0 (int const*) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (int const*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int *) ;
 int * FUNC_4 (int ,int *,char*,char const*) ;

__attribute__((used)) static void
FUNC_5(const DB_ENV *VAR_1, const char *VAR_2, const char *VAR_3)
{


  bdb_error_info_t *VAR_4 = FUNC_1((const bdb_env_t *) VAR_2);
  svn_error_t *VAR_5;

  FUNC_0(VAR_1);

  VAR_5 = FUNC_4(VAR_0, ((void*)0), "bdb: %s", VAR_3);
  if (VAR_4->pending_errors)
    FUNC_3(VAR_4->pending_errors, VAR_5);
  else
    VAR_4->pending_errors = VAR_5;

  if (VAR_4->user_callback)
    VAR_4->user_callback(((void*)0), (char *)VAR_3);
}
