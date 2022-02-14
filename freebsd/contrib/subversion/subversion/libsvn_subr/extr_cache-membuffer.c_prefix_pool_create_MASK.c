
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_membuf_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct TYPE_4__ {int bytes_max; int bytes_used; int mutex; scalar_t__ values_used; scalar_t__ values_max; struct TYPE_4__* values; int map; } ;
typedef TYPE_1__ prefix_pool_t ;
typedef scalar_t__ apr_uint32_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int * VAR_1 ;
 TYPE_1__* FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(prefix_pool_t **VAR_2,
                   apr_size_t VAR_3,
                   svn_boolean_t VAR_4,
                   apr_pool_t *VAR_5)
{
  enum
    {




      ESTIMATED_BYTES_PER_ENTRY = 120
    };


  apr_size_t VAR_6 = FUNC_0(VAR_0,
                            VAR_3 / ESTIMATED_BYTES_PER_ENTRY);


  prefix_pool_t *VAR_7 = FUNC_2(VAR_5, sizeof(*VAR_7));
  VAR_7->map = FUNC_3(VAR_5);

  VAR_7->values = VAR_6
                 ? FUNC_2(VAR_5, VAR_6 * sizeof(const char *))
                 : ((void*)0);
  VAR_7->values_max = (apr_uint32_t)VAR_6;
  VAR_7->values_used = 0;

  VAR_7->bytes_max = VAR_3;
  VAR_7->bytes_used = VAR_6 * sizeof(svn_membuf_t);

  FUNC_1(FUNC_4(&VAR_7->mutex, VAR_4, VAR_5));


  *VAR_2 = VAR_7;
  return VAR_1;
}
