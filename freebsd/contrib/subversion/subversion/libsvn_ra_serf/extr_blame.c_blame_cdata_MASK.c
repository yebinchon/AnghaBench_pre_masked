
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_ra_serf__xml_estate_t ;
typedef int svn_error_t ;
struct TYPE_2__ {int stream; } ;
typedef TYPE_1__ blame_context_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_2(svn_ra_serf__xml_estate_t *VAR_2,
            void *VAR_3,
            int VAR_4,
            const char *VAR_5,
            apr_size_t VAR_6,
            apr_pool_t *VAR_7)
{
  blame_context_t *VAR_8 = VAR_3;

  if (VAR_4 == VAR_1)
    {
      FUNC_0(FUNC_1(VAR_8->stream, VAR_5, &VAR_6));

    }

  return VAR_0;
}
