
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int txn_list_lock; int txn_current_lock; int fs_pack_lock; int fs_write_lock; int * common_pool; } ;
typedef TYPE_1__ svn_fs_x__shared_data_t ;
struct TYPE_8__ {TYPE_1__* shared; int instance_id; } ;
typedef TYPE_2__ svn_fs_x__data_t ;
struct TYPE_9__ {int uuid; TYPE_2__* fsap_data; } ;
typedef TYPE_3__ svn_fs_t ;
typedef int svn_error_t ;
typedef scalar_t__ apr_status_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*) ;
 TYPE_1__* FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (void**,char const*,int *) ;
 scalar_t__ FUNC_5 (TYPE_1__*,char const*,int *,int *) ;
 char* FUNC_6 (int *,int ,int ,char*,int ,int ) ;
 char* FUNC_7 (int *,char const*) ;
 int * FUNC_8 (scalar_t__,int ) ;
 int FUNC_9 (int *,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_10(svn_fs_t *VAR_5,
                  apr_pool_t *VAR_6,
                  apr_pool_t *VAR_7)
{
  svn_fs_x__data_t *VAR_8 = VAR_5->fsap_data;
  const char *VAR_9;
  void *VAR_10;
  svn_fs_x__shared_data_t *VAR_11;
  apr_status_t VAR_12;
  FUNC_1(VAR_5->uuid);
  FUNC_1(VAR_8->instance_id);

  VAR_9 = FUNC_6(VAR_7, VAR_0,
                    VAR_5->uuid, ":", VAR_8->instance_id, VAR_3);
  VAR_12 = FUNC_4(&VAR_10, VAR_9, VAR_6);
  if (VAR_12)
    return FUNC_8(VAR_12, FUNC_2("Can't fetch FSX shared data"));
  VAR_11 = VAR_10;

  if (!VAR_11)
    {
      VAR_11 = FUNC_3(VAR_6, sizeof(*VAR_11));
      VAR_11->common_pool = VAR_6;




      FUNC_0(FUNC_9(&VAR_11->fs_write_lock,
                              VAR_1, VAR_6));


      FUNC_0(FUNC_9(&VAR_11->fs_pack_lock,
                              VAR_1, VAR_6));


      FUNC_0(FUNC_9(&VAR_11->txn_current_lock,
                              VAR_1, VAR_6));



      FUNC_0(FUNC_9(&VAR_11->txn_list_lock, VAR_4, VAR_6));

      VAR_9 = FUNC_7(VAR_6, VAR_9);
      VAR_12 = FUNC_5(VAR_11, VAR_9, ((void*)0), VAR_6);
      if (VAR_12)
        return FUNC_8(VAR_12, FUNC_2("Can't store FSX shared data"));
    }

  VAR_8->shared = VAR_11;

  return VAR_2;
}
