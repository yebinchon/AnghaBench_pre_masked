
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* value; } ;
typedef TYPE_2__ svn_prop_t ;
typedef int svn_error_t ;
typedef int svn_cancel_func_t ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;
struct TYPE_4__ {int data; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_1 (int *,char const*) ;
 TYPE_2__* FUNC_2 (int const*,int ) ;
 int VAR_4 ;
 int FUNC_3 (int *,char const**,int *,int ,int *,int *) ;
 int FUNC_4 (char const*,char const*,char const*,int ,int *,int ,int ,int ,void*,int *) ;
 int FUNC_5 (int *,char const**,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_6(const char **VAR_5,
                         const apr_array_header_t *VAR_6,
                         const char *VAR_7,
                         svn_cancel_func_t VAR_8,
                         void *VAR_9,
                         apr_pool_t *VAR_10,
                         apr_pool_t *VAR_11)
{
  const svn_prop_t *VAR_12 = FUNC_2(VAR_6, VAR_2);

  if (VAR_12 && VAR_12->value)
    {
      const char *VAR_13;
      const char *VAR_14;

      FUNC_5(((void*)0), &VAR_13, VAR_12->value->data);
      FUNC_0(FUNC_3(((void*)0), &VAR_14, ((void*)0),
                                       VAR_4,
                                       VAR_10, VAR_11));




      FUNC_0(FUNC_4(VAR_7,
                                            VAR_14,
                                            VAR_13,
                                            VAR_3 ,
                                            ((void*)0) ,
                                            VAR_0 ,
                                            VAR_0 ,
                                            VAR_8, VAR_9,
                                            VAR_11));
      *VAR_5 = FUNC_1(VAR_10, VAR_14);
    }
  else
    *VAR_5 = FUNC_1(VAR_10, VAR_7);

  return VAR_1;
}
