
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int combined_key; int membuffer; int key_len; } ;
typedef TYPE_1__ svn_membuffer_cache_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (TYPE_1__*,void const*,int ) ;
 int FUNC_2 (int ,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(svn_boolean_t *VAR_2,
                            void *VAR_3,
                            const void *VAR_4,
                            apr_pool_t *VAR_5)
{
  svn_membuffer_cache_t *VAR_6 = VAR_3;


  if (VAR_4 == ((void*)0))
    {
      *VAR_2 = VAR_0;

      return VAR_1;
    }




  FUNC_1(VAR_6, VAR_4, VAR_6->key_len);


  FUNC_0(FUNC_2(VAR_6->membuffer,
                                  &VAR_6->combined_key,
                                  VAR_2));


  return VAR_1;
}
