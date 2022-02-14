
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pool; } ;
typedef TYPE_1__ trail_t ;
typedef int svn_error_t ;
struct txn_proplist_args {char const* id; int ** table_p; } ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (struct txn_proplist_args*,TYPE_1__*) ;

svn_error_t *
FUNC_3(apr_hash_t **VAR_1,
                                   const char *VAR_2,
                                   trail_t *VAR_3)
{
  struct txn_proplist_args VAR_4;
  apr_hash_t *VAR_5;

  VAR_4.table_p = &VAR_5;
  VAR_4.id = VAR_2;
  FUNC_0(FUNC_2(&VAR_4, VAR_3));

  *VAR_1 = VAR_5 ? VAR_5 : FUNC_1(VAR_3->pool);
  return VAR_0;
}
