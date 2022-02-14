
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int size; scalar_t__ data; } ;
typedef TYPE_1__ svn_membuf_t ;
typedef int svn_error_t ;
typedef int apr_size_t ;
typedef scalar_t__ apr_int32_t ;
typedef int apr_byte_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (int ,int *,int ,long) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (scalar_t__,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(svn_membuf_t *VAR_2, apr_int32_t VAR_3, apr_size_t *VAR_4)
{
  apr_size_t VAR_5;

  if (VAR_2->size - *VAR_4 < 4)
    FUNC_2(VAR_2, VAR_2->size + 4);

  VAR_5 = FUNC_3(VAR_3, ((apr_byte_t*)VAR_2->data + *VAR_4));
  if (!VAR_5)
    return FUNC_1(VAR_0, ((void*)0),
                             FUNC_0("Invalid Unicode character U+%04lX"),
                             (long)VAR_3);
  *VAR_4 += VAR_5;
  return VAR_1;
}
