
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int svn_string_t ;
typedef int svn_revnum_t ;
typedef int svn_error_t ;
struct TYPE_10__ {int rev; void* author; void* date; } ;
typedef TYPE_2__ revision_info_t ;
typedef int rev ;
struct TYPE_11__ {int revision_infos; int pool; TYPE_1__* repos; } ;
typedef TYPE_3__ report_baton_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
struct TYPE_9__ {int fs; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_1 (int ,int *,int) ;
 int FUNC_2 (int ,int *,int,TYPE_2__*) ;
 TYPE_2__* FUNC_3 (int ,int) ;
 int FUNC_4 (int **,int ,int ,int ,int *,int *) ;
 int * FUNC_5 (int *,int ) ;
 void* FUNC_6 (int *,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_7(report_baton_t *VAR_4,
                  svn_revnum_t VAR_5,
                  revision_info_t** VAR_6,
                  apr_pool_t *VAR_7)
{
  apr_hash_t *VAR_8;
  svn_string_t *VAR_9, *VAR_10;
  revision_info_t* VAR_11;


  VAR_11 = FUNC_1(VAR_4->revision_infos, &VAR_5, sizeof(VAR_5));
  if (!VAR_11)
    {


      FUNC_0(FUNC_4(&VAR_8,
                                        VAR_4->repos->fs,
                                        VAR_5,
                                        VAR_0,
                                        VAR_7,
                                        VAR_7));


      VAR_9 = FUNC_5(VAR_8, VAR_3);


      VAR_10 = FUNC_5(VAR_8, VAR_2);


      VAR_11 = FUNC_3(VAR_4->pool, sizeof(*VAR_11));
      VAR_11->rev = VAR_5;
      VAR_11->date = FUNC_6(VAR_9, VAR_4->pool);
      VAR_11->author = FUNC_6(VAR_10, VAR_4->pool);


      FUNC_2(VAR_4->revision_infos, &VAR_11->rev, sizeof(VAR_11->rev), VAR_11);
    }

  *VAR_6 = VAR_11;
  return VAR_1;
}
