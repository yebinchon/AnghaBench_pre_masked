
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ svn_revnum_t ;
struct TYPE_14__ {TYPE_1__* vtable; } ;
typedef TYPE_2__ svn_ra_session_t ;
struct TYPE_15__ {scalar_t__ apr_err; } ;
typedef TYPE_3__ svn_error_t ;
typedef int apr_pool_t ;
struct TYPE_13__ {TYPE_3__* (* get_deleted_rev ) (TYPE_2__*,char const*,scalar_t__,scalar_t__,scalar_t__*,int *) ;} ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*) ;
 TYPE_3__* FUNC_3 (TYPE_2__*,char const*,scalar_t__,scalar_t__,scalar_t__*,int *) ;
 int FUNC_4 (TYPE_3__*) ;
 TYPE_3__* FUNC_5 (int ,int *,int ) ;
 TYPE_3__* FUNC_6 (int ,int *,int ,scalar_t__) ;
 TYPE_3__* FUNC_7 (TYPE_2__*,char const*,scalar_t__,scalar_t__,scalar_t__*,int *) ;
 int FUNC_8 (char const*) ;

svn_error_t *
FUNC_9(svn_ra_session_t *VAR_2,
                       const char *VAR_3,
                       svn_revnum_t VAR_4,
                       svn_revnum_t VAR_5,
                       svn_revnum_t *VAR_6,
                       apr_pool_t *VAR_7)
{
  svn_error_t *VAR_8;


  FUNC_0(FUNC_8(VAR_3));

  if (!FUNC_1(VAR_4))
    return FUNC_6(VAR_0, ((void*)0),
                             FUNC_2("Invalid peg revision %ld"), VAR_4);
  if (!FUNC_1(VAR_5))
    return FUNC_6(VAR_0, ((void*)0),
                             FUNC_2("Invalid end revision %ld"), VAR_5);
  if (VAR_5 <= VAR_4)
    return FUNC_5(VAR_0, ((void*)0),
                            FUNC_2("Peg revision must precede end revision"));
  VAR_8 = VAR_2->vtable->get_deleted_rev(VAR_2, VAR_3,
                                         VAR_4,
                                         VAR_5,
                                         VAR_6,
                                         VAR_7);
  if (VAR_8 && (VAR_8->apr_err == VAR_1))
    {
      FUNC_4(VAR_8);


      VAR_8 = FUNC_7(VAR_2, VAR_3, VAR_4,
                                             VAR_5, VAR_6,
                                             VAR_7);
    }
  return VAR_8;
}
