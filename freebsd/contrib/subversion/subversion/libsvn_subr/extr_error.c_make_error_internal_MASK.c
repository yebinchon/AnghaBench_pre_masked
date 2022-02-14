
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {long line; void* file; int * pool; struct TYPE_6__* child; scalar_t__ apr_err; } ;
typedef TYPE_1__ svn_error_t ;
typedef scalar_t__ apr_status_t ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 TYPE_1__* FUNC_1 (int *,int) ;
 int VAR_2 ;
 int FUNC_2 (int *,TYPE_1__*,int ,int ) ;
 scalar_t__ FUNC_3 (void**,scalar_t__) ;
 int VAR_3 ;
 void* VAR_4 ;
 scalar_t__ VAR_5 ;
 long VAR_6 ;
 scalar_t__ VAR_7 ;
 int * FUNC_4 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(apr_status_t VAR_8,
                    svn_error_t *VAR_9)
{
  apr_pool_t *VAR_10;
  svn_error_t *VAR_11;





  if (VAR_9)
    VAR_10 = VAR_9->pool;
  else
    {
      VAR_10 = FUNC_4(((void*)0));
      if (!VAR_10)
        FUNC_0();
    }


  VAR_11 = FUNC_1(VAR_10, sizeof(*VAR_11));


  VAR_11->apr_err = VAR_8;
  VAR_11->child = VAR_9;
  VAR_11->pool = VAR_10;
  return VAR_11;
}
