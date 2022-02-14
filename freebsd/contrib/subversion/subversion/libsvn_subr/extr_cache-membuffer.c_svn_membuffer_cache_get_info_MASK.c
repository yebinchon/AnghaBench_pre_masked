
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ segment_count; } ;
typedef TYPE_1__ svn_membuffer_t ;
struct TYPE_10__ {TYPE_1__* membuffer; } ;
typedef TYPE_2__ svn_membuffer_cache_t ;
typedef int svn_error_t ;
struct TYPE_11__ {int id; } ;
typedef TYPE_3__ svn_cache__info_t ;
typedef int svn_boolean_t ;
typedef scalar_t__ apr_uint32_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*,TYPE_3__*,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_4(void *VAR_2,
                             svn_cache__info_t *VAR_3,
                             svn_boolean_t VAR_4,
                             apr_pool_t *VAR_5)
{
  svn_membuffer_cache_t *VAR_6 = VAR_2;
  apr_uint32_t VAR_7;



  VAR_3->id = FUNC_1(VAR_5, FUNC_2(VAR_6));



  for (VAR_7 = 0; VAR_7 < VAR_6->membuffer->segment_count; ++VAR_7)
    {
      svn_membuffer_t *VAR_8 = VAR_6->membuffer + VAR_7;
      FUNC_0(VAR_8,
                     FUNC_3(VAR_8, VAR_3, VAR_0));
    }

  return VAR_1;
}
