
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_prop_t ;
struct revision_baton {scalar_t__ rev; int skipped; int * pool; int revprops; struct parse_baton* pb; } ;
struct parse_baton {scalar_t__ start_rev; scalar_t__ end_rev; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (char const*) ;
 int FUNC_2 (int *,int,int) ;
 struct revision_baton* FUNC_3 (int *,int) ;
 char* FUNC_4 (int *,int ) ;

__attribute__((used)) static struct revision_baton *
FUNC_5(apr_hash_t *VAR_2,
                    struct parse_baton *VAR_3,
                    apr_pool_t *VAR_4)
{
  struct revision_baton *VAR_5 = FUNC_3(VAR_4, sizeof(*VAR_5));
  const char *VAR_6;

  VAR_5->pb = VAR_3;
  VAR_5->pool = VAR_4;
  VAR_5->rev = VAR_0;
  VAR_5->revprops = FUNC_2(VAR_5->pool, 8, sizeof(svn_prop_t));

  if ((VAR_6 = FUNC_4(VAR_2, VAR_1)))
    {
      VAR_5->rev = FUNC_1(VAR_6);


      VAR_5->skipped = (FUNC_0(VAR_3->start_rev)
                     && ((VAR_5->rev < VAR_3->start_rev) ||
                         (VAR_5->rev > VAR_3->end_rev)));
    }

  return VAR_5;
}
