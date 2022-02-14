
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_string_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
struct TYPE_5__ {int wrapped_node_baton; TYPE_3__* edit_baton; } ;
typedef TYPE_2__ node_baton_t ;
struct TYPE_6__ {TYPE_1__* wrapped_editor; int * normalized_node_props_counter; void* mergeinfo_tweaked; int source_prop_encoding; void* svnmerge_blocked; scalar_t__ migrate_svnmerge; void* svnmerge_migrated; void* mergeinfo_stripped; scalar_t__ strip_mergeinfo; } ;
typedef TYPE_3__ edit_baton_t ;
typedef int apr_pool_t ;
struct TYPE_4__ {int * (* change_file_prop ) (int ,char const*,int const*,int *) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 char* VAR_2 ;
 void* VAR_3 ;
 int FUNC_1 (int const**,scalar_t__*,int ,int *,int *) ;
 int FUNC_2 (int const**,scalar_t__*,int *,int *) ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 int * FUNC_4 (int ,char const*,int const*,int *) ;
 scalar_t__ FUNC_5 (char const*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_6 (char const*) ;

__attribute__((used)) static svn_error_t *
FUNC_7(void *VAR_5,
                 const char *VAR_6,
                 const svn_string_t *VAR_7,
                 apr_pool_t *VAR_8)
{
  node_baton_t *VAR_9 = VAR_5;
  edit_baton_t *VAR_10 = VAR_9->edit_baton;


  if (FUNC_6(VAR_6) != VAR_4)
    return VAR_1;


  if (VAR_10->strip_mergeinfo && (FUNC_3(VAR_6, VAR_2) == 0))
    {
      VAR_10->mergeinfo_stripped = VAR_3;
      return VAR_1;
    }


  if (VAR_10->migrate_svnmerge && (FUNC_3(VAR_6, "svnmerge-integrated") == 0))
    {
      VAR_10->svnmerge_migrated = VAR_3;
      return VAR_1;
    }



  if (VAR_10->migrate_svnmerge && (FUNC_3(VAR_6, "svnmerge-blocked") == 0))
    {
      VAR_10->svnmerge_blocked = VAR_3;
    }


  if (FUNC_5(VAR_6))
    {
      svn_boolean_t VAR_11;
      svn_boolean_t VAR_12 = VAR_0;


      FUNC_0(FUNC_1(&VAR_7, &VAR_11,
                               VAR_10->source_prop_encoding, VAR_8, VAR_8));

      if (VAR_7 && FUNC_3(VAR_6, VAR_2) == 0)
        {
          FUNC_0(FUNC_2(&VAR_7, &VAR_12,
                                      VAR_8, VAR_8));
          if (VAR_12)
            VAR_10->mergeinfo_tweaked = VAR_3;
        }
      if (VAR_11)
        (*(VAR_10->normalized_node_props_counter))++;
    }

  return VAR_10->wrapped_editor->change_file_prop(VAR_9->wrapped_node_baton,
                                              VAR_6, VAR_7, VAR_8);
}
