
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * pool; void* close_handles; void* noecho; int * outfd; int * infd; } ;
typedef TYPE_1__ terminal_handle_t ;
typedef void* svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_file_t ;


 int FUNC_0 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void
FUNC_1(terminal_handle_t *VAR_0,
                     apr_file_t *VAR_1, apr_file_t *VAR_2,
                     svn_boolean_t VAR_3, svn_boolean_t VAR_4,
                     apr_pool_t *VAR_5)
{
  FUNC_0(VAR_0, 0, sizeof(*VAR_0));
  VAR_0->infd = VAR_1;
  VAR_0->outfd = VAR_2;
  VAR_0->noecho = VAR_3;
  VAR_0->close_handles = VAR_4;
  VAR_0->pool = VAR_5;
}
