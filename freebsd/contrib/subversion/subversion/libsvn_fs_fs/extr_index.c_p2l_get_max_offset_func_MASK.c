
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_2__ {int file_size; } ;
typedef TYPE_1__ p2l_header_t ;
typedef int max_offset ;
typedef int apr_size_t ;
typedef int apr_pool_t ;
typedef int apr_off_t ;


 int * VAR_0 ;
 void* FUNC_0 (int *,int *,int) ;

__attribute__((used)) static svn_error_t *
FUNC_1(void **VAR_1,
                        const void *VAR_2,
                        apr_size_t VAR_3,
                        void *VAR_4,
                        apr_pool_t *VAR_5)
{
  const p2l_header_t *VAR_6 = VAR_2;
  apr_off_t VAR_7 = VAR_6->file_size;
  *VAR_1 = FUNC_0(VAR_5, &VAR_7, sizeof(VAR_7));

  return VAR_0;
}
