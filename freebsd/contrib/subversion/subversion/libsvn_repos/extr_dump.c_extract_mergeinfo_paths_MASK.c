
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_2__ {int pool; } ;
struct extract_mergeinfo_paths_baton {TYPE_1__ buffer; int result; scalar_t__ normalize; } ;
typedef scalar_t__ apr_ssize_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int ,int ,scalar_t__,int ) ;
 int FUNC_2 (int ,void const*,scalar_t__) ;
 int FUNC_3 (int ,char const*) ;
 int VAR_1 ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (char const**,void const*,scalar_t__,TYPE_1__*) ;

__attribute__((used)) static svn_error_t *
FUNC_6(void *VAR_2, const void *VAR_3, apr_ssize_t VAR_4,
                         void *VAR_5, apr_pool_t *VAR_6)
{
  struct extract_mergeinfo_paths_baton *const VAR_7 = VAR_2;
  if (VAR_7->normalize)
    {
      const char *VAR_8;
      FUNC_0(FUNC_5(&VAR_8, VAR_3, VAR_4, &VAR_7->buffer));
      FUNC_4(VAR_7->result,
                    FUNC_3(VAR_7->buffer.pool, VAR_8),
                    VAR_1);
    }
  else
    FUNC_1(VAR_7->result,
                 FUNC_2(VAR_7->buffer.pool, VAR_3, VAR_4 + 1), VAR_4,
                 VAR_1);
  return VAR_0;
}
