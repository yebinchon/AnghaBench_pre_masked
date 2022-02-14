
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ zero_copy_limit; int zero_copy_succeeded; int dbaton; int dhandler; } ;
typedef TYPE_1__ zero_copy_baton_t ;
typedef int svn_error_t ;
typedef scalar_t__ apr_size_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (unsigned char const*,scalar_t__,int ,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_2(const unsigned char *VAR_3,
                     apr_size_t VAR_4,
                     void *VAR_5,
                     apr_pool_t *VAR_6)
{
  zero_copy_baton_t *VAR_7 = VAR_5;



  if (VAR_4 > VAR_7->zero_copy_limit)
    {
      VAR_7->zero_copy_succeeded = VAR_0;
      return VAR_1;
    }

  FUNC_0(FUNC_1(VAR_3, VAR_4,
                                    VAR_7->dhandler,
                                    VAR_7->dbaton, VAR_6));


  VAR_7->zero_copy_succeeded = VAR_2;
  return VAR_1;
}
