
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int apr_err; } ;
typedef TYPE_1__ svn_error_t ;
struct TYPE_6__ {int pool; int file_path; } ;
typedef TYPE_2__ set_read_only_baton_t ;
typedef int apr_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static apr_status_t
FUNC_2(void *VAR_2)
{
  set_read_only_baton_t *VAR_3 = VAR_2;
  apr_status_t VAR_4 = VAR_0;
  svn_error_t *VAR_5;

  VAR_5 = FUNC_1(VAR_3->file_path, VAR_1, VAR_3->pool);
  if (VAR_5)
    {
      VAR_4 = VAR_5->apr_err;
      FUNC_0(VAR_5);
    }

  return VAR_4;
}
