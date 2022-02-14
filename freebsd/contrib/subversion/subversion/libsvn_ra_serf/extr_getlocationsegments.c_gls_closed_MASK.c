
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_string_t ;
typedef void* svn_revnum_t ;
typedef int svn_ra_serf__xml_estate_t ;
struct TYPE_4__ {char const* path; void* range_end; void* range_start; } ;
typedef TYPE_1__ svn_location_segment_t ;
typedef int svn_error_t ;
struct TYPE_5__ {int receiver_baton; int (* receiver ) (TYPE_1__*,int ,int *) ;} ;
typedef TYPE_2__ gls_context_t ;
typedef int apr_pool_t ;
typedef scalar_t__ apr_int64_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int * VAR_1 ;
 int FUNC_2 (TYPE_1__*,int ,int *) ;
 int FUNC_3 (scalar_t__*,char const*) ;
 char* FUNC_4 (int *,char*) ;

__attribute__((used)) static svn_error_t *
FUNC_5(svn_ra_serf__xml_estate_t *VAR_2,
           void *VAR_3,
           int VAR_4,
           const svn_string_t *VAR_5,
           apr_hash_t *VAR_6,
           apr_pool_t *VAR_7)
{
  gls_context_t *VAR_8 = VAR_3;
  const char *VAR_9;
  const char *VAR_10;
  const char *VAR_11;
  apr_int64_t VAR_12;
  apr_int64_t VAR_13;
  svn_location_segment_t VAR_14;

  FUNC_1(VAR_4 == VAR_0);

  VAR_9 = FUNC_4(VAR_6, "path");
  VAR_10 = FUNC_4(VAR_6, "range-start");
  VAR_11 = FUNC_4(VAR_6, "range-end");


  FUNC_1(VAR_10 && VAR_11);

  FUNC_0(FUNC_3(&VAR_12, VAR_10));
  FUNC_0(FUNC_3(&VAR_13, VAR_11));

  VAR_14.path = VAR_9;
  VAR_14.range_start = (svn_revnum_t)VAR_12;
  VAR_14.range_end = (svn_revnum_t)VAR_13;
  FUNC_0(VAR_8->receiver(&VAR_14, VAR_8->receiver_baton, VAR_7));

  return VAR_1;
}
