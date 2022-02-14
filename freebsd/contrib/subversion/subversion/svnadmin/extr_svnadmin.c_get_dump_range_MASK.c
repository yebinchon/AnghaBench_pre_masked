
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ svn_revnum_t ;
typedef int svn_repos_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
struct svnadmin_opt_state {int end_revision; int start_revision; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (scalar_t__*,int *,scalar_t__,int *,int *) ;
 int * FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (scalar_t__*,int *,int *) ;
 int * FUNC_5 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_6(svn_revnum_t *VAR_3,
               svn_revnum_t *VAR_4,
               svn_repos_t *VAR_5,
               struct svnadmin_opt_state *VAR_6,
               apr_pool_t *VAR_7)
{
  svn_fs_t *VAR_8;
  svn_revnum_t VAR_9;

  *VAR_3 = VAR_1;
  *VAR_4 = VAR_1;

  VAR_8 = FUNC_5(VAR_5);
  FUNC_0(FUNC_4(&VAR_9, VAR_8, VAR_7));


  FUNC_0(FUNC_2(VAR_3, &VAR_6->start_revision,
                     VAR_9, VAR_5, VAR_7));
  FUNC_0(FUNC_2(VAR_4, &VAR_6->end_revision,
                     VAR_9, VAR_5, VAR_7));


  if (*VAR_3 == VAR_1)
    {
      *VAR_3 = 0;
      *VAR_4 = VAR_9;
    }
  else if (*VAR_4 == VAR_1)
    {
      *VAR_4 = *VAR_3;
    }

  if (*VAR_3 > *VAR_4)
    return FUNC_3(VAR_0, ((void*)0),
       FUNC_1("First revision cannot be higher than second"));

  return VAR_2;
}
