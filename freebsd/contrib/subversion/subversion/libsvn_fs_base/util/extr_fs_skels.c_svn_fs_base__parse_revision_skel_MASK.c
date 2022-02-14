
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {TYPE_2__* children; } ;
typedef TYPE_3__ svn_skel_t ;
typedef int svn_error_t ;
struct TYPE_12__ {int txn_id; } ;
typedef TYPE_4__ revision_t ;
typedef int apr_pool_t ;
struct TYPE_10__ {TYPE_1__* next; } ;
struct TYPE_9__ {int len; int data; } ;


 int * VAR_0 ;
 TYPE_4__* FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int * FUNC_3 (char*) ;

svn_error_t *
FUNC_4(revision_t **VAR_1,
                                 svn_skel_t *VAR_2,
                                 apr_pool_t *VAR_3)
{
  revision_t *VAR_4;


  if (! FUNC_2(VAR_2))
    return FUNC_3("revision");


  VAR_4 = FUNC_0(VAR_3, sizeof(*VAR_4));
  VAR_4->txn_id = FUNC_1(VAR_3, VAR_2->children->next->data,
                                    VAR_2->children->next->len);


  *VAR_1 = VAR_4;
  return VAR_0;
}
