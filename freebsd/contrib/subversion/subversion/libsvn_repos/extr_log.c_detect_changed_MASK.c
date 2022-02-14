
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_repos_revision_access_level_t ;
typedef int svn_fs_t ;
typedef int svn_fs_root_t ;
typedef int svn_fs_path_change_iterator_t ;
struct TYPE_7__ {char* data; } ;
struct TYPE_8__ {scalar_t__ node_kind; scalar_t__ change_kind; char* copyfrom_path; int copyfrom_rev; void* copyfrom_known; TYPE_1__ path; } ;
typedef TYPE_2__ svn_fs_path_change3_t ;
typedef int svn_fs_history_t ;
typedef int svn_error_t ;
typedef void* svn_boolean_t ;
struct TYPE_9__ {int path_change_receiver_baton; int (* path_change_receiver ) (int ,TYPE_2__*,int *) ;int authz_read_baton; int (* authz_read_func ) (void**,int *,char const*,int ,int *) ;} ;
typedef TYPE_3__ log_callbacks_t ;
typedef int apr_pool_t ;


 void* VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int * VAR_1 ;
 void* VAR_2 ;
 int FUNC_2 (void**,int *,char const*,int ,int *) ;
 int FUNC_3 (void**,int *,char const*,int ,int *) ;
 int FUNC_4 (int ,TYPE_2__*,int *) ;
 int FUNC_5 (scalar_t__*,int *,char const*,int *) ;
 int FUNC_6 (int *,char const**,int *,char const*,int *) ;
 int FUNC_7 (char const**,int *,int *,int *) ;
 int FUNC_8 (int **,int *,void*,int *,int *) ;
 int FUNC_9 (int **,int *,char const*,int *,int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_10 (TYPE_2__**,int *) ;
 scalar_t__ VAR_5 ;
 int FUNC_11 (int **,int *,int *,int *) ;
 int FUNC_12 (int **,int *,int ,int *) ;
 char* FUNC_13 (char const*,char const*,int *) ;
 int FUNC_14 (char const**,char const**,char const*,int *) ;
 scalar_t__ VAR_6 ;
 int FUNC_15 (int *) ;
 int * FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static svn_error_t *
FUNC_18(svn_repos_revision_access_level_t *VAR_10,
               svn_fs_root_t *VAR_11,
               svn_fs_t *VAR_12,
               const log_callbacks_t *VAR_13,
               apr_pool_t *VAR_14)
{
  svn_fs_path_change_iterator_t *VAR_15;
  svn_fs_path_change3_t *VAR_16;
  apr_pool_t *VAR_17;
  svn_boolean_t VAR_18 = VAR_0;
  svn_boolean_t VAR_19 = VAR_0;


  FUNC_0(FUNC_11(&VAR_15, VAR_11, VAR_14, VAR_14));
  FUNC_0(FUNC_10(&VAR_16, VAR_15));

  if (!VAR_16)
    {


      *VAR_10 = VAR_7;
      return VAR_1;
    }

  VAR_17 = FUNC_16(VAR_14);
  while (VAR_16)
    {



      const char *VAR_20 = VAR_16->path.data;
      FUNC_15(VAR_17);


      if (VAR_13->authz_read_func)
        {
          svn_boolean_t VAR_21;
          FUNC_0(VAR_13->authz_read_func(&VAR_21, VAR_11, VAR_20,
                                             VAR_13->authz_read_baton,
                                             VAR_17));
          if (! VAR_21)
            {
              VAR_19 = VAR_2;
              FUNC_0(FUNC_10(&VAR_16, VAR_15));
              continue;
            }
        }


      VAR_18 = VAR_2;



      if (VAR_16->node_kind == VAR_6)
        {
          svn_fs_root_t *VAR_22 = VAR_11;
          const char *VAR_23 = VAR_20;



          if (VAR_16->change_kind == VAR_4)
            {
              svn_fs_history_t *VAR_24;
              svn_revnum_t VAR_25;
              const char *VAR_26, *VAR_27;

              FUNC_14(&VAR_26, &VAR_27, VAR_20, VAR_17);

              FUNC_0(FUNC_9(&VAR_24, VAR_11, VAR_26,
                                           VAR_17, VAR_17));



              FUNC_0(FUNC_8(&VAR_24, VAR_24, VAR_2, VAR_17,
                                           VAR_17));
              FUNC_0(FUNC_8(&VAR_24, VAR_24, VAR_2, VAR_17,
                                           VAR_17));

              FUNC_0(FUNC_7(&VAR_26, &VAR_25,
                                              VAR_24, VAR_17));
              FUNC_0(FUNC_12(&VAR_22, VAR_12, VAR_25,
                                           VAR_17));
              VAR_23 = FUNC_13(VAR_26, VAR_27, VAR_17);
            }

          FUNC_0(FUNC_5(&VAR_16->node_kind, VAR_22, VAR_23,
                                    VAR_17));
        }

      if ( (VAR_16->change_kind == VAR_3)
          || (VAR_16->change_kind == VAR_5))
        {
          const char *VAR_28 = VAR_16->copyfrom_path;
          svn_revnum_t VAR_29 = VAR_16->copyfrom_rev;




          if (!VAR_16->copyfrom_known)
            {
              FUNC_0(FUNC_6(&VAR_29, &VAR_28,
                                        VAR_11, VAR_20, VAR_17));
              VAR_16->copyfrom_known = VAR_2;
            }

          if (VAR_28 && FUNC_1(VAR_29))
            {
              svn_boolean_t VAR_30 = VAR_2;

              if (VAR_13->authz_read_func)
                {
                  svn_fs_root_t *VAR_31;

                  FUNC_0(FUNC_12(&VAR_31, VAR_12,
                                               VAR_29, VAR_17));
                  FUNC_0(VAR_13->authz_read_func(&VAR_30,
                                                     VAR_31,
                                                     VAR_28,
                                                     VAR_13->authz_read_baton,
                                                     VAR_17));
                  if (! VAR_30)
                    VAR_19 = VAR_2;
                }

              if (VAR_30)
                {
                  VAR_16->copyfrom_path = VAR_28;
                  VAR_16->copyfrom_rev = VAR_29;
                }
            }
        }

      if (VAR_13->path_change_receiver)
        FUNC_0(VAR_13->path_change_receiver(
                                     VAR_13->path_change_receiver_baton,
                                     VAR_16,
                                     VAR_17));


      FUNC_0(FUNC_10(&VAR_16, VAR_15));
    }

  FUNC_17(VAR_17);

  if (! VAR_18)
    {

      *VAR_10 = VAR_8;
    }
  else if (VAR_19)
    {

      *VAR_10 = VAR_9;
    }
  else
    {

      *VAR_10 = VAR_7;
    }

  return VAR_1;
}
