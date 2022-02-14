
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_16__ {int format; int path; int db_path; int fs_type; } ;
typedef TYPE_1__ svn_repos_t ;
typedef scalar_t__ svn_repos_notify_func_t ;
typedef int * svn_fs_hotcopy_notify_t ;
struct TYPE_17__ {scalar_t__ apr_err; } ;
typedef TYPE_2__ svn_error_t ;
typedef int svn_cancel_func_t ;
typedef int svn_boolean_t ;
struct hotcopy_ctx_t {char const* dest; void* cancel_baton; int cancel_func; int incremental; int src_len; } ;
struct fs_hotcopy_notify_baton_t {void* notify_baton; scalar_t__ notify_func; } ;
typedef int apr_pool_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (char*) ;
 TYPE_2__* FUNC_3 (TYPE_1__*,int *) ;
 TYPE_1__* FUNC_4 (char const*,int *) ;
 int * VAR_6 ;
 int FUNC_5 (TYPE_1__**,char const*,int ,int ,int ,int *,int *,int *) ;
 int VAR_7 ;
 int FUNC_6 (TYPE_1__*,int ,int *) ;
 int FUNC_7 (TYPE_1__*,int ,int ,int *) ;
 scalar_t__ FUNC_8 (char const*,char const*) ;
 int FUNC_9 (char const*) ;
 int FUNC_10 (char const**,char const*,int *) ;
 int FUNC_11 (int ,int ,int *) ;
 int FUNC_12 (TYPE_2__*) ;
 TYPE_2__* FUNC_13 (int ,int *,int ) ;
 TYPE_2__* FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (int ,int ,int ,int ,int *,struct fs_hotcopy_notify_baton_t*,int ,void*,int *) ;
 TYPE_2__* FUNC_16 (int ,int ,int *) ;
 int FUNC_17 (char const*,int ,int ,struct hotcopy_ctx_t*,int *) ;
 TYPE_2__* FUNC_18 (int ,int ,int *) ;

svn_error_t *
FUNC_19(const char *VAR_8,
                   const char *VAR_9,
                   svn_boolean_t VAR_10,
                   svn_boolean_t VAR_11,
                   svn_repos_notify_func_t VAR_12,
                   void *VAR_13,
                   svn_cancel_func_t VAR_14,
                   void *VAR_15,
                   apr_pool_t *VAR_16)
{
  svn_fs_hotcopy_notify_t VAR_17;
  struct fs_hotcopy_notify_baton_t VAR_18;
  struct hotcopy_ctx_t VAR_19;
  const char *VAR_20;
  const char *VAR_21;
  svn_repos_t *VAR_22;
  svn_repos_t *VAR_23;
  svn_error_t *VAR_24;

  FUNC_1(FUNC_10(&VAR_20, VAR_8, VAR_16));
  FUNC_1(FUNC_10(&VAR_21, VAR_9, VAR_16));
  if (FUNC_8(VAR_20, VAR_21) == 0)
    return FUNC_13(VAR_3, ((void*)0),
                             FUNC_2("Hotcopy source and destination are equal"));


  FUNC_1(FUNC_5(&VAR_22, VAR_20,
                    VAR_1, VAR_1,
                    VAR_1,
                    ((void*)0),
                    VAR_16, VAR_16));







  FUNC_1(FUNC_6(VAR_22, VAR_10, VAR_16));




  VAR_19.dest = VAR_21;
  VAR_19.src_len = FUNC_9(VAR_20);
  VAR_19.incremental = VAR_11;
  VAR_19.cancel_func = VAR_14;
  VAR_19.cancel_baton = VAR_15;
  FUNC_1(FUNC_17(VAR_20,
                           0,
                           VAR_7,
                           &VAR_19,
                           VAR_16));




  VAR_23 = FUNC_4(VAR_21, VAR_16);
  VAR_23->fs_type = VAR_22->fs_type;
  VAR_23->format = VAR_22->format;

  VAR_24 = FUNC_3(VAR_23, VAR_16);
  if (VAR_24)
    {
      if (VAR_11 && VAR_24->apr_err == VAR_2)
        FUNC_12(VAR_24);
      else
        return FUNC_14(VAR_24);
    }

  VAR_24 = FUNC_16(VAR_23->db_path, VAR_0,
                             VAR_16);
  if (VAR_24)
    {
      if (VAR_11 && FUNC_0(VAR_24->apr_err))
        FUNC_12(VAR_24);
      else
        return FUNC_14(VAR_24);
    }



  FUNC_1(FUNC_7(VAR_23, VAR_5, VAR_1, VAR_16));

  VAR_17 = VAR_12 ? VAR_6 : ((void*)0);
  VAR_18.notify_func = VAR_12;
  VAR_18.notify_baton = VAR_13;

  FUNC_1(FUNC_15(VAR_22->db_path, VAR_23->db_path,
                          VAR_10, VAR_11,
                          VAR_17, &VAR_18,
                          VAR_14, VAR_15, VAR_16));


  return FUNC_18
          (FUNC_11(VAR_23->path, VAR_4, VAR_16),
           VAR_23->format, VAR_16);
}
