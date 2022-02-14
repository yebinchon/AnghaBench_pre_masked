
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_temp_serializer__context_t ;
struct TYPE_3__ {int len; void* data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int svn_fs_id_t ;
typedef int svn_error_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 int FUNC_0 (int *,int const**) ;
 TYPE_1__* FUNC_1 (int *) ;
 int * FUNC_2 (int *,int ,int,int *) ;

svn_error_t *
FUNC_3(void **VAR_1,
                        apr_size_t *VAR_2,
                        void *VAR_3,
                        apr_pool_t *VAR_4)
{
  const svn_fs_id_t *VAR_5 = VAR_3;
  svn_stringbuf_t *VAR_6;


  svn_temp_serializer__context_t *VAR_7 =
      FUNC_2(((void*)0), 0, 250, VAR_4);


  FUNC_0(VAR_7, &VAR_5);


  VAR_6 = FUNC_1(VAR_7);
  *VAR_1 = VAR_6->data;
  *VAR_2 = VAR_6->len;

  return VAR_0;
}
