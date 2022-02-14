
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int revision; } ;
typedef TYPE_1__ transaction_t ;
typedef int trail_t ;
typedef int svn_revnum_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
struct TYPE_7__ {char* txn_id; } ;
typedef TYPE_2__ revision_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (TYPE_1__**,int *,char*,int ,int *,int *) ;
 int * FUNC_2 (int *,int ) ;
 int * FUNC_3 (int *,char*) ;
 int FUNC_4 (TYPE_2__**,int *,int ,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(transaction_t **VAR_2,
            const char **VAR_3,
            svn_fs_t *VAR_4,
            svn_revnum_t VAR_5,
            trail_t *VAR_6,
            apr_pool_t *VAR_7)
{
  revision_t *VAR_8;
  transaction_t *VAR_9;

  FUNC_0(FUNC_4(&VAR_8, VAR_4, VAR_5, VAR_6, VAR_7));
  if (VAR_8->txn_id == ((void*)0))
    return FUNC_2(VAR_4, VAR_5);

  FUNC_0(FUNC_1(&VAR_9, VAR_4, VAR_8->txn_id, VAR_0, VAR_6, VAR_7));
  if (VAR_9->revision != VAR_5)
    return FUNC_3(VAR_4, VAR_8->txn_id);

  if (VAR_2)
    *VAR_2 = VAR_9;
  if (VAR_3)
    *VAR_3 = VAR_8->txn_id;
  return VAR_1;
}
