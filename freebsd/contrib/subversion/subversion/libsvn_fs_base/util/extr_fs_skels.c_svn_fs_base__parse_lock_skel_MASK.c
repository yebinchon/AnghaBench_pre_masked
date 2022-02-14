
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_10__ ;


struct TYPE_23__ {TYPE_7__* children; } ;
typedef TYPE_8__ svn_skel_t ;
struct TYPE_24__ {int expiration_date; int creation_date; int is_dav_comment; void* comment; void* owner; void* token; void* path; } ;
typedef TYPE_9__ svn_lock_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
struct TYPE_22__ {TYPE_6__* next; } ;
struct TYPE_21__ {TYPE_5__* next; scalar_t__ len; int data; } ;
struct TYPE_20__ {TYPE_4__* next; scalar_t__ len; int data; } ;
struct TYPE_19__ {TYPE_3__* next; scalar_t__ len; int data; } ;
struct TYPE_18__ {TYPE_10__* next; scalar_t__ len; int data; } ;
struct TYPE_17__ {TYPE_1__* next; scalar_t__ len; int data; } ;
struct TYPE_16__ {scalar_t__ len; int data; } ;
struct TYPE_15__ {TYPE_2__* next; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 TYPE_9__* FUNC_1 (int *,int) ;
 void* FUNC_2 (int *,int ,scalar_t__) ;
 int FUNC_3 (TYPE_8__*) ;
 int * FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (TYPE_10__*,char*) ;
 int FUNC_6 (int *,char const*,int *) ;

svn_error_t *
FUNC_7(svn_lock_t **VAR_3,
                             svn_skel_t *VAR_4,
                             apr_pool_t *VAR_5)
{
  svn_lock_t *VAR_6;
  const char *VAR_7;


  if (! FUNC_3(VAR_4))
    return FUNC_4("lock");


  VAR_6 = FUNC_1(VAR_5, sizeof(*VAR_6));


  VAR_6->path = FUNC_2(VAR_5, VAR_4->children->next->data,
                              VAR_4->children->next->len);


  VAR_6->token = FUNC_2(VAR_5,
                               VAR_4->children->next->next->data,
                               VAR_4->children->next->next->len);


  VAR_6->owner = FUNC_2(VAR_5,
                               VAR_4->children->next->next->next->data,
                               VAR_4->children->next->next->next->len);


  if (VAR_4->children->next->next->next->next->len)
    VAR_6->comment =
      FUNC_2(VAR_5,
                     VAR_4->children->next->next->next->next->data,
                     VAR_4->children->next->next->next->next->len);


  if (FUNC_5
      (VAR_4->children->next->next->next->next->next, "1"))
    VAR_6->is_dav_comment = VAR_2;
  else
    VAR_6->is_dav_comment = VAR_0;


  VAR_7 = FUNC_2
    (VAR_5,
     VAR_4->children->next->next->next->next->next->next->data,
     VAR_4->children->next->next->next->next->next->next->len);
  FUNC_0(FUNC_6(&(VAR_6->creation_date),
                                VAR_7, VAR_5));


  if (VAR_4->children->next->next->next->next->next->next->next->len)
    {
      VAR_7 =
        FUNC_2
        (VAR_5,
         VAR_4->children->next->next->next->next->next->next->next->data,
         VAR_4->children->next->next->next->next->next->next->next->len);
      FUNC_0(FUNC_6(&(VAR_6->expiration_date),
                                    VAR_7, VAR_5));
    }


  *VAR_3 = VAR_6;
  return VAR_1;
}
