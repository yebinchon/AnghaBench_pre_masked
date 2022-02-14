
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef scalar_t__ svn_revnum_t ;
struct TYPE_16__ {TYPE_1__* vtable; } ;
typedef TYPE_2__ svn_ra_session_t ;
typedef int svn_file_rev_handler_t ;
struct TYPE_17__ {scalar_t__ apr_err; } ;
typedef TYPE_3__ svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;
struct TYPE_15__ {TYPE_3__* (* get_file_revs ) (TYPE_2__*,char const*,scalar_t__,scalar_t__,scalar_t__,int ,void*,int *) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (scalar_t__) ;
 int VAR_1 ;
 TYPE_3__* FUNC_3 (TYPE_2__*,char const*,scalar_t__,scalar_t__,scalar_t__,int ,void*,int *) ;
 int FUNC_4 (TYPE_3__*) ;
 TYPE_3__* FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_2__*,int ,int *,int *) ;
 int FUNC_7 (TYPE_2__*,int *,int *) ;
 TYPE_3__* FUNC_8 (TYPE_2__*,char const*,scalar_t__,scalar_t__,int ,void*,int *) ;
 int FUNC_9 (char const*) ;

svn_error_t *FUNC_10(svn_ra_session_t *VAR_2,
                                   const char *VAR_3,
                                   svn_revnum_t VAR_4,
                                   svn_revnum_t VAR_5,
                                   svn_boolean_t VAR_6,
                                   svn_file_rev_handler_t VAR_7,
                                   void *VAR_8,
                                   apr_pool_t *VAR_9)
{
  svn_error_t *VAR_10;

  FUNC_1(FUNC_9(VAR_3));

  if (VAR_6)
    FUNC_0(FUNC_7(VAR_2, ((void*)0), VAR_9));

  if (VAR_4 > VAR_5 || !FUNC_2(VAR_4))
    FUNC_0(
     FUNC_6(VAR_2,
                                   VAR_1,
                                   ((void*)0),
                                   VAR_9));

  VAR_10 = VAR_2->vtable->get_file_revs(VAR_2, VAR_3, VAR_4, VAR_5,
                                       VAR_6,
                                       VAR_7, VAR_8, VAR_9);
  if (VAR_10 && (VAR_10->apr_err == VAR_0)
      && !VAR_6)
    {
      FUNC_4(VAR_10);


      VAR_10 = FUNC_8(VAR_2, VAR_3, VAR_4, VAR_5,
                                       VAR_7, VAR_8, VAR_9);
    }
  return FUNC_5(VAR_10);
}
