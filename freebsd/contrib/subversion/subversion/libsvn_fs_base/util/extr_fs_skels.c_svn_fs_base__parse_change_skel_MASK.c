
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_19__ {TYPE_6__* children; } ;
typedef TYPE_7__ svn_skel_t ;
typedef int svn_fs_path_change_kind_t ;
typedef int svn_error_t ;
struct TYPE_20__ {void* prop_mod; void* text_mod; int kind; int noderev_id; int path; } ;
typedef TYPE_8__ change_t ;
typedef int apr_pool_t ;
struct TYPE_18__ {TYPE_5__* next; } ;
struct TYPE_17__ {TYPE_4__* next; int len; int data; } ;
struct TYPE_16__ {TYPE_3__* next; scalar_t__ len; int data; } ;
struct TYPE_15__ {TYPE_2__* next; } ;
struct TYPE_14__ {TYPE_1__* next; scalar_t__ len; } ;
struct TYPE_13__ {scalar_t__ len; } ;


 int * VAR_0 ;
 void* VAR_1 ;
 TYPE_8__* FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (TYPE_7__*,int *) ;
 int * FUNC_3 (char*) ;
 int FUNC_4 (int ,scalar_t__,int *) ;

svn_error_t *
FUNC_5(change_t **VAR_2,
                               svn_skel_t *VAR_3,
                               apr_pool_t *VAR_4)
{
  change_t *VAR_5;
  svn_fs_path_change_kind_t VAR_6;


  if (! FUNC_2(VAR_3, &VAR_6))
    return FUNC_3("change");


  VAR_5 = FUNC_0(VAR_4, sizeof(*VAR_5));


  VAR_5->path = FUNC_1(VAR_4, VAR_3->children->next->data,
                                VAR_3->children->next->len);


  if (VAR_3->children->next->next->len)
    VAR_5->noderev_id = FUNC_4
      (VAR_3->children->next->next->data, VAR_3->children->next->next->len,
       VAR_4);


  VAR_5->kind = VAR_6;


  if (VAR_3->children->next->next->next->next->len)
    VAR_5->text_mod = VAR_1;


  if (VAR_3->children->next->next->next->next->next->len)
    VAR_5->prop_mod = VAR_1;


  *VAR_2 = VAR_5;
  return VAR_0;
}
