
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int svn_revnum_t ;
struct TYPE_10__ {TYPE_3__* priv; } ;
typedef TYPE_2__ svn_ra_session_t ;
struct TYPE_11__ {int uuid; int fs; TYPE_1__* fs_path; } ;
typedef TYPE_3__ svn_ra_local__session_baton_t ;
typedef int svn_fs_root_t ;
struct TYPE_12__ {scalar_t__ kind; } ;
typedef TYPE_4__ svn_fs_dirent_t ;
typedef int svn_error_t ;
struct TYPE_13__ {scalar_t__ kind; scalar_t__ last_author; int time; int created_rev; int has_props; int size; } ;
typedef TYPE_5__ svn_dirent_t ;
typedef int apr_uint32_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;
struct TYPE_9__ {int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int * VAR_7 ;
 int * FUNC_2 (int *,int *) ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *,void const**,int *,void**) ;
 scalar_t__ FUNC_6 (int *,scalar_t__) ;
 int FUNC_7 (int **,int *,char const*,int ,int *,int *) ;
 TYPE_5__* FUNC_8 (int *) ;
 char* FUNC_9 (char const*,char const*,int *) ;
 int FUNC_10 (int **,int *,char const*,int *) ;
 int FUNC_11 (int *,int *,char const*,int *) ;
 int FUNC_12 (int *,int *,char const*,int *) ;
 int FUNC_13 (int **,int ,int ,int *) ;
 int FUNC_14 (int *,int ,int *) ;
 char* FUNC_15 (int ,char const*,int *) ;
 int FUNC_16 (int *,char const*,TYPE_5__*) ;
 scalar_t__ VAR_8 ;
 int FUNC_17 (int *) ;
 int * FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *,char const**,scalar_t__*,int *,char const*,int *) ;
 int FUNC_21 (int *,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_22(svn_ra_session_t *VAR_9,
                      apr_hash_t **VAR_10,
                      svn_revnum_t *VAR_11,
                      apr_hash_t **VAR_12,
                      const char *VAR_13,
                      svn_revnum_t VAR_14,
                      apr_uint32_t VAR_15,
                      apr_pool_t *VAR_16)
{
  svn_fs_root_t *VAR_17;
  svn_revnum_t VAR_18;
  apr_hash_t *VAR_19;
  apr_hash_index_t *VAR_20;
  svn_ra_local__session_baton_t *VAR_21 = VAR_9->priv;
  const char *VAR_22 = FUNC_15(VAR_21->fs_path->data, VAR_13, VAR_16);


  if (! FUNC_1(VAR_14))
    {
      FUNC_0(FUNC_14(&VAR_18, VAR_21->fs, VAR_16));
      FUNC_0(FUNC_13(&VAR_17, VAR_21->fs, VAR_18, VAR_16));
      if (VAR_11 != ((void*)0))
        *VAR_11 = VAR_18;
    }
  else
    FUNC_0(FUNC_13(&VAR_17, VAR_21->fs, VAR_14, VAR_16));

  if (VAR_10)
    {
      apr_pool_t *VAR_23 = FUNC_18(VAR_16);

      FUNC_0(FUNC_10(&VAR_19, VAR_17, VAR_22, VAR_16));



      *VAR_10 = FUNC_3(VAR_16);
      for (VAR_20 = FUNC_2(VAR_16, VAR_19); VAR_20; VAR_20 = FUNC_4(VAR_20))
        {
          const void *VAR_24;
          void *VAR_25;
          const char *VAR_26, *VAR_27, *VAR_28;
          svn_fs_dirent_t *VAR_29;
          svn_dirent_t *VAR_30 = FUNC_8(VAR_16);

          FUNC_17(VAR_23);

          FUNC_5(VAR_20, &VAR_24, ((void*)0), &VAR_25);
          VAR_27 = (const char *) VAR_24;
          VAR_29 = (svn_fs_dirent_t *) VAR_25;

          VAR_28 = FUNC_9(VAR_22, VAR_27, VAR_23);

          if (VAR_15 & VAR_2)
            {

              VAR_30->kind = VAR_29->kind;
            }

          if (VAR_15 & VAR_4)
            {

              if (VAR_29->kind == VAR_8)
                VAR_30->size = VAR_6;
              else
                FUNC_0(FUNC_11(&(VAR_30->size), VAR_17,
                                           VAR_28, VAR_23));
            }

          if (VAR_15 & VAR_1)
            {

              FUNC_0(FUNC_12(&VAR_30->has_props,
                                            VAR_17, VAR_28,
                                            VAR_23));
            }

          if ((VAR_15 & VAR_5)
              || (VAR_15 & VAR_3)
              || (VAR_15 & VAR_0))
            {

              FUNC_0(FUNC_20(&(VAR_30->created_rev),
                                                   &VAR_26,
                                                   &(VAR_30->last_author),
                                                   VAR_17, VAR_28, VAR_23));
              if (VAR_26)
                FUNC_0(FUNC_21(&(VAR_30->time), VAR_26,
                                              VAR_16));
              if (VAR_30->last_author)
                VAR_30->last_author = FUNC_6(VAR_16, VAR_30->last_author);
            }


          FUNC_16(*VAR_10, VAR_27, VAR_30);
        }
      FUNC_19(VAR_23);
    }


  if (VAR_12)
    FUNC_0(FUNC_7(VAR_12, VAR_17, VAR_22, VAR_21->uuid, VAR_16, VAR_16));

  return VAR_7;
}
