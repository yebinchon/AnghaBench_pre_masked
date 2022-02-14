
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_error_t ;
struct edit_baton {int dummy; } ;
struct dir_baton {int deleted_entries; struct edit_baton* edit_baton; } ;
typedef int apr_pool_t ;
struct TYPE_5__ {int nelts; } ;
typedef TYPE_1__ apr_array_header_t ;
struct TYPE_6__ {char* key; } ;


 TYPE_3__ FUNC_0 (TYPE_1__*,int,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_2 (struct edit_baton*,char const*,int ,int ,int ,int *,int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 TYPE_1__* FUNC_6 (int ,int ,int *) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static svn_error_t *
FUNC_7(void *VAR_7,
                apr_pool_t *VAR_8)
{
  struct dir_baton *VAR_9 = VAR_7;
  struct edit_baton *VAR_10 = VAR_9->edit_baton;
  apr_pool_t *VAR_11 = FUNC_4(VAR_8);
  int VAR_12;
  apr_array_header_t *VAR_13;





  VAR_13 = FUNC_6(VAR_9->deleted_entries,
                                  VAR_6, VAR_8);
  for (VAR_12 = 0; VAR_12 < VAR_13->nelts; VAR_12++)
    {
      const char *VAR_14 = FUNC_0(VAR_13, VAR_12,
                                       VAR_5).key;

      FUNC_3(VAR_11);




      FUNC_1(FUNC_2(VAR_10, VAR_14,
                        VAR_4, VAR_3,
                        VAR_0, ((void*)0), VAR_1, VAR_11));
    }

  FUNC_5(VAR_11);
  return VAR_2;
}
