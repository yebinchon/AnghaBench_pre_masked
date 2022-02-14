
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {TYPE_6__* children; } ;
typedef TYPE_4__ svn_skel_t ;
typedef int svn_error_t ;
struct TYPE_15__ {int dst_noderev_id; void* src_txn_id; void* src_path; int kind; } ;
typedef TYPE_5__ copy_t ;
typedef int apr_pool_t ;
struct TYPE_16__ {TYPE_3__* next; } ;
struct TYPE_13__ {TYPE_2__* next; int len; int data; } ;
struct TYPE_12__ {TYPE_1__* next; int len; int data; } ;
struct TYPE_11__ {int len; int data; } ;


 int * VAR_0 ;
 TYPE_5__* FUNC_0 (int *,int) ;
 void* FUNC_1 (int *,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_4__*) ;
 int * FUNC_3 (char*) ;
 int FUNC_4 (int ,int ,int *) ;
 scalar_t__ FUNC_5 (TYPE_6__*,char*) ;

svn_error_t *
FUNC_6(copy_t **VAR_3,
                             svn_skel_t *VAR_4,
                             apr_pool_t *VAR_5)
{
  copy_t *VAR_6;


  if (! FUNC_2(VAR_4))
    return FUNC_3("copy");


  VAR_6 = FUNC_0(VAR_5, sizeof(*VAR_6));


  if (FUNC_5(VAR_4->children, "soft-copy"))
    VAR_6->kind = VAR_2;
  else
    VAR_6->kind = VAR_1;


  VAR_6->src_path = FUNC_1(VAR_5,
                                  VAR_4->children->next->data,
                                  VAR_4->children->next->len);


  VAR_6->src_txn_id = FUNC_1(VAR_5,
                                    VAR_4->children->next->next->data,
                                    VAR_4->children->next->next->len);


  VAR_6->dst_noderev_id
    = FUNC_4(VAR_4->children->next->next->next->data,
                            VAR_4->children->next->next->next->len, VAR_5);


  *VAR_3 = VAR_6;
  return VAR_0;
}
