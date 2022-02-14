
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* data; int pool; int size; } ;
typedef TYPE_1__ svn_membuf_t ;
typedef int apr_size_t ;


 int FUNC_0 (void**,int *,int ,int ) ;
 int FUNC_1 (void const* const,void const* const,int const) ;

void
FUNC_2(svn_membuf_t *VAR_0, apr_size_t VAR_1)
{
  const void *const VAR_2 = VAR_0->data;
  const apr_size_t VAR_3 = VAR_0->size;

  FUNC_0(&VAR_0->data, &VAR_0->size, VAR_1, VAR_0->pool);



  if (VAR_2 && VAR_2 != VAR_0->data)
    FUNC_1(VAR_0->data, VAR_2, VAR_3);
}
