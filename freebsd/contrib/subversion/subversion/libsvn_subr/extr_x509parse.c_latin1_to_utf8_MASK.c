
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int len; scalar_t__* data; } ;
typedef TYPE_1__ svn_string_t ;
struct TYPE_8__ {scalar_t__* data; } ;
typedef TYPE_2__ svn_membuf_t ;
typedef int svn_error_t ;
typedef size_t apr_size_t ;
typedef int apr_pool_t ;
typedef unsigned char apr_int32_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 void* FUNC_1 (int *,int) ;
 int FUNC_2 (TYPE_2__*,int,int *) ;
 int FUNC_3 (TYPE_2__*,unsigned char*,int,size_t*) ;

__attribute__((used)) static svn_error_t *
FUNC_4(const svn_string_t **VAR_1, const svn_string_t *VAR_2,
               apr_pool_t *VAR_3)
{
  apr_int32_t *VAR_4;
  svn_membuf_t VAR_5;
  apr_size_t VAR_6;
  apr_size_t VAR_7;
  svn_string_t *VAR_8;

  VAR_4 = FUNC_1(VAR_3, VAR_2->len * sizeof(*VAR_4));
  for (VAR_7 = 0; VAR_7 < VAR_2->len; ++VAR_7)
    VAR_4[VAR_7] = (unsigned char)(VAR_2->data[VAR_7]);

  FUNC_2(&VAR_5, 2 * VAR_2->len, VAR_3);
  FUNC_0(FUNC_3(
              &VAR_5, VAR_4, VAR_2->len, &VAR_6));

  VAR_8 = FUNC_1(VAR_3, sizeof(*VAR_8));
  VAR_8->data = VAR_5.data;
  VAR_8->len = VAR_6;
  *VAR_1 = VAR_8;
  return VAR_0;
}
