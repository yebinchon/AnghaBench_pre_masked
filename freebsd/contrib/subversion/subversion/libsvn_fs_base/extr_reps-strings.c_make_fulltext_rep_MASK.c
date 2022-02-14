
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_checksum_t ;
struct TYPE_6__ {int * string_key; } ;
struct TYPE_7__ {TYPE_1__ fulltext; } ;
struct TYPE_8__ {TYPE_2__ contents; void* sha1_checksum; void* md5_checksum; int kind; int * txn_id; } ;
typedef TYPE_3__ representation_t ;
typedef int apr_pool_t ;


 TYPE_3__* FUNC_0 (int *,int) ;
 int * FUNC_1 (int *,char const*) ;
 int VAR_0 ;
 void* FUNC_2 (int *,int *) ;

__attribute__((used)) static representation_t *
FUNC_3(const char *VAR_1,
                  const char *VAR_2,
                  svn_checksum_t *VAR_3,
                  svn_checksum_t *VAR_4,
                  apr_pool_t *VAR_5)

{
  representation_t *VAR_6 = FUNC_0(VAR_5, sizeof(*VAR_6));
  if (VAR_2 && *VAR_2)
    VAR_6->txn_id = FUNC_1(VAR_5, VAR_2);
  VAR_6->kind = VAR_0;
  VAR_6->md5_checksum = FUNC_2(VAR_3, VAR_5);
  VAR_6->sha1_checksum = FUNC_2(VAR_4, VAR_5);
  VAR_6->contents.fulltext.string_key
    = VAR_1 ? FUNC_1(VAR_5, VAR_1) : ((void*)0);
  return VAR_6;
}
