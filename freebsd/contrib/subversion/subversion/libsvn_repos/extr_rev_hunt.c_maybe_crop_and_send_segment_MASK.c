
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ svn_revnum_t ;
struct TYPE_5__ {scalar_t__ range_start; scalar_t__ range_end; } ;
typedef TYPE_1__ svn_location_segment_t ;
typedef int (* svn_location_segment_receiver_t ) (TYPE_1__*,void*,int *) ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;

__attribute__((used)) static svn_error_t *
FUNC_1(svn_location_segment_t *VAR_1,
                            svn_revnum_t VAR_2,
                            svn_revnum_t VAR_3,
                            svn_location_segment_receiver_t VAR_4,
                            void *VAR_5,
                            apr_pool_t *VAR_6)
{


  if (! ((VAR_1->range_start > VAR_2)
         || (VAR_1->range_end < VAR_3)))
    {


      if (VAR_1->range_start < VAR_3)
        VAR_1->range_start = VAR_3;
      if (VAR_1->range_end > VAR_2)
        VAR_1->range_end = VAR_2;
      FUNC_0(VAR_4(VAR_1, VAR_5, VAR_6));
    }
  return VAR_0;
}
