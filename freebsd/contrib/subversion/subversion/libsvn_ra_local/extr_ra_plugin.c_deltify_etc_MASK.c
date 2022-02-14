
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_4__ {int revision; } ;
typedef TYPE_1__ svn_commit_info_t ;
struct deltify_etc_baton {int fs; int repos; int fspath_base; scalar_t__ lock_tokens; int commit_baton; int * (* commit_cb ) (TYPE_1__ const*,int ,int *) ;} ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int * FUNC_0 (int *,scalar_t__) ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 void* FUNC_3 (int *) ;
 char* FUNC_4 (int *) ;
 int * FUNC_5 (TYPE_1__ const*,int ,int *) ;
 int FUNC_6 (int ) ;
 int * FUNC_7 (int *,int *) ;
 int * FUNC_8 (int ,int ,int *) ;
 char* FUNC_9 (int ,void const*,int *) ;
 int FUNC_10 (int *,char const*,char const*) ;
 int * FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ,int *,int ,int *,int *,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_14(const svn_commit_info_t *VAR_2,
            void *VAR_3,
            apr_pool_t *VAR_4)
{
  struct deltify_etc_baton *VAR_5 = VAR_3;
  svn_error_t *VAR_6 = VAR_1;
  svn_error_t *VAR_7;




  if (VAR_5->commit_cb)
    VAR_6 = VAR_5->commit_cb(VAR_2, VAR_5->commit_baton, VAR_4);


  if (VAR_5->lock_tokens)
    {
      apr_pool_t *VAR_8 = FUNC_11(VAR_4);
      apr_hash_t *VAR_9 = FUNC_1(VAR_8);
      apr_hash_index_t *VAR_10;

      for (VAR_10 = FUNC_0(VAR_8, VAR_5->lock_tokens); VAR_10;
           VAR_10 = FUNC_2(VAR_10))
        {
          const void *VAR_11 = FUNC_3(VAR_10);
          const char *VAR_12 = FUNC_4(VAR_10);
          const char *VAR_13;

          VAR_13 = FUNC_9(VAR_5->fspath_base, VAR_11, VAR_8);
          FUNC_10(VAR_9, VAR_13, VAR_12);
        }




      FUNC_6(FUNC_13(VAR_5->repos, VAR_9, VAR_0,
                                               ((void*)0), ((void*)0),
                                               VAR_8, VAR_8));

      FUNC_12(VAR_8);
    }




  VAR_7 = FUNC_8(VAR_5->fs, VAR_2->revision, VAR_4);

  return FUNC_7(VAR_6, VAR_7);
}
