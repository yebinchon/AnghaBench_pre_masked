
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int svn_revnum_t ;
struct TYPE_12__ {TYPE_1__* vtable; } ;
typedef TYPE_2__ svn_ra_session_t ;
typedef int svn_location_segment_receiver_t ;
struct TYPE_13__ {scalar_t__ apr_err; } ;
typedef TYPE_3__ svn_error_t ;
typedef int apr_pool_t ;
struct TYPE_11__ {TYPE_3__* (* get_location_segments ) (TYPE_2__*,char const*,int ,int ,int ,int ,void*,int *) ;} ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 TYPE_3__* FUNC_1 (TYPE_2__*,char const*,int ,int ,int ,int ,void*,int *) ;
 int FUNC_2 (TYPE_3__*) ;
 TYPE_3__* FUNC_3 (TYPE_2__*,char const*,int ,int ,int ,int ,void*,int *) ;
 int FUNC_4 (char const*) ;

svn_error_t *
FUNC_5(svn_ra_session_t *VAR_1,
                             const char *VAR_2,
                             svn_revnum_t VAR_3,
                             svn_revnum_t VAR_4,
                             svn_revnum_t VAR_5,
                             svn_location_segment_receiver_t VAR_6,
                             void *VAR_7,
                             apr_pool_t *VAR_8)
{
  svn_error_t *VAR_9;

  FUNC_0(FUNC_4(VAR_2));
  VAR_9 = VAR_1->vtable->get_location_segments(VAR_1, VAR_2, VAR_3,
                                               VAR_4, VAR_5,
                                               VAR_6, VAR_7, VAR_8);
  if (VAR_9 && (VAR_9->apr_err == VAR_0))
    {
      FUNC_2(VAR_9);


      VAR_9 = FUNC_3(VAR_1, VAR_2,
                                               VAR_3, VAR_4,
                                               VAR_5, VAR_6,
                                               VAR_7, VAR_8);
    }
  return VAR_9;
}
