
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* child; int * pool; void* file; void* message; } ;
typedef TYPE_1__ svn_error_t ;
typedef int apr_pool_t ;


 TYPE_1__* FUNC_0 (int *,int) ;
 int FUNC_1 (int *,TYPE_1__*,int ) ;
 int VAR_0 ;
 int FUNC_2 (int *,TYPE_1__*,int ,int ) ;
 void* FUNC_3 (int *,void*) ;
 int VAR_1 ;
 int FUNC_4 (int *) ;

void
FUNC_5(svn_error_t *VAR_2, svn_error_t *VAR_3)
{
  apr_pool_t *VAR_4 = VAR_2->pool;
  apr_pool_t *VAR_5 = VAR_3->pool;

  while (VAR_2->child)
    VAR_2 = VAR_2->child;







  while (VAR_3)
    {
      VAR_2->child = FUNC_0(VAR_4, sizeof(*VAR_2->child));
      VAR_2 = VAR_2->child;
      *VAR_2 = *VAR_3;
      if (VAR_2->message)
        VAR_2->message = FUNC_3(VAR_4, VAR_3->message);
      if (VAR_2->file)
        VAR_2->file = FUNC_3(VAR_4, VAR_3->file);
      VAR_2->pool = VAR_4;




      VAR_3 = VAR_3->child;
    }
  FUNC_4(VAR_5);
}
