
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int svn_delta_editor_t ;
typedef int svn_commit_callback_t ;
typedef int svn_commit_callback2_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
struct TYPE_2__ {int * (* get_commit_editor ) (void*,int const**,void**,int *,int ,void*,int *,int ,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int * FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ,int ) ;
 int * FUNC_2 (void*,int const**,void**,int *,int ,void*,int *,int ,int *) ;
 int FUNC_3 (int *,void**,int ,void*,int *) ;
 int FUNC_4 (char const*,int *) ;

__attribute__((used)) static svn_error_t *FUNC_5(void *VAR_4,
                                             const svn_delta_editor_t
                                             **VAR_5,
                                             void **VAR_6,
                                             const char *VAR_7,
                                             svn_commit_callback_t VAR_8,
                                             void *VAR_9,
                                             apr_pool_t *VAR_10)
{
  svn_commit_callback2_t VAR_11;
  void *VAR_12;
  apr_hash_t *VAR_13 = FUNC_0(VAR_10);

  FUNC_3(&VAR_11, &VAR_12,
                                  VAR_8, VAR_9,
                                  VAR_10);
  FUNC_1(VAR_13, VAR_1, VAR_0,
               FUNC_4(VAR_7, VAR_10));
  return VAR_3.get_commit_editor(VAR_4, VAR_5, VAR_6,
                                VAR_13, VAR_11, VAR_12,
                                ((void*)0), VAR_2, VAR_10);
}
