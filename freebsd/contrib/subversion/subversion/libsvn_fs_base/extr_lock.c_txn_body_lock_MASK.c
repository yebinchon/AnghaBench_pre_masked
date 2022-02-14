
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_42__ TYPE_4__ ;
typedef struct TYPE_41__ TYPE_3__ ;
typedef struct TYPE_40__ TYPE_2__ ;
typedef struct TYPE_39__ TYPE_1__ ;
typedef struct TYPE_38__ TYPE_10__ ;


struct TYPE_40__ {TYPE_10__* fs; int pool; } ;
typedef TYPE_2__ trail_t ;
typedef scalar_t__ svn_revnum_t ;
typedef scalar_t__ svn_node_kind_t ;
struct TYPE_41__ {void* token; int expiration_date; int creation_date; int is_dav_comment; void* comment; void* owner; int path; } ;
typedef TYPE_3__ svn_lock_t ;
struct TYPE_42__ {scalar_t__ apr_err; } ;
typedef TYPE_4__ svn_error_t ;
struct lock_args {scalar_t__ current_rev; TYPE_3__** lock_p; int path; int expiration_date; int is_dav_comment; scalar_t__ comment; int result_pool; scalar_t__ token; int steal_lock; } ;
struct TYPE_39__ {scalar_t__ username; } ;
struct TYPE_38__ {TYPE_1__* access_ctx; } ;


 int FUNC_0 (TYPE_4__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_4__* FUNC_1 (TYPE_10__*,int ) ;
 TYPE_4__* FUNC_2 (TYPE_10__*) ;
 TYPE_4__* FUNC_3 (TYPE_10__*,TYPE_3__*) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 TYPE_4__* VAR_4 ;
 char* FUNC_5 (char*) ;
 TYPE_4__* FUNC_6 (TYPE_3__*,void*,int ,TYPE_2__*) ;
 void* FUNC_7 (int ,scalar_t__) ;
 int FUNC_8 () ;
 TYPE_4__* FUNC_9 (void*,int ,TYPE_2__*) ;
 scalar_t__ FUNC_10 (int ,int ) ;
 int FUNC_11 (TYPE_4__*) ;
 TYPE_4__* FUNC_12 (scalar_t__,int *,char*) ;
 TYPE_4__* FUNC_13 (int ,int *,char*,int ) ;
 TYPE_4__* FUNC_14 (void**,TYPE_10__*,int ) ;
 TYPE_4__* FUNC_15 (TYPE_3__**,int ,TYPE_2__*,int ) ;
 TYPE_4__* FUNC_16 (scalar_t__*,int ,TYPE_2__*,int ) ;
 TYPE_4__* FUNC_17 (scalar_t__*,int ,TYPE_2__*,int ) ;
 TYPE_4__* FUNC_18 (TYPE_3__**,TYPE_10__*,scalar_t__,TYPE_2__*,int ) ;
 TYPE_3__* FUNC_19 (int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static svn_error_t *
FUNC_20(void *VAR_8, trail_t *VAR_9)
{
  struct lock_args *VAR_10 = VAR_8;
  svn_node_kind_t VAR_11 = VAR_6;
  svn_lock_t *VAR_12;
  svn_lock_t *VAR_13;

  *VAR_10->lock_p = ((void*)0);

  FUNC_0(FUNC_17(&VAR_11, VAR_10->path, VAR_9, VAR_9->pool));



  if (VAR_11 == VAR_5)
    return FUNC_1(VAR_9->fs, VAR_10->path);



  if (VAR_11 == VAR_7)
    {
      if (FUNC_4(VAR_10->current_rev))
        return FUNC_13(
          VAR_3, ((void*)0),
          FUNC_5("Path '%s' doesn't exist in HEAD revision"),
          VAR_10->path);
      else
        return FUNC_13(
          VAR_2, ((void*)0),
          FUNC_5("Path '%s' doesn't exist in HEAD revision"),
          VAR_10->path);
    }


  if (!VAR_9->fs->access_ctx || !VAR_9->fs->access_ctx->username)
    return FUNC_2(VAR_9->fs);


  if (FUNC_4(VAR_10->current_rev))
    {
      svn_revnum_t VAR_14;
      FUNC_0(FUNC_16(&VAR_14, VAR_10->path,
                                                VAR_9, VAR_9->pool));





      if (! FUNC_4(VAR_14))
        return FUNC_13(VAR_3, ((void*)0),
                                 "Path '%s' doesn't exist in HEAD revision",
                                 VAR_10->path);

      if (VAR_10->current_rev < VAR_14)
        return FUNC_13(VAR_3, ((void*)0),
                                 "Lock failed: newer version of '%s' exists",
                                 VAR_10->path);
    }





  if (VAR_10->token)
    {
      svn_lock_t *VAR_15;
      svn_error_t *VAR_16 = FUNC_18(&VAR_15, VAR_9->fs,
                                              VAR_10->token, VAR_9,
                                              VAR_9->pool);
      if (VAR_16 && ((VAR_16->apr_err == VAR_1)
                  || (VAR_16->apr_err == VAR_0)))
        {
          FUNC_11(VAR_16);
        }
      else
        {
          FUNC_0(VAR_16);
          if (FUNC_10(VAR_15->path, VAR_10->path) != 0)
            return FUNC_12(VAR_0, ((void*)0),
                                    "Lock failed: token refers to existing "
                                    "lock with non-matching path.");
        }
    }
  FUNC_0(FUNC_15(&VAR_12, VAR_10->path,
                                       VAR_9, VAR_9->pool));
  if (VAR_12)
    {
      if (! VAR_10->steal_lock)
        {

          return FUNC_3(VAR_9->fs,
                                                 VAR_12);
        }
      else
        {


          FUNC_0(FUNC_9(VAR_12->token,
                                        VAR_12->path, VAR_9));
        }
    }


  VAR_13 = FUNC_19(VAR_10->result_pool);
  if (VAR_10->token)
    VAR_13->token = FUNC_7(VAR_10->result_pool, VAR_10->token);
  else
    FUNC_0(FUNC_14(&(VAR_13->token), VAR_9->fs,
                                             VAR_10->result_pool));
  VAR_13->path = VAR_10->path;
  VAR_13->owner = FUNC_7(VAR_10->result_pool, VAR_9->fs->access_ctx->username);
  VAR_13->comment = FUNC_7(VAR_10->result_pool, VAR_10->comment);
  VAR_13->is_dav_comment = VAR_10->is_dav_comment;
  VAR_13->creation_date = FUNC_8();
  VAR_13->expiration_date = VAR_10->expiration_date;
  FUNC_0(FUNC_6(VAR_13, VAR_13->token, VAR_10->path, VAR_9));
  *(VAR_10->lock_p) = VAR_13;

  return VAR_4;
}
