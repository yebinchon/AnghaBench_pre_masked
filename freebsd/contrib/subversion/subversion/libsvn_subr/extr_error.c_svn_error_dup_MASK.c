
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {void* file; void* message; int * pool; struct TYPE_6__* child; } ;
typedef TYPE_1__ svn_error_t ;
typedef int apr_pool_t ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 () ;
 void* FUNC_1 (int *,int) ;
 int VAR_1 ;
 int FUNC_2 (int *,TYPE_1__*,int ,int ) ;
 void* FUNC_3 (int *,void*) ;
 int VAR_2 ;
 int * FUNC_4 (int *) ;

svn_error_t *
FUNC_5(const svn_error_t *VAR_3)
{
  apr_pool_t *VAR_4;
  svn_error_t *VAR_5 = ((void*)0), *VAR_6 = ((void*)0);

  if (!VAR_3)
    return VAR_0;

  VAR_4 = FUNC_4(((void*)0));
  if (!VAR_4)
    FUNC_0();

  for (; VAR_3; VAR_3 = VAR_3->child)
    {
      if (! VAR_5)
        {
          VAR_5 = FUNC_1(VAR_4, sizeof(*VAR_5));
          VAR_6 = VAR_5;
        }
      else
        {
          VAR_6->child = FUNC_1(VAR_4, sizeof(*VAR_6->child));
          VAR_6 = VAR_6->child;
        }
      *VAR_6 = *VAR_3;
      VAR_6->pool = VAR_4;
      if (VAR_6->message)
        VAR_6->message = FUNC_3(VAR_4, VAR_6->message);
      if (VAR_6->file)
        VAR_6->file = FUNC_3(VAR_4, VAR_6->file);
    }







  return VAR_5;
}
