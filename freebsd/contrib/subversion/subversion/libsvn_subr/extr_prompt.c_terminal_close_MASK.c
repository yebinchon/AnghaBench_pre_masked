
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int pool; } ;
typedef TYPE_1__ terminal_handle_t ;
typedef int svn_error_t ;
typedef scalar_t__ apr_status_t ;


 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,TYPE_1__*,int ) ;
 int * FUNC_2 (scalar_t__,int *,int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static svn_error_t *
FUNC_4(terminal_handle_t *VAR_3)
{
  apr_status_t VAR_4;


  FUNC_1(VAR_3->pool, VAR_3, VAR_2);

  VAR_4 = FUNC_3(VAR_3, VAR_1, VAR_1);
  if (VAR_4)
    return FUNC_2(VAR_4, ((void*)0), FUNC_0("Can't close terminal"));
  return VAR_0;
}
