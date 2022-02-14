
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct TYPE_3__ {int * (* deserialize_func ) (void**,char*,int ,int *) ;int mutex; } ;
typedef TYPE_1__ inprocess_cache_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int * VAR_1 ;
 int FUNC_1 (char**,int *,TYPE_1__*,void const*,int *) ;
 int * FUNC_2 (void**,char*,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(void **VAR_2,
                    svn_boolean_t *VAR_3,
                    void *VAR_4,
                    const void *VAR_5,
                    apr_pool_t *VAR_6)
{
  inprocess_cache_t *VAR_7 = VAR_4;

  if (VAR_5)
    {
      char* VAR_8;
      apr_size_t VAR_9;

      FUNC_0(VAR_7->mutex,
                           FUNC_1(&VAR_8,
                                                        &VAR_9,
                                                        VAR_7,
                                                        VAR_5,
                                                        VAR_6));


      *VAR_3 = (VAR_8 != ((void*)0));
      if (!VAR_8 || !VAR_9)
        *VAR_2 = ((void*)0);
      else
        return VAR_7->deserialize_func(VAR_2, VAR_8, VAR_9, VAR_6);
    }
  else
    {
      *VAR_2 = ((void*)0);
      *VAR_3 = VAR_0;
    }

  return VAR_1;
}
