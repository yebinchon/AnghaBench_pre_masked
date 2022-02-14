
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_ra_serf__xml_estate_t ;
typedef int svn_error_t ;
struct TYPE_4__ {TYPE_1__* cur_file; } ;
typedef TYPE_2__ report_context_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;
struct TYPE_3__ {scalar_t__ txdelta_stream; } ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_2(svn_ra_serf__xml_estate_t *VAR_2,
             void *VAR_3,
             int VAR_4,
             const char *VAR_5,
             apr_size_t VAR_6,
             apr_pool_t *VAR_7)
{
  report_context_t *VAR_8 = VAR_3;

  if (VAR_4 == VAR_1 && VAR_8->cur_file
      && VAR_8->cur_file->txdelta_stream)
    {
      FUNC_0(FUNC_1(VAR_8->cur_file->txdelta_stream, VAR_5, &VAR_6));
    }

  return VAR_0;
}
