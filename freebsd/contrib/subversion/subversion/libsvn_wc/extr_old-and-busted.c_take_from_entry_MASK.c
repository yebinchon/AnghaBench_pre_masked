
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ revision; scalar_t__ kind; scalar_t__ schedule; scalar_t__ uuid; scalar_t__ repos; int name; scalar_t__ url; } ;
typedef TYPE_1__ svn_wc_entry_t ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,int ,int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void
FUNC_1(const svn_wc_entry_t *VAR_4,
                svn_wc_entry_t *VAR_5,
                apr_pool_t *VAR_6)
{


  if ((VAR_5->revision == VAR_0) && (VAR_5->kind != VAR_1))
    VAR_5->revision = VAR_4->revision;


  if (! VAR_5->url)
    VAR_5->url = FUNC_0(VAR_4->url, VAR_5->name, VAR_6);

  if (! VAR_5->repos)
    VAR_5->repos = VAR_4->repos;

  if ((! VAR_5->uuid)
      && (! ((VAR_5->schedule == VAR_2)
             || (VAR_5->schedule == VAR_3))))
    {
      VAR_5->uuid = VAR_4->uuid;
    }
}
