
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_2__ {int start; int len; void* read; int buffer; } ;
typedef TYPE_1__ fulltext_baton_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;


 void* FUNC_0 (int,int) ;
 int * VAR_0 ;
 int FUNC_1 (int ,char const*,void*) ;

__attribute__((used)) static svn_error_t *
FUNC_2(void **VAR_1,
                     const void *VAR_2,
                     apr_size_t VAR_3,
                     void *VAR_4,
                     apr_pool_t *VAR_5)
{
  fulltext_baton_t *VAR_6 = VAR_4;


  apr_size_t VAR_7 = VAR_3 - 1;


  apr_size_t VAR_8 = FUNC_0(VAR_6->start, VAR_7);
  VAR_6->read = FUNC_0(VAR_7 - VAR_8, VAR_6->len);


  FUNC_1(VAR_6->buffer, (const char *)VAR_2 + VAR_8,
         VAR_6->read);

  return VAR_0;
}
