
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_error_t ;
struct dir_baton_t {TYPE_1__* eb; int properties; int local_abspath; scalar_t__ created; struct dir_baton_t* pb; } ;
typedef int apr_pool_t ;
struct TYPE_2__ {int notify_baton; int notify_func; int wc_ctx; } ;


 int FUNC_0 (int *) ;
 int * VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_1 (int ,int ,int ,scalar_t__,int ,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_2(struct dir_baton_t *VAR_2,
             apr_pool_t *VAR_3)
{
  if (VAR_2->created)
    return VAR_0;

  if (VAR_2->pb)
    FUNC_0(FUNC_2(VAR_2->pb, VAR_3));

  VAR_2->created = VAR_1;


  FUNC_0(FUNC_1(VAR_2->eb->wc_ctx,
                                VAR_2->local_abspath,
                                VAR_2->properties,
                                VAR_1 ,
                                VAR_2->eb->notify_func,
                                VAR_2->eb->notify_baton,
                                VAR_3));

  return VAR_0;
}
