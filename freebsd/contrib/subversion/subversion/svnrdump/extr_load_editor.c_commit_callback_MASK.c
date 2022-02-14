
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ svn_revnum_t ;
typedef int svn_error_t ;
struct TYPE_3__ {scalar_t__ revision; } ;
typedef TYPE_1__ svn_commit_info_t ;
struct revision_baton {scalar_t__ rev; struct parse_baton* pb; } ;
struct parse_baton {scalar_t__ last_rev_mapped; int rev_map; int quiet; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (int ,scalar_t__,scalar_t__) ;
 int FUNC_2 (int *,char*,scalar_t__) ;

__attribute__((used)) static svn_error_t *
FUNC_3(const svn_commit_info_t *VAR_2,
                void *VAR_3,
                apr_pool_t *VAR_4)
{
  struct revision_baton *VAR_5 = VAR_3;
  struct parse_baton *VAR_6 = VAR_5->pb;


  if (! VAR_6->quiet)
    FUNC_0(FUNC_2(VAR_4, "* Loaded revision %ld.\n",
                               VAR_2->revision));


  FUNC_1(VAR_6->rev_map, VAR_5->rev, VAR_2->revision);






  if ((VAR_6->last_rev_mapped != VAR_0)
      && (VAR_5->rev != VAR_6->last_rev_mapped + 1))
    {
      svn_revnum_t VAR_7;

      for (VAR_7 = VAR_6->last_rev_mapped + 1; VAR_7 < VAR_5->rev; VAR_7++)
        {
          FUNC_1(VAR_6->rev_map, VAR_7, VAR_6->last_rev_mapped);
        }
    }


  VAR_6->last_rev_mapped = VAR_5->rev;

  return VAR_1;
}
