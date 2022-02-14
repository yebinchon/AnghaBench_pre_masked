
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_string_t ;
struct TYPE_6__ {int len; int data; TYPE_1__* next; struct TYPE_6__* children; } ;
typedef TYPE_2__ svn_skel_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
struct TYPE_5__ {int len; int data; TYPE_2__* next; } ;


 int * VAR_0 ;
 int * FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ,int *) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (TYPE_2__ const*) ;
 int * FUNC_4 (char*) ;
 int * FUNC_5 (int ,int ,int *) ;

svn_error_t *
FUNC_6(apr_hash_t **VAR_1,
                         const svn_skel_t *VAR_2,
                         apr_pool_t *VAR_3 )
{
  apr_hash_t *VAR_4 = ((void*)0);
  svn_skel_t *VAR_5;


  if (! FUNC_3(VAR_2))
    return FUNC_4("proplist");


  VAR_4 = FUNC_0(VAR_3);
  for (VAR_5 = VAR_2->children; VAR_5; VAR_5 = VAR_5->next->next)
    {
      svn_string_t *VAR_6 = FUNC_5(VAR_5->next->data,
                                               VAR_5->next->len, VAR_3);
      FUNC_1(VAR_4,
                   FUNC_2(VAR_3, VAR_5->data, VAR_5->len),
                   VAR_5->len,
                   VAR_6);
    }


  *VAR_1 = VAR_4;
  return VAR_0;
}
