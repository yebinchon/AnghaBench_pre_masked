
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int buf; } ;
typedef TYPE_1__ svn_spillbuf_reader_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;


 TYPE_1__* FUNC_0 (int *,int) ;
 int FUNC_1 (int ,int ,int *) ;

svn_spillbuf_reader_t *
FUNC_2(apr_size_t VAR_0,
                            apr_size_t VAR_1,
                            apr_pool_t *VAR_2)
{
  svn_spillbuf_reader_t *VAR_3 = FUNC_0(VAR_2, sizeof(*VAR_3));
  VAR_3->buf = FUNC_1(VAR_0, VAR_1, VAR_2);
  return VAR_3;
}
