
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int callback_baton; TYPE_1__* callbacks; } ;
typedef TYPE_2__ wc_diff_wrap_baton_t ;
typedef int svn_error_t ;
struct TYPE_11__ {TYPE_2__* baton; } ;
typedef TYPE_3__ svn_diff_tree_processor_t ;
struct TYPE_12__ {int revision; } ;
typedef TYPE_4__ svn_diff_source_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
struct TYPE_9__ {int (* file_opened ) (int *,int *,char const*,int ,int ,int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (int *,int *,char const*,int ,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_2(void **VAR_3,
                 svn_boolean_t *VAR_4,
                 const char *VAR_5,
                 const svn_diff_source_t *VAR_6,
                 const svn_diff_source_t *VAR_7,
                 const svn_diff_source_t *VAR_8,
                 void *VAR_9,
                 const svn_diff_tree_processor_t *VAR_10,
                 apr_pool_t *VAR_11,
                 apr_pool_t *VAR_12)
{
  wc_diff_wrap_baton_t *VAR_13 = VAR_10->baton;
  svn_boolean_t VAR_14 = VAR_0;

  if (VAR_6)
    FUNC_0(VAR_13->callbacks->file_opened(&VAR_14, VAR_4, VAR_5,
                                       VAR_7
                                            ? VAR_7->revision
                                            : (VAR_6
                                                    ? VAR_6->revision
                                                    : VAR_1),
                                       VAR_13->callback_baton, VAR_12));



  *VAR_3 = ((void*)0);
  return VAR_2;
}
