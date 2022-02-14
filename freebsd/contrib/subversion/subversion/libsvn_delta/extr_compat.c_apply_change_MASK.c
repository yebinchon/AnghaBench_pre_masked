
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_txdelta_window_handler_t ;
typedef int svn_stream_t ;
typedef int svn_revnum_t ;
typedef int svn_error_t ;
struct TYPE_3__ {void* baton; } ;
struct editor_baton {TYPE_2__* deditor; scalar_t__ repos_root; TYPE_1__ root; int changes; int base_relpath; } ;
struct change_node {scalar_t__ action; scalar_t__ kind; char* copyfrom_path; int checksum; scalar_t__ contents_abspath; scalar_t__ contents_changed; int changing; int copyfrom_rev; int deleting; } ;
typedef int apr_pool_t ;
struct TYPE_4__ {int (* close_file ) (void*,char const*,int *) ;int (* apply_textdelta ) (void*,int *,int *,int *,void**) ;int (* open_file ) (char const*,void*,int ,int *,void**) ;int (* open_directory ) (char const*,void*,int ,int *,void**) ;int (* add_file ) (char const*,void*,char const*,int ,int *,void**) ;int (* add_directory ) (char const*,void*,char const*,int ,int *,void**) ;int (* delete_entry ) (char const*,int ,void*,int *) ;int (* absent_file ) (char const*,void*,int *) ;int (* absent_directory ) (char const*,void*,int *) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int ) ;
 int * VAR_5 ;
 int VAR_6 ;
 char* FUNC_3 (int *,char*,char const*,int ) ;
 int FUNC_4 (struct editor_baton const*,char const*,struct change_node const*,void*,int *) ;
 int FUNC_5 (char const*,int ,void*,int *) ;
 int FUNC_6 (void*,char const*,int *) ;
 int FUNC_7 (char const*,void*,int *) ;
 int FUNC_8 (char const*,void*,int *) ;
 int FUNC_9 (char const*,int ,void*,int *) ;
 int FUNC_10 (char const*,void*,char const*,int ,int *,void**) ;
 int FUNC_11 (char const*,void*,char const*,int ,int *,void**) ;
 int FUNC_12 (char const*,void*,int ,int *,void**) ;
 int FUNC_13 (char const*,void*,int ,int *,void**) ;
 int FUNC_14 (void*,int *,int *,int *,void**) ;
 char* FUNC_15 (int ,int *) ;
 struct change_node* FUNC_16 (int ,char const*) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 char* FUNC_17 (scalar_t__,char*,int *) ;
 char* FUNC_18 (int ,char const*,int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int **,scalar_t__,int *,int *) ;
 int FUNC_21 (int *,int ,void*,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_22(void **VAR_9,
             void *VAR_10,
             void *VAR_11,
             const char *VAR_12,
             apr_pool_t *VAR_13)
{

  apr_pool_t *VAR_14 = VAR_13;
  const struct editor_baton *VAR_15 = VAR_11;
  const struct change_node *VAR_16;
  const char *VAR_17;
  void *VAR_18 = ((void*)0);


  *VAR_9 = ((void*)0);

  VAR_17 = FUNC_18(VAR_15->base_relpath, VAR_12, VAR_14);
  VAR_16 = FUNC_16(VAR_15->changes, VAR_17);


  FUNC_1(VAR_16 != ((void*)0));


  if (VAR_10 == ((void*)0))
    {

      *VAR_9 = VAR_15->root.baton;


      FUNC_1(VAR_16->action == VAR_3);
      FUNC_0(FUNC_4(VAR_15, VAR_17, VAR_16, *VAR_9, VAR_14));


      return VAR_5;
    }

  if (VAR_16->action == VAR_2)
    {
      FUNC_0(VAR_15->deditor->delete_entry(VAR_12, VAR_16->deleting,
                                        VAR_10, VAR_14));


      return VAR_5;
    }


  FUNC_1(VAR_16->kind != VAR_8);

  if (VAR_16->action == VAR_1)
    {
      if (VAR_16->kind == VAR_7)
        FUNC_0(VAR_15->deditor->absent_directory(VAR_12, VAR_10,
                                              VAR_14));
      else
        FUNC_0(VAR_15->deditor->absent_file(VAR_12, VAR_10,
                                         VAR_14));


      return VAR_5;
    }


  if (VAR_16->action == VAR_0)
    {
      const char *VAR_19 = ((void*)0);
      svn_revnum_t VAR_20 = VAR_4;


      if (FUNC_2(VAR_16->deleting))
        FUNC_0(VAR_15->deditor->delete_entry(VAR_12, VAR_16->deleting,
                                          VAR_10, VAR_14));


      if (VAR_16->copyfrom_path)
        {
          if (VAR_15->repos_root)
            VAR_19 = FUNC_17(VAR_15->repos_root,
                                                       VAR_16->copyfrom_path,
                                                       VAR_14);
          else
            {
              VAR_19 = VAR_16->copyfrom_path;


              if (VAR_19[0] != '/')
                VAR_19 = FUNC_3(VAR_14, "/",
                                           VAR_19, VAR_6);
            }

          VAR_20 = VAR_16->copyfrom_rev;
        }

      if (VAR_16->kind == VAR_7)
        FUNC_0(VAR_15->deditor->add_directory(VAR_12, VAR_10,
                                           VAR_19, VAR_20,
                                           VAR_13, VAR_9));
      else
        FUNC_0(VAR_15->deditor->add_file(VAR_12, VAR_10,
                                      VAR_19, VAR_20,
                                      VAR_13, &VAR_18));
    }
  else
    {
      if (VAR_16->kind == VAR_7)
        FUNC_0(VAR_15->deditor->open_directory(VAR_12, VAR_10,
                                            VAR_16->changing,
                                            VAR_13, VAR_9));
      else
        FUNC_0(VAR_15->deditor->open_file(VAR_12, VAR_10,
                                       VAR_16->changing,
                                       VAR_13, &VAR_18));
    }


  if (VAR_16->kind == VAR_7)
    FUNC_0(FUNC_4(VAR_15, VAR_17, VAR_16, *VAR_9, VAR_14));
  else
    FUNC_0(FUNC_4(VAR_15, VAR_17, VAR_16, VAR_18, VAR_14));

  if (VAR_16->contents_changed && VAR_16->contents_abspath)
    {
      svn_txdelta_window_handler_t VAR_21;
      void *VAR_22;
      svn_stream_t *VAR_23;



      FUNC_0(VAR_15->deditor->apply_textdelta(VAR_18, ((void*)0), VAR_14,
                                           &VAR_21, &VAR_22));
      FUNC_0(FUNC_20(&VAR_23, VAR_16->contents_abspath,
                                       VAR_14, VAR_14));

      FUNC_0(FUNC_21(VAR_23, VAR_21, VAR_22,
                                      ((void*)0), VAR_14));
      FUNC_0(FUNC_19(VAR_23));
    }

  if (VAR_18)
    {
      const char *VAR_24 = FUNC_15(VAR_16->checksum,
                                                   VAR_14);

      FUNC_0(VAR_15->deditor->close_file(VAR_18, VAR_24, VAR_14));
    }

  return VAR_5;
}
