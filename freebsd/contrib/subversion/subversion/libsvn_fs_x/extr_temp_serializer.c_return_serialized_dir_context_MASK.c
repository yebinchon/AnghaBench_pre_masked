
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_temp_serializer__context_t ;
struct TYPE_4__ {int len; void* data; int blocksize; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
struct TYPE_5__ {int len; } ;
typedef TYPE_2__ dir_data_t ;
typedef int apr_size_t ;


 int * VAR_0 ;
 TYPE_1__* FUNC_0 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_1(svn_temp_serializer__context_t *VAR_1,
                              void **VAR_2,
                              apr_size_t *VAR_3,
                              svn_boolean_t VAR_4)
{
  svn_stringbuf_t *VAR_5 = FUNC_0(VAR_1);

  *VAR_2 = VAR_5->data;
  *VAR_3 = VAR_4 ? VAR_5->blocksize : VAR_5->len;
  ((dir_data_t *)VAR_5->data)->len = VAR_5->len;

  return VAR_0;
}
