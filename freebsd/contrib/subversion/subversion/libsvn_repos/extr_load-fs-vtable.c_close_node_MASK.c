
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_repos_notify_t ;
typedef int svn_error_t ;
struct revision_baton {scalar_t__ skipped; struct parse_baton* pb; } ;
struct parse_baton {int notify_pool; int notify_baton; int (* notify_func ) (int ,int *,int ) ;} ;
struct node_baton {struct revision_baton* rb; } ;


 int * VAR_0 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static svn_error_t *
FUNC_3(void *VAR_2)
{
  struct node_baton *VAR_3 = VAR_2;
  struct revision_baton *VAR_4 = VAR_3->rb;
  struct parse_baton *VAR_5 = VAR_4->pb;


  if (VAR_4->skipped)
    return VAR_0;

  if (VAR_5->notify_func)
    {

      svn_repos_notify_t *VAR_6 = FUNC_2(
                                            VAR_1,
                                            VAR_5->notify_pool);

      VAR_5->notify_func(VAR_5->notify_baton, VAR_6, VAR_5->notify_pool);
      FUNC_1(VAR_5->notify_pool);
    }

  return VAR_0;
}
