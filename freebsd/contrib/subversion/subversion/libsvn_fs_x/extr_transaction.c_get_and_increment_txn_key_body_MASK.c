
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
struct TYPE_5__ {scalar_t__ txn_number; int * fs; } ;
typedef TYPE_2__ get_and_increment_txn_key_baton_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int * VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (char*,scalar_t__) ;
 char* FUNC_3 (int *,int *) ;
 char* FUNC_4 (int *,scalar_t__,int *) ;
 int FUNC_5 (TYPE_1__**,char const*,int *) ;
 int FUNC_6 (char const*,scalar_t__*,int *) ;
 int FUNC_7 (char const*,int ,int *) ;
 int FUNC_8 (char const*,char*,int ,char const*,int ,int *) ;
 scalar_t__ VAR_5 ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_12(void *VAR_6,
                               apr_pool_t *VAR_7)
{
  get_and_increment_txn_key_baton_t *VAR_8 = VAR_6;
  svn_fs_t *VAR_9 = VAR_8->fs;
  apr_pool_t *VAR_10 = FUNC_10(VAR_7);
  const char *VAR_11 = FUNC_3(VAR_9, VAR_7);
  char VAR_12[VAR_2];

  svn_stringbuf_t *VAR_13;
  FUNC_0(FUNC_5(&VAR_13, VAR_11, VAR_7));







  VAR_8->txn_number = FUNC_1(((void*)0), VAR_13->data);
  if (VAR_8->txn_number == 0)
    ++VAR_8->txn_number;
  while (VAR_4)
    {
      const char *VAR_14;
      svn_node_kind_t VAR_15;
      FUNC_9(VAR_10);

      VAR_14 = FUNC_4(VAR_9, VAR_8->txn_number, VAR_10);
      FUNC_0(FUNC_6(VAR_14, &VAR_15, VAR_10));
      if (VAR_15 == VAR_5)
        {
          FUNC_7(VAR_14, VAR_0, VAR_10);
          break;
        }

      ++VAR_8->txn_number;
    }



  FUNC_0(FUNC_8(VAR_11, VAR_12,
                               FUNC_2(VAR_12,
                                                 VAR_8->txn_number + 1),
                               VAR_11, VAR_1, VAR_7));

  FUNC_11(VAR_10);

  return VAR_3;
}
