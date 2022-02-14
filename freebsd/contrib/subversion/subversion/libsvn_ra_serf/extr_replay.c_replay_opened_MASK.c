
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ svn_txdelta_window_handler_t ;
typedef int svn_ra_serf__xml_estate_t ;
typedef int svn_ra_serf__dav_props_t ;
typedef int svn_error_t ;
struct revision_report_t {TYPE_2__* editor; struct replay_node_t* current_node; int pool; int rev_props; int editor_baton; int replay_baton; int revision; int (* revstart_func ) (int ,int ,TYPE_2__**,int *,int ,int ) ;TYPE_1__* propfind_handler; } ;
struct replay_node_t {int pool; scalar_t__ stream; int baton; int file; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
struct TYPE_4__ {int (* apply_textdelta ) (int ,char const*,int ,scalar_t__*,void**) ;} ;
struct TYPE_3__ {scalar_t__ done; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int ,TYPE_2__**,int *,int ,int ) ;
 int FUNC_3 (int ,char const*,int ,scalar_t__*,void**) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 scalar_t__ VAR_5 ;
 int * FUNC_5 (int ,int *,int *) ;
 char* FUNC_6 (int *,char*) ;
 int FUNC_7 (int ,int *) ;
 int * FUNC_8 (int *,int) ;
 int FUNC_9 (scalar_t__,void*,int ,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_10(svn_ra_serf__xml_estate_t *VAR_6,
              void *VAR_7,
              int VAR_8,
              const svn_ra_serf__dav_props_t *VAR_9,
              apr_pool_t *VAR_10)
{
  struct revision_report_t *VAR_11 = VAR_7;

  if (VAR_8 == VAR_1)
    {

      FUNC_1(!VAR_11->propfind_handler || VAR_11->propfind_handler->done);

      FUNC_7(VAR_11->rev_props, VAR_10);

      if (VAR_11->revstart_func)
        {
          FUNC_0(VAR_11->revstart_func(VAR_11->revision, VAR_11->replay_baton,
                                     &VAR_11->editor, &VAR_11->editor_baton,
                                     VAR_11->rev_props,
                                     VAR_11->pool));
        }
    }
  else if (VAR_8 == VAR_0)
    {
       struct replay_node_t *VAR_12 = VAR_11->current_node;
       apr_hash_t *VAR_13;
       const char *VAR_14;
       svn_txdelta_window_handler_t VAR_15;
       void *VAR_16;

       if (! VAR_12 || ! VAR_12->file || VAR_12->stream)
         return FUNC_5(VAR_2, ((void*)0), ((void*)0));


       VAR_13 = FUNC_8(VAR_6, VAR_0);
       VAR_14 = FUNC_6(VAR_13, "checksum");

       FUNC_0(VAR_11->editor->apply_textdelta(VAR_12->baton, VAR_14, VAR_12->pool,
                                            &VAR_15, &VAR_16));

       if (VAR_15 != VAR_5)
         {
            VAR_12->stream = FUNC_4(
                                    FUNC_9(VAR_15,
                                                              VAR_16,
                                                              VAR_4,
                                                              VAR_12->pool),
                                    VAR_12->pool);
         }
    }

  return VAR_3;
}
