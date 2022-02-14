
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ max_in; scalar_t__ current_in; scalar_t__ max_out; scalar_t__ current_out; } ;
typedef TYPE_1__ svn_ra_svn_conn_t ;
typedef int svn_error_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int * FUNC_0 (int ,int *,char*) ;

__attribute__((used)) static svn_error_t *
FUNC_1(svn_ra_svn_conn_t *VAR_3)
{
  if (VAR_3->max_in && (VAR_3->current_in > VAR_3->max_in))
    return FUNC_0(VAR_0, ((void*)0),
                            "The client request size exceeds the "
                            "configured limit");

  if (VAR_3->max_out && (VAR_3->current_out > VAR_3->max_out))
    return FUNC_0(VAR_1, ((void*)0),
                            "The server response size exceeds the "
                            "configured limit");

  return VAR_2;
}
