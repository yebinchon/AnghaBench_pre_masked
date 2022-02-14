
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ svn_revnum_t ;
struct TYPE_5__ {char const* path; scalar_t__ range_start; scalar_t__ range_end; } ;
typedef TYPE_1__ svn_location_segment_t ;
typedef int * (* svn_location_segment_receiver_t ) (TYPE_1__*,void*,int *) ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 TYPE_1__* FUNC_0 (int *,int) ;

__attribute__((used)) static svn_error_t *
FUNC_1(const char *VAR_1,
                            svn_revnum_t VAR_2,
                            svn_revnum_t VAR_3,
                            svn_revnum_t VAR_4,
                            svn_location_segment_receiver_t VAR_5,
                            void *VAR_6,
                            apr_pool_t *VAR_7)
{
  svn_location_segment_t *VAR_8 = FUNC_0(VAR_7, sizeof(*VAR_8));
  VAR_8->path = VAR_1 ? ((*VAR_1 == '/') ? VAR_1 + 1 : VAR_1) : ((void*)0);
  VAR_8->range_start = VAR_3;
  VAR_8->range_end = VAR_4;
  if (VAR_8->range_start <= VAR_2)
    {
      if (VAR_8->range_end > VAR_2)
        VAR_8->range_end = VAR_2;
      return VAR_5(VAR_8, VAR_6, VAR_7);
    }
  return VAR_0;
}
