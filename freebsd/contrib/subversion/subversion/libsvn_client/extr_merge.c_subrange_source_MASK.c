
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ svn_revnum_t ;
struct TYPE_8__ {scalar_t__ rev; int url; } ;
typedef TYPE_1__ svn_client__pathrev_t ;
typedef int svn_boolean_t ;
struct TYPE_9__ {int ancestral; TYPE_1__* loc2; TYPE_1__* loc1; } ;
typedef TYPE_2__ merge_source_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (TYPE_1__*,TYPE_1__*,int,int *) ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static merge_source_t *
FUNC_3(const merge_source_t *VAR_0,
                svn_revnum_t VAR_1,
                svn_revnum_t VAR_2,
                apr_pool_t *VAR_3)
{
  svn_boolean_t VAR_4 = (VAR_0->loc1->rev > VAR_0->loc2->rev);
  svn_boolean_t VAR_5 = (FUNC_2(VAR_0->loc1->url, VAR_0->loc2->url) == 0);
  svn_client__pathrev_t VAR_6 = *VAR_0->loc1;
  svn_client__pathrev_t VAR_7 = *VAR_0->loc2;


  FUNC_0(VAR_0->ancestral);
  FUNC_0(VAR_1 != VAR_2);

  VAR_6 = VAR_1;
  VAR_7 = VAR_2;
  if (! VAR_5)
    {
      if (VAR_4 && (VAR_2 != VAR_0->loc2->rev))
        {
          VAR_7 = VAR_0->loc1->url;
        }
      if ((! VAR_4) && (VAR_1 != VAR_0->loc1->rev))
        {
          VAR_6 = VAR_0->loc2->url;
        }
    }
  return FUNC_1(&VAR_6, &VAR_7, VAR_0->ancestral, VAR_3);
}
