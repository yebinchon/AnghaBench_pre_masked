
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_4__ {int wrapped_edit_baton; TYPE_1__* wrapped_editor; scalar_t__ svnmerge_blocked; scalar_t__ svnmerge_migrated; scalar_t__ mergeinfo_stripped; scalar_t__ mergeinfo_tweaked; scalar_t__ got_textdeltas; int quiet; int base_revision; int called_open_root; } ;
typedef TYPE_2__ edit_baton_t ;
typedef int apr_pool_t ;
struct TYPE_3__ {int * (* close_edit ) (int ,int *) ;int (* close_directory ) (void*,int *) ;int (* open_root ) (int ,int ,int *,void**) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int *,void**) ;
 int FUNC_2 (void*,int *) ;
 int * FUNC_3 (int ,int *) ;
 int FUNC_4 (int *,char*) ;

__attribute__((used)) static svn_error_t *
FUNC_5(void *VAR_0,
           apr_pool_t *VAR_1)
{
  edit_baton_t *VAR_2 = VAR_0;







  if (! VAR_2->called_open_root)
    {
      void *VAR_3;
      FUNC_0(VAR_2->wrapped_editor->open_root(VAR_2->wrapped_edit_baton,
                                            VAR_2->base_revision, VAR_1,
                                            &VAR_3));
      FUNC_0(VAR_2->wrapped_editor->close_directory(VAR_3, VAR_1));
    }

  if (! VAR_2->quiet)
    {
      if (VAR_2->got_textdeltas)
        FUNC_0(FUNC_4(VAR_1, "\n"));
      if (VAR_2->mergeinfo_tweaked)
        FUNC_0(FUNC_4(VAR_1,
                                   "NOTE: Adjusted Subversion mergeinfo in "
                                   "this revision.\n"));
      if (VAR_2->mergeinfo_stripped)
        FUNC_0(FUNC_4(VAR_1,
                                   "NOTE: Dropped Subversion mergeinfo "
                                   "from this revision.\n"));
      if (VAR_2->svnmerge_migrated)
        FUNC_0(FUNC_4(VAR_1,
                                   "NOTE: Migrated 'svnmerge-integrated' in "
                                   "this revision.\n"));
      if (VAR_2->svnmerge_blocked)
        FUNC_0(FUNC_4(VAR_1,
                                   "NOTE: Saw 'svnmerge-blocked' in this "
                                   "revision (but didn't migrate it).\n"));
    }

  return VAR_2->wrapped_editor->close_edit(VAR_2->wrapped_edit_baton, VAR_1);
}
