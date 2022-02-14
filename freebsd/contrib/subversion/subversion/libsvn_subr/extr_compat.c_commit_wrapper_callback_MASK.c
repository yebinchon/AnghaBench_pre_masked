
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_3__ {int author; int date; int revision; } ;
typedef TYPE_1__ svn_commit_info_t ;
struct commit_wrapper_baton {int baton; int * (* callback ) (int ,int ,int ,int ) ;} ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 int * FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_1(const svn_commit_info_t *VAR_1,
                        void *VAR_2, apr_pool_t *VAR_3)
{
  struct commit_wrapper_baton *VAR_4 = VAR_2;

  if (VAR_4->callback)
    return VAR_4->callback(VAR_1->revision,
                         VAR_1->date,
                         VAR_1->author,
                         VAR_4->baton);

  return VAR_0;
}
