
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ svn_revnum_t ;
typedef int svn_ra_session_t ;
typedef int svn_error_t ;
struct TYPE_3__ {char const* path; scalar_t__ revision_deleted; } ;
typedef TYPE_1__ log_path_del_rev_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 int * VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (char const**,int *,char const*,int *) ;
 int VAR_5 ;
 int * FUNC_5 (int ,int *,int ) ;
 int * FUNC_6 (int ,int *,int ,scalar_t__) ;
 int FUNC_7 (int *,int *,scalar_t__,scalar_t__,int ,int ,int ,int ,int ,int ,TYPE_1__*,int *) ;

svn_error_t *
FUNC_8(svn_ra_session_t *VAR_6,
                                 const char *VAR_7,
                                 svn_revnum_t VAR_8,
                                 svn_revnum_t VAR_9,
                                 svn_revnum_t *VAR_10,
                                 apr_pool_t *VAR_11)
{
  const char *VAR_12;
  log_path_del_rev_t VAR_13;


  FUNC_0(FUNC_4(&VAR_12, VAR_6, VAR_7, VAR_11));

  if (!FUNC_1(VAR_8))
    return FUNC_6(VAR_1, ((void*)0),
                             FUNC_2("Invalid peg revision %ld"), VAR_8);
  if (!FUNC_1(VAR_9))
    return FUNC_6(VAR_1, ((void*)0),
                             FUNC_2("Invalid end revision %ld"), VAR_9);
  if (VAR_9 <= VAR_8)
    return FUNC_5(VAR_1, ((void*)0),
                            FUNC_2("Peg revision must precede end revision"));

  VAR_13.path = VAR_12;
  VAR_13.revision_deleted = VAR_2;



  FUNC_0(FUNC_7(VAR_6, ((void*)0), VAR_8, VAR_9, 0,
                          VAR_4, VAR_4, VAR_0,
                          FUNC_3(VAR_11, 0, sizeof(char *)),
                          VAR_5, &VAR_13,
                          VAR_11));
  *VAR_10 = VAR_13.revision_deleted;
  return VAR_3;
}
