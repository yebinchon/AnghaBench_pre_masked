
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_stream_t ;
struct TYPE_4__ {int abort_report; int finish_report; int link_path; int delete_path; int set_path; } ;
typedef TYPE_1__ svn_ra_reporter3_t ;
typedef int svn_error_t ;
struct report_baton {int * out; void* wrapped_report_baton; TYPE_1__ const* wrapped_reporter; } ;
typedef scalar_t__ apr_status_t ;
typedef int apr_pool_t ;
typedef int apr_file_t ;


 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int **,int *) ;
 void* FUNC_1 (int *,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_2 (scalar_t__,char*) ;
 int * FUNC_3 (int *,int ,int *) ;

svn_error_t *
FUNC_4(const svn_ra_reporter3_t **VAR_7,
                           void **VAR_8,
                           const svn_ra_reporter3_t *VAR_9,
                           void *VAR_10,
                           apr_pool_t *VAR_11)
{
  svn_ra_reporter3_t *VAR_12;
  struct report_baton *VAR_13;
  apr_file_t *VAR_14;
  svn_stream_t *VAR_15;

  apr_status_t VAR_16 = FUNC_0(&VAR_14, VAR_11);
  if (VAR_16)
    return FUNC_2(VAR_16, "Problem opening stderr");

  VAR_15 = FUNC_3(VAR_14, VAR_1, VAR_11);


  VAR_12 = FUNC_1(VAR_11, sizeof(*VAR_12));
  VAR_13 = FUNC_1(VAR_11, sizeof(*VAR_13));

  VAR_12->set_path = VAR_6;
  VAR_12->delete_path = VAR_3;
  VAR_12->link_path = VAR_5;
  VAR_12->finish_report = VAR_4;
  VAR_12->abort_report = VAR_2;

  VAR_13->wrapped_reporter = VAR_9;
  VAR_13->wrapped_report_baton = VAR_10;
  VAR_13->out = VAR_15;

  *VAR_7 = VAR_12;
  *VAR_8 = VAR_13;

  return VAR_0;
}
