
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ fsap_data; } ;
typedef TYPE_1__ svn_fs_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (int ,int ,int ) ;

svn_error_t *
FUNC_2(svn_fs_t *VAR_3,
                 svn_boolean_t VAR_4)
{
  if ((VAR_4 && VAR_3->fsap_data)
      || ((! VAR_4) && (! VAR_3->fsap_data)))
    return VAR_2;
  if (VAR_4)
    return FUNC_1(VAR_1, 0,
                            FUNC_0("Filesystem object has not been opened yet"));
  else
    return FUNC_1(VAR_0, 0,
                            FUNC_0("Filesystem object already open"));
}
