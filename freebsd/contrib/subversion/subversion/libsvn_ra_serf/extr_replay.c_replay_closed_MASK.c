
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_string_t ;
typedef int svn_revnum_t ;
typedef int svn_ra_serf__xml_estate_t ;
typedef int svn_error_t ;
struct revision_report_t {struct replay_node_t* current_node; TYPE_1__* editor; int editor_baton; struct replay_node_t* root_node; int * pool; int rev_props; int replay_baton; int revision; int (* revfinish_func ) (int ,int ,TYPE_1__*,int ,int ,int *) ;} ;
struct replay_node_t {int file; int * stream; int baton; int * pool; struct replay_node_t* parent; } ;
typedef int apr_pool_t ;
typedef scalar_t__ apr_int64_t ;
typedef int apr_hash_t ;
struct TYPE_2__ {int (* change_dir_prop ) (int ,char const*,int const*,int *) ;int (* change_file_prop ) (int ,char const*,int const*,int *) ;int (* delete_entry ) (char const*,int ,int ,int *) ;int (* close_directory ) (int ,int *) ;int (* close_file ) (int ,char*,int *) ;int (* add_file ) (char const*,int ,char*,int ,int *,int *) ;int (* add_directory ) (char const*,int ,char*,int ,int *,int *) ;int (* open_file ) (char const*,int ,int ,int *,int *) ;int (* open_directory ) (char const*,int ,int ,int *,int *) ;int (* open_root ) (int ,int ,int *,int *) ;int (* set_target_revision ) (int ,int ,int *) ;} ;


 void* VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;


 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ) ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_1 (scalar_t__) ;
 int * VAR_12 ;
 void* VAR_13 ;
 void* FUNC_2 (int *,int) ;
 int FUNC_3 (int ,int ,TYPE_1__*,int ,int ,int *) ;
 int FUNC_4 (char const*,int ,int ,int *) ;
 int FUNC_5 (int ,char const*,int const*,int *) ;
 int FUNC_6 (int ,char const*,int const*,int *) ;
 int FUNC_7 (int ,int ,int *) ;
 int FUNC_8 (int ,int ,int *,int *) ;
 int FUNC_9 (char const*,int ,int ,int *,int *) ;
 int FUNC_10 (char const*,int ,int ,int *,int *) ;
 int FUNC_11 (char const*,int ,char*,int ,int *,int *) ;
 int FUNC_12 (char const*,int ,char*,int ,int *,int *) ;
 int FUNC_13 (int ,char*,int *) ;
 int FUNC_14 (int ,int *) ;
 int * FUNC_15 (int const*,int *) ;
 int FUNC_16 (scalar_t__*,char const*) ;
 int * FUNC_17 (int ,int *,int *) ;
 char* FUNC_18 (int *,char*) ;
 int * FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_22(svn_ra_serf__xml_estate_t *VAR_14,
              void *VAR_15,
              int VAR_16,
              const svn_string_t *VAR_17,
              apr_hash_t *VAR_18,
              apr_pool_t *VAR_19)
{
  struct revision_report_t *VAR_20 = VAR_15;

  if (VAR_16 == VAR_8)
    {
      if (VAR_20->current_node)
        return FUNC_17(VAR_10, ((void*)0), ((void*)0));

      if (VAR_20->revfinish_func)
        {
          FUNC_0(VAR_20->revfinish_func(VAR_20->revision, VAR_20->replay_baton,
                                      VAR_20->editor, VAR_20->editor_baton,
                                      VAR_20->rev_props, VAR_19));
        }
    }
  else if (VAR_16 == VAR_9)
    {
      const char *VAR_21 = FUNC_18(VAR_18, "rev");
      apr_int64_t VAR_22;

      FUNC_0(FUNC_16(&VAR_22, VAR_21));
      FUNC_0(VAR_20->editor->set_target_revision(VAR_20->editor_baton,
                                               (svn_revnum_t)VAR_22,
                                               VAR_19));
    }
  else if (VAR_16 == VAR_7)
    {
      const char *VAR_23 = FUNC_18(VAR_18, "rev");
      apr_int64_t VAR_24;
      apr_pool_t *VAR_25 = FUNC_19(VAR_20->pool);

      if (VAR_20->current_node || VAR_20->root_node)
        return FUNC_17(VAR_10, ((void*)0), ((void*)0));

      VAR_20->root_node = FUNC_2(VAR_25, sizeof(*VAR_20->root_node));
      VAR_20->root_node->pool = VAR_25;

      VAR_20->current_node = VAR_20->root_node;

      FUNC_0(FUNC_16(&VAR_24, VAR_23));
      FUNC_0(VAR_20->editor->open_root(VAR_20->editor_baton, (svn_revnum_t)VAR_24,
                                     VAR_25,
                                     &VAR_20->current_node->baton));
    }
  else if (VAR_16 == 129
           || VAR_16 == 128
           || VAR_16 == 131
           || VAR_16 == 130)
    {
      struct replay_node_t *VAR_26;
      apr_pool_t *VAR_27;
      const char *VAR_28 = FUNC_18(VAR_18, "name");
      const char *VAR_29;
      apr_int64_t VAR_30;

      if (!VAR_20->current_node || VAR_20->current_node->file)
        return FUNC_17(VAR_10, ((void*)0), ((void*)0));

      VAR_27 = FUNC_19(VAR_20->current_node->pool);
      VAR_26 = FUNC_2(VAR_27, sizeof(*VAR_26));
      VAR_26->pool = VAR_27;
      VAR_26->parent = VAR_20->current_node;

      if (VAR_16 == 129
          || VAR_16 == 128)
        {
          VAR_29 = FUNC_18(VAR_18, "rev");
        }
      else
        VAR_29 = FUNC_18(VAR_18, "copyfrom-rev");

      if (VAR_29)
        FUNC_0(FUNC_16(&VAR_30, VAR_29));
      else
        VAR_30 = VAR_11;

      switch (VAR_16)
        {
          case 129:
            VAR_26->file = VAR_0;
            FUNC_0(VAR_20->editor->open_directory(VAR_28,
                                    VAR_20->current_node->baton,
                                    (svn_revnum_t)VAR_30,
                                    VAR_26->pool,
                                    &VAR_26->baton));
            break;
          case 128:
            VAR_26->file = VAR_13;
            FUNC_0(VAR_20->editor->open_file(VAR_28,
                                    VAR_20->current_node->baton,
                                    (svn_revnum_t)VAR_30,
                                    VAR_26->pool,
                                    &VAR_26->baton));
            break;
          case 131:
            VAR_26->file = VAR_0;
            FUNC_0(VAR_20->editor->add_directory(
                                    VAR_28,
                                    VAR_20->current_node->baton,
                                    FUNC_1(VAR_30)
                                        ? FUNC_18(VAR_18, "copyfrom-path")
                                        : ((void*)0),
                                    (svn_revnum_t)VAR_30,
                                    VAR_26->pool,
                                    &VAR_26->baton));
            break;
          case 130:
            VAR_26->file = VAR_13;
            FUNC_0(VAR_20->editor->add_file(
                                    VAR_28,
                                    VAR_20->current_node->baton,
                                    FUNC_1(VAR_30)
                                        ? FUNC_18(VAR_18, "copyfrom-path")
                                        : ((void*)0),
                                    (svn_revnum_t)VAR_30,
                                    VAR_26->pool,
                                    &VAR_26->baton));
            break;

        }
      VAR_20->current_node = VAR_26;
    }
  else if (VAR_16 == VAR_5)
    {
      struct replay_node_t *VAR_31 = VAR_20->current_node;

      if (! VAR_31 || ! VAR_31->file)
        return FUNC_17(VAR_10, ((void*)0), ((void*)0));

      FUNC_0(VAR_20->editor->close_file(VAR_31->baton,
                                      FUNC_18(VAR_18, "checksum"),
                                      VAR_31->pool));
      VAR_20->current_node = VAR_31->parent;
      FUNC_20(VAR_31->pool);
    }
  else if (VAR_16 == VAR_4)
    {
      struct replay_node_t *VAR_32 = VAR_20->current_node;

      if (! VAR_32 || VAR_32->file)
        return FUNC_17(VAR_10, ((void*)0), ((void*)0));

      FUNC_0(VAR_20->editor->close_directory(VAR_32->baton, VAR_32->pool));
      VAR_20->current_node = VAR_32->parent;
      FUNC_20(VAR_32->pool);
    }
  else if (VAR_16 == VAR_6)
    {
      struct replay_node_t *VAR_33 = VAR_20->current_node;
      const char *VAR_34 = FUNC_18(VAR_18, "name");
      const char *VAR_35 = FUNC_18(VAR_18, "rev");
      apr_int64_t VAR_36;

      if (! VAR_33 || VAR_33->file)
        return FUNC_17(VAR_10, ((void*)0), ((void*)0));

      FUNC_0(FUNC_16(&VAR_36, VAR_35));
      FUNC_0(VAR_20->editor->delete_entry(VAR_34,
                                        (svn_revnum_t)VAR_36,
                                        VAR_33->baton,
                                        VAR_19));
    }
  else if (VAR_16 == VAR_3
           || VAR_16 == VAR_2)
    {
      struct replay_node_t *VAR_37 = VAR_20->current_node;
      const char *VAR_38;
      const svn_string_t *VAR_39;

      if (! VAR_37 || VAR_37->file != (VAR_16 == VAR_3))
        return FUNC_17(VAR_10, ((void*)0), ((void*)0));

      VAR_38 = FUNC_18(VAR_18, "name");

      if (FUNC_18(VAR_18, "del"))
        VAR_39 = ((void*)0);
      else
        VAR_39 = FUNC_15(VAR_17, VAR_19);

      if (VAR_37->file)
        {
          FUNC_0(VAR_20->editor->change_file_prop(VAR_37->baton, VAR_38, VAR_39,
                                                VAR_19));
        }
      else
        {
          FUNC_0(VAR_20->editor->change_dir_prop(VAR_37->baton, VAR_38, VAR_39,
                                               VAR_19));
        }
    }
  else if (VAR_16 == VAR_1)
    {
      struct replay_node_t *VAR_40 = VAR_20->current_node;

      if (! VAR_40 || ! VAR_40->file)
        return FUNC_17(VAR_10, ((void*)0), ((void*)0));

      if (VAR_40->stream)
        FUNC_0(FUNC_21(VAR_40->stream));

      VAR_40->stream = ((void*)0);
    }
  return VAR_12;
}
