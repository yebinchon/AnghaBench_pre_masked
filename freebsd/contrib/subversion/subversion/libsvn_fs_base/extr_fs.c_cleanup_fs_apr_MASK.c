
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int warning_baton; int (* warning ) (int ,int *) ;} ;
typedef TYPE_1__ svn_fs_t ;
typedef int svn_error_t ;
typedef int apr_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static apr_status_t
FUNC_4(void *VAR_2)
{
  svn_fs_t *VAR_3 = VAR_2;
  svn_error_t *VAR_4;

  FUNC_1(VAR_3);

  VAR_4 = FUNC_0(VAR_3);
  if (! VAR_4)
    return VAR_0;




  (*VAR_3->warning)(VAR_3->warning_baton, VAR_4);

  FUNC_3(VAR_4);

  return VAR_1;
}
