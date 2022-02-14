
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ svn_revnum_t ;
typedef int svn_error_t ;
struct TYPE_7__ {int (* close_edit ) (void*,int ) ;int (* close_directory ) (void*,int ) ;int (* open_root ) (void*,scalar_t__,int ,void**) ;} ;
typedef TYPE_3__ svn_delta_editor_t ;
struct revision_baton {scalar_t__ rev; int rev_offset; int pool; int author; TYPE_2__* pb; int datestamp; int revprop_table; TYPE_1__* db; } ;
struct TYPE_6__ {int session; int skip_revprops; int rev_map; int quiet; void* commit_edit_baton; TYPE_3__* commit_editor; } ;
struct TYPE_5__ {void* baton; struct TYPE_5__* parent; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int * VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (void*,int ) ;
 int FUNC_4 (void*,int ) ;
 int FUNC_5 (void*,int ) ;
 int FUNC_6 (void*,scalar_t__,int ,void**) ;
 int FUNC_7 (void*,int ) ;
 int FUNC_8 (void*,int ) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,scalar_t__,int ,int *,int ,int ) ;
 int FUNC_13 (int ,TYPE_3__ const**,void**,int ,int ,void*,int *,int ,int ) ;
 int FUNC_14 (int ,int ,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_15(void *VAR_6)
{
  struct revision_baton *VAR_7 = VAR_6;
  const svn_delta_editor_t *VAR_8 = VAR_7->pb->commit_editor;
  void *VAR_9 = VAR_7->pb->commit_edit_baton;
  svn_revnum_t VAR_10 = VAR_1;


  if (VAR_7->rev == 0)
    {

      if (! VAR_7->pb->quiet)
        FUNC_0(FUNC_9(VAR_7->pool, "* Loaded revision 0.\n"));
    }
  else if (VAR_8)
    {


      while (VAR_7->db && VAR_7->db->parent)
        {
          FUNC_0(VAR_8->close_directory(VAR_7->db->baton, VAR_7->pool));
          VAR_7->db = VAR_7->db->parent;
        }

      FUNC_0(VAR_8->close_directory(VAR_7->db->baton, VAR_7->pool));
      FUNC_0(VAR_8->close_edit(VAR_9, VAR_7->pool));
    }
  else
    {
      svn_revnum_t VAR_11 = VAR_7->rev - VAR_7->rev_offset - 1;
      void *VAR_12;


      FUNC_0(FUNC_13(VAR_7->pb->session, &VAR_8,
                                        &VAR_9, VAR_7->revprop_table,
                                        VAR_5, VAR_6,
                                        ((void*)0), VAR_0, VAR_7->pool));

      FUNC_0(VAR_8->open_root(VAR_9,
                                       VAR_11,
                                       VAR_7->pool, &VAR_12));

      FUNC_0(VAR_8->close_directory(VAR_12, VAR_7->pool));
      FUNC_0(VAR_8->close_edit(VAR_9, VAR_7->pool));
    }





  if (VAR_7->rev > 0)
    {
      VAR_10 = FUNC_2(VAR_7->pb->rev_map, VAR_7->rev);
    }
  else if (VAR_7->rev_offset == -1)
    {
      VAR_10 = 0;
    }

  if (FUNC_1(VAR_10))
    {
      if (!FUNC_10(VAR_7->pb->skip_revprops, VAR_4))
        {
          FUNC_0(FUNC_14(VAR_4,
                                           VAR_7->datestamp, VAR_7->pool));
          FUNC_0(FUNC_12(VAR_7->pb->session, VAR_10,
                                          VAR_4,
                                          ((void*)0), VAR_7->datestamp, VAR_7->pool));
        }
      if (!FUNC_10(VAR_7->pb->skip_revprops, VAR_3))
        {
          FUNC_0(FUNC_14(VAR_3,
                                           VAR_7->author, VAR_7->pool));
          FUNC_0(FUNC_12(VAR_7->pb->session, VAR_10,
                                          VAR_3,
                                          ((void*)0), VAR_7->author, VAR_7->pool));
        }
    }

  FUNC_11(VAR_7->pool);

  return VAR_2;
}
