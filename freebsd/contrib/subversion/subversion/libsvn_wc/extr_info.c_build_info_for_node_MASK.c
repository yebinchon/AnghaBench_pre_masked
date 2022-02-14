
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {int * conflicts; int wcroot_abspath; void* depth; void* schedule; int moved_to_abspath; int checksum; int * moved_from_abspath; void* copyfrom_rev; void* copyfrom_url; int changelist; int recorded_time; int recorded_size; } ;
typedef TYPE_2__ svn_wc_info_t ;
struct TYPE_16__ {char const* repos_root_URL; char const* repos_UUID; TYPE_1__* lock; TYPE_2__* wc_info; int size; void* URL; void* rev; int kind; int last_changed_author; int last_changed_date; int last_changed_rev; } ;
typedef TYPE_3__ svn_wc__info2_t ;
typedef int svn_wc__db_t ;
typedef scalar_t__ svn_wc__db_status_t ;
struct TYPE_17__ {int date; int comment; int owner; int token; } ;
typedef TYPE_4__ svn_wc__db_lock_t ;
typedef void* svn_revnum_t ;
typedef int svn_node_kind_t ;
struct TYPE_18__ {scalar_t__ apr_err; } ;
typedef TYPE_5__ svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;
struct TYPE_14__ {int creation_date; int comment; int owner; int token; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 TYPE_5__* VAR_4 ;
 void* FUNC_1 (int *,int) ;
 void* VAR_5 ;
 int FUNC_2 (TYPE_5__*) ;
 TYPE_5__* FUNC_3 (TYPE_5__*) ;
 int VAR_6 ;
 void* FUNC_4 (char const*,char const*,int *) ;
 int FUNC_5 (int *,int *,char const*,int *,int *) ;
 int FUNC_6 (scalar_t__*,scalar_t__*,scalar_t__*,int *,char const*,int *) ;
 int FUNC_7 (scalar_t__*,int *,void**,char const**,char const**,char const**,int *,int *,int *,void**,int *,int *,char const**,char const**,char const**,void**,TYPE_4__**,int *,int *,int *,scalar_t__*,scalar_t__*,int *,int *,scalar_t__*,scalar_t__*,int *,int *,char const*,int *,int *) ;
 int FUNC_8 (scalar_t__*,int *,int *,int *,int *,void**,int *,int *,int *,int *,int *,char const*,int *,int *) ;
 int FUNC_9 (void**,char const**,char const**,char const**,int *,char const*,int *,int *) ;
 int FUNC_10 (int *,int *,int *,int *,int *,char const*,int *,int *) ;
 TYPE_5__* FUNC_11 (int **,int *,int *,int *,int *,char const*,int *,int *) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_12 (int **,int *,int *,char const*,int ,int ,int *,int *) ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;

__attribute__((used)) static svn_error_t *
FUNC_13(svn_wc__info2_t **VAR_16,
                     svn_wc__db_t *VAR_17,
                     const char *VAR_18,
                     svn_node_kind_t VAR_19,
                     apr_pool_t *VAR_20,
                     apr_pool_t *VAR_21)
{
  svn_wc__info2_t *VAR_22;
  const char *VAR_23;
  svn_wc__db_status_t VAR_24;
  svn_node_kind_t VAR_25;
  const char *VAR_26;
  const char *VAR_27;
  const char *VAR_28;
  svn_revnum_t VAR_29;
  svn_wc__db_lock_t *VAR_30;
  svn_boolean_t VAR_31;
  svn_boolean_t VAR_32;
  svn_boolean_t VAR_33;
  svn_boolean_t VAR_34;
  svn_wc_info_t *VAR_35;

  VAR_22 = FUNC_1(VAR_20, sizeof(*VAR_22));
  VAR_22->kind = VAR_19;

  VAR_35 = FUNC_1(VAR_20, sizeof(*VAR_35));
  VAR_22->wc_info = VAR_35;

  VAR_35->copyfrom_rev = VAR_3;

  FUNC_0(FUNC_7(&VAR_24, &VAR_25, &VAR_22->rev,
                               &VAR_23,
                               &VAR_22->repos_root_URL, &VAR_22->repos_UUID,
                               &VAR_22->last_changed_rev,
                               &VAR_22->last_changed_date,
                               &VAR_22->last_changed_author,
                               &VAR_35->depth, &VAR_35->checksum, ((void*)0),
                               &VAR_26,
                               &VAR_27, &VAR_28,
                               &VAR_29, &VAR_30,
                               &VAR_35->recorded_size,
                               &VAR_35->recorded_time,
                               &VAR_35->changelist,
                               &VAR_31, &VAR_32, ((void*)0), ((void*)0),
                               &VAR_33, &VAR_34, ((void*)0),
                               VAR_17, VAR_18,
                               VAR_20, VAR_21));

  if (VAR_27 != ((void*)0))
    {
      VAR_22->repos_root_URL = VAR_27;
      VAR_22->repos_UUID = VAR_28;
    }

  if (VAR_24 == VAR_7)
    {





      if (VAR_26)
        {

          VAR_22->rev = VAR_29;

          if (VAR_32)
            {
              svn_error_t *VAR_36;
              VAR_35->copyfrom_url =
                    FUNC_4(VAR_22->repos_root_URL,
                                                VAR_26,
                                                VAR_20);

              VAR_35->copyfrom_rev = VAR_29;

              VAR_36 = FUNC_11(&VAR_35->moved_from_abspath,
                                          ((void*)0), ((void*)0), ((void*)0),
                                          VAR_17, VAR_18,
                                          VAR_20, VAR_21);

              if (VAR_36)
                {
                   if (VAR_36->apr_err != VAR_1)
                      return FUNC_3(VAR_36);
                   FUNC_2(VAR_36);
                   VAR_35->moved_from_abspath = ((void*)0);
                }
            }
        }



      if (! VAR_32)
        VAR_35->schedule = VAR_14;
      else if (! VAR_34 && ! VAR_33)
        VAR_35->schedule = VAR_12;
      else
        {
          svn_wc__db_status_t VAR_37;
          svn_boolean_t VAR_38;

          FUNC_0(FUNC_6(&VAR_33, &VAR_38,
                                                &VAR_37,
                                                VAR_17, VAR_18,
                                                VAR_21));



          if (VAR_37 != VAR_10
              && VAR_37 != VAR_8)
            {
              VAR_35->schedule = VAR_15;
            }
          else
            VAR_35->schedule = VAR_12;
        }
      FUNC_0(FUNC_9(((void*)0), &VAR_23,
                                         &VAR_22->repos_root_URL,
                                         &VAR_22->repos_UUID,
                                         VAR_17, VAR_18,
                                         VAR_20, VAR_21));

      VAR_22->URL = FUNC_4(VAR_22->repos_root_URL,
                                                 VAR_23, VAR_20);
    }
  else if (VAR_24 == VAR_8)
    {
      svn_wc__db_status_t VAR_39;

      FUNC_0(FUNC_8(&VAR_39, &VAR_22->kind,
                                            &VAR_22->last_changed_rev,
                                            &VAR_22->last_changed_date,
                                            &VAR_22->last_changed_author,
                                            &VAR_35->depth,
                                            &VAR_35->checksum,
                                            ((void*)0), ((void*)0), ((void*)0),
                                            VAR_17, VAR_18,
                                            VAR_20, VAR_21));

      if (VAR_39 == VAR_8)
        {





          VAR_35->depth = VAR_5;
          VAR_22->kind = VAR_6;
        }


      FUNC_0(FUNC_10(((void*)0), &VAR_35->moved_to_abspath,
                                       ((void*)0), ((void*)0),
                                       VAR_17, VAR_18,
                                       VAR_21, VAR_21));

      FUNC_0(FUNC_9(&VAR_22->rev, &VAR_23,
                                         &VAR_22->repos_root_URL,
                                         &VAR_22->repos_UUID,
                                         VAR_17, VAR_18,
                                         VAR_20, VAR_21));

      VAR_35->schedule = VAR_13;
      VAR_22->URL = FUNC_4(VAR_22->repos_root_URL,
                                                 VAR_23, VAR_20);
    }
  else if (VAR_24 == VAR_10
           || VAR_24 == VAR_11)
    {
      *VAR_16 = ((void*)0);
      return VAR_4;
    }
  else if (VAR_24 == VAR_9 && !VAR_23)
    {


      FUNC_0(FUNC_9(((void*)0), &VAR_23,
                                         &VAR_22->repos_root_URL,
                                         &VAR_22->repos_UUID,
                                         VAR_17, VAR_18,
                                         VAR_20, VAR_21));

      VAR_35->schedule = VAR_14;
      VAR_22->URL = FUNC_4(VAR_22->repos_root_URL,
                                                 VAR_23, VAR_20);
      VAR_22->wc_info->depth = VAR_5;
    }
  else
    {

      VAR_22->URL = FUNC_4(VAR_22->repos_root_URL,
                                                 VAR_23,
                                                 VAR_20);
      VAR_35->schedule = VAR_14;

      if (VAR_24 == VAR_9)
        VAR_35->depth = VAR_5;
    }


  VAR_22->size = VAR_2;

  FUNC_0(FUNC_5(&VAR_22->wc_info->wcroot_abspath, VAR_17,
                                VAR_18, VAR_20, VAR_21));

  if (VAR_31)
    FUNC_0(FUNC_12(&VAR_35->conflicts, ((void*)0),
                                   VAR_17, VAR_18,
                                   VAR_0 ,
                                   VAR_0 ,
                                   VAR_20, VAR_21));
  else
    VAR_35->conflicts = ((void*)0);


  if (VAR_30 != ((void*)0))
    {
      VAR_22->lock = FUNC_1(VAR_20, sizeof(*(VAR_22->lock)));
      VAR_22->lock->token = VAR_30->token;
      VAR_22->lock->owner = VAR_30->owner;
      VAR_22->lock->comment = VAR_30->comment;
      VAR_22->lock->creation_date = VAR_30->date;
    }

  *VAR_16 = VAR_22;
  return VAR_4;
}
