
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int range_end; int path; } ;
typedef TYPE_1__ svn_location_segment_t ;
typedef int svn_error_t ;
struct TYPE_5__ {int rev; int pool; scalar_t__ path; scalar_t__ is_first; } ;
typedef TYPE_2__ copyfrom_info_t ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_1(svn_location_segment_t *VAR_2,
                       void *VAR_3,
                       apr_pool_t *VAR_4)
{
  copyfrom_info_t *VAR_5 = VAR_3;




  if (VAR_5->path)
    return VAR_1;




  if (VAR_5->is_first)
    {
      VAR_5->is_first = VAR_0;
    }
  else if (VAR_2->path)
    {

      VAR_5->path = FUNC_0(VAR_5->pool, VAR_2->path);
      VAR_5->rev = VAR_2->range_end;



    }

  return VAR_1;
}
