
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_node_kind_t ;
typedef int svn_error_t ;
struct edit_baton {int revision; int ra_session; int pool; } ;
struct dir_baton {scalar_t__ skip_children; struct edit_baton* edit_baton; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (char const*,struct dir_baton*,int *) ;
 int FUNC_2 (char const*,struct dir_baton*,int *) ;


 int * FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,char const*,int ,int*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_6(const char *VAR_1,
             svn_revnum_t VAR_2,
             void *VAR_3,
             apr_pool_t *VAR_4)
{
  struct dir_baton *VAR_5 = VAR_3;
  struct edit_baton *VAR_6 = VAR_5->edit_baton;
  svn_node_kind_t VAR_7;
  apr_pool_t *VAR_8;


  if (VAR_5->skip_children)
    return VAR_0;

  VAR_8 = FUNC_3(VAR_6->pool);


  FUNC_0(FUNC_5(VAR_6->ra_session, VAR_1, VAR_6->revision, &VAR_7,
                            VAR_8));

  switch (VAR_7)
    {
    case 128:
      {
        FUNC_0(FUNC_2(VAR_1, VAR_5, VAR_8));
        break;
      }
    case 129:
      {
        FUNC_0(FUNC_1(VAR_1, VAR_5, VAR_8));
        break;
      }
    default:
      break;
    }

  FUNC_4(VAR_8);

  return VAR_0;
}
