
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int svn_fs_x__noderev_t ;
typedef int svn_fs_x__id_t ;
struct TYPE_12__ {char const* name; scalar_t__ out_of_date; int hint; int txn_filesize; } ;
typedef TYPE_1__ svn_fs_x__ede_baton_t ;
struct TYPE_13__ {int name; } ;
typedef TYPE_2__ svn_fs_x__dirent_t ;
struct TYPE_14__ {TYPE_6__* entries; } ;
typedef TYPE_3__ svn_fs_x__dir_data_t ;
typedef int svn_fs_t ;
typedef int svn_filesize_t ;
typedef int svn_error_t ;
typedef int svn_cache__t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;
struct TYPE_15__ {int nelts; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 TYPE_2__* FUNC_1 (int *,TYPE_2__*,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (TYPE_3__*,int *,int *,int *,int *) ;
 int FUNC_4 (int *,int *,int *,int *) ;
 int * FUNC_5 (int *,int *,int *) ;
 int FUNC_6 (void**,scalar_t__*,int *,int *,int ,TYPE_1__*,int *) ;
 scalar_t__ FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int *,TYPE_3__*,int *) ;
 int VAR_2 ;
 TYPE_2__* FUNC_9 (TYPE_6__*,char const*,int *) ;

svn_error_t *
FUNC_10(svn_fs_x__dirent_t **VAR_3,
                                 svn_fs_t *VAR_4,
                                 svn_fs_x__noderev_t *VAR_5,
                                 const char *VAR_6,
                                 apr_size_t *VAR_7,
                                 apr_pool_t *VAR_8,
                                 apr_pool_t *VAR_9)
{
  svn_boolean_t VAR_10 = VAR_0;


  svn_fs_x__id_t VAR_11;
  svn_cache__t *VAR_12 = FUNC_5(VAR_4, &VAR_11, VAR_5);
  svn_fs_x__ede_baton_t VAR_13;

  svn_filesize_t VAR_14;
  FUNC_0(FUNC_4(&VAR_14, VAR_4, VAR_5, VAR_9));


  VAR_13.hint = *VAR_7;
  VAR_13.name = VAR_6;
  VAR_13.txn_filesize = VAR_14;

  FUNC_0(FUNC_6((void **)VAR_3,
                                 &VAR_10,
                                 VAR_12,
                                 &VAR_11,
                                 VAR_2,
                                 &VAR_13,
                                 VAR_8));


  if (VAR_10)
    *VAR_7 = VAR_13.hint;


  if (! VAR_10 || VAR_13.out_of_date)
    {
      svn_fs_x__dirent_t *VAR_15;
      svn_fs_x__dirent_t *VAR_16 = ((void*)0);
      svn_fs_x__dir_data_t VAR_17;


      FUNC_0(FUNC_3(&VAR_17, VAR_4, VAR_5, VAR_9,
                               VAR_9));






      if (VAR_12 && FUNC_7(VAR_12, 150 * VAR_17.entries->nelts))
        FUNC_0(FUNC_8(VAR_12, &VAR_11, &VAR_17, VAR_9));


      VAR_15 = FUNC_9(VAR_17.entries, VAR_6, ((void*)0));
      if (VAR_15)
        {
          VAR_16 = FUNC_1(VAR_8, VAR_15, sizeof(*VAR_16));
          VAR_16->name = FUNC_2(VAR_8, VAR_15->name);
        }

      *VAR_3 = VAR_16;
    }

  return VAR_1;
}
