
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_error_t ;
typedef size_t apr_size_t ;
typedef int apr_pool_t ;
struct TYPE_4__ {size_t len; int * data; } ;
struct TYPE_6__ {int handler; TYPE_1__ cmd; } ;
struct TYPE_5__ {int handler; int * cmd; } ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 TYPE_3__* VAR_1 ;
 size_t FUNC_1 (int *,size_t) ;
 TYPE_2__* VAR_2 ;
 size_t FUNC_2 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(void *VAR_3,
              apr_pool_t *VAR_4)
{
  int VAR_5;
  for (VAR_5 = 0; VAR_2[VAR_5].cmd; VAR_5++)
    {
      apr_size_t VAR_6 = FUNC_2(VAR_2[VAR_5].cmd);
      apr_size_t VAR_7 = FUNC_1(VAR_2[VAR_5].cmd, VAR_6);
      FUNC_0(VAR_1[VAR_7].cmd.data == ((void*)0));

      VAR_1[VAR_7].cmd.data = VAR_2[VAR_5].cmd;
      VAR_1[VAR_7].cmd.len = VAR_6;
      VAR_1[VAR_7].handler = VAR_2[VAR_5].handler;
    }

  return VAR_0;
}
