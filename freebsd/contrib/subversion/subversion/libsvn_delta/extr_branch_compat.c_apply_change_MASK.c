
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_txdelta_window_handler_t ;
typedef int svn_stream_t ;
typedef int svn_revnum_t ;
typedef int svn_error_t ;
struct TYPE_6__ {TYPE_5__* deditor; scalar_t__ repos_root_url; void* ev1_root_dir_baton; int fetch_baton; int fetch_func; int changes; } ;
typedef TYPE_1__ svn_branch__txn_priv_t ;
struct TYPE_7__ {scalar_t__ action; scalar_t__ kind; char* copyfrom_path; scalar_t__ contents_text; int changing_rev; int copyfrom_rev; int deleting_rev; scalar_t__ deleting; } ;
typedef TYPE_2__ change_node_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
struct TYPE_8__ {int (* close_file ) (void*,int *,int *) ;int (* apply_textdelta ) (void*,int *,int *,int *,void**) ;int (* open_file ) (char const*,void*,int ,int *,void**) ;int (* open_directory ) (char const*,void*,int ,int *,void**) ;int (* add_file ) (char const*,void*,char const*,int ,int *,void**) ;int (* add_directory ) (char const*,void*,char const*,int ,int *,void**) ;int (* delete_entry ) (char const*,int ,void*,int *) ;int (* absent_file ) (char const*,void*,int *) ;int (* absent_directory ) (char const*,void*,int *) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 char* FUNC_3 (int *,char*,char const*,int ) ;
 int FUNC_4 (char const*,TYPE_2__ const*,int *,TYPE_5__*,void*,int *) ;
 int FUNC_5 (int **,int ,char const*,int ,int ,int *,int *) ;
 int FUNC_6 (char const*,int ,void*,int *) ;
 int FUNC_7 (void*,int *,int *) ;
 int FUNC_8 (char const*,void*,int *) ;
 int FUNC_9 (char const*,void*,int *) ;
 int FUNC_10 (char const*,int ,void*,int *) ;
 int FUNC_11 (char const*,void*,char const*,int ,int *,void**) ;
 int FUNC_12 (char const*,void*,char const*,int ,int *,void**) ;
 int FUNC_13 (char const*,void*,int ,int *,void**) ;
 int FUNC_14 (char const*,void*,int ,int *,void**) ;
 int FUNC_15 (void*,int *,int *,int *,void**) ;
 TYPE_2__* FUNC_16 (int ,char const*) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 char* FUNC_17 (scalar_t__,char*,int *) ;
 int FUNC_18 (int *) ;
 int * FUNC_19 (scalar_t__,int *) ;
 int FUNC_20 (int *,int ,void*,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_21(void **VAR_10,
             void *VAR_11,
             void *VAR_12,
             const char *VAR_13,
             apr_pool_t *VAR_14)
{
  apr_pool_t *VAR_15 = VAR_14;
  const svn_branch__txn_priv_t *VAR_16 = VAR_12;
  const change_node_t *VAR_17 = FUNC_16(VAR_16->changes, VAR_13);
  void *VAR_18 = ((void*)0);
  apr_hash_t *VAR_19;


  FUNC_1(VAR_17 != ((void*)0));


  *VAR_10 = ((void*)0);

  FUNC_0(FUNC_5(&VAR_19, VAR_16->changes, VAR_13,
                           VAR_16->fetch_func, VAR_16->fetch_baton,
                           VAR_15, VAR_15));


  if (VAR_11 == ((void*)0))
    {

      *VAR_10 = VAR_16->ev1_root_dir_baton;


      FUNC_1(VAR_17->action == VAR_3);
      FUNC_0(FUNC_4(VAR_13, VAR_17, VAR_19,
                              VAR_16->deditor, *VAR_10, VAR_15));


      return VAR_5;
    }

  if (VAR_17->action == VAR_2)
    {
      FUNC_0(VAR_16->deditor->delete_entry(VAR_13, VAR_17->deleting_rev,
                                        VAR_11, VAR_15));


      return VAR_5;
    }


  FUNC_1(VAR_17->kind != VAR_9);
  if (VAR_17->action == VAR_0)
    {
      const char *VAR_20 = ((void*)0);
      svn_revnum_t VAR_21 = VAR_4;


      if (VAR_17->deleting)
        FUNC_0(VAR_16->deditor->delete_entry(VAR_13, VAR_17->deleting_rev,
                                          VAR_11, VAR_15));


      if (VAR_17->copyfrom_path)
        {


          if (VAR_16->repos_root_url)
            VAR_20 = FUNC_17(VAR_16->repos_root_url,
                                                       VAR_17->copyfrom_path,
                                                       VAR_15);
          else
            {
              VAR_20 = VAR_17->copyfrom_path;


              if (VAR_20[0] != '/')
                VAR_20 = FUNC_3(VAR_15, "/",
                                           VAR_20, VAR_6);
            }

          VAR_21 = VAR_17->copyfrom_rev;
        }

      if (VAR_17->kind == VAR_7)
        FUNC_0(VAR_16->deditor->add_directory(VAR_13, VAR_11,
                                           VAR_20, VAR_21,
                                           VAR_14, VAR_10));
      else if (VAR_17->kind == VAR_8)
        FUNC_0(VAR_16->deditor->add_file(VAR_13, VAR_11,
                                      VAR_20, VAR_21,
                                      VAR_14, &VAR_18));
      else
        FUNC_2();
    }
  else
    {






      if (VAR_17->kind == VAR_7)
        FUNC_0(VAR_16->deditor->open_directory(VAR_13, VAR_11,
                                            VAR_17->changing_rev,
                                            VAR_14, VAR_10));
      else if (VAR_17->kind == VAR_8)
        FUNC_0(VAR_16->deditor->open_file(VAR_13, VAR_11,
                                       VAR_17->changing_rev,
                                       VAR_14, &VAR_18));
      else
        FUNC_2();
    }


  if (VAR_17->kind == VAR_7)
    FUNC_0(FUNC_4(VAR_13, VAR_17, VAR_19,
                            VAR_16->deditor, *VAR_10, VAR_15));
  else
    FUNC_0(FUNC_4(VAR_13, VAR_17, VAR_19,
                            VAR_16->deditor, VAR_18, VAR_15));


  if (VAR_17->contents_text)
    {
      svn_stream_t *VAR_22;
      svn_txdelta_window_handler_t VAR_23;
      void *VAR_24;

      VAR_22 = FUNC_19(VAR_17->contents_text,
                                              VAR_15);


      FUNC_0(VAR_16->deditor->apply_textdelta(VAR_18, ((void*)0), VAR_15,
                                           &VAR_23, &VAR_24));

      FUNC_0(FUNC_20(VAR_22, VAR_23, VAR_24,
                                      ((void*)0), VAR_15));
      FUNC_0(FUNC_18(VAR_22));
    }

  if (VAR_18)
    {
      FUNC_0(VAR_16->deditor->close_file(VAR_18, ((void*)0), VAR_15));
    }

  return VAR_5;
}
