
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int svn_string_t ;
typedef int svn_revnum_t ;
typedef int svn_ra_svn_conn_t ;
typedef int svn_ra_svn__list_t ;
typedef int svn_error_t ;
struct TYPE_10__ {int baton; } ;
typedef TYPE_2__ ra_svn_token_entry_t ;
struct TYPE_11__ {int file_pool; TYPE_1__* editor; int file_refs; } ;
typedef TYPE_3__ ra_svn_driver_state_t ;
typedef int apr_pool_t ;
struct TYPE_9__ {int (* open_file ) (char const*,int ,int ,int ,int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_3__*,int *,int ,TYPE_2__**) ;
 TYPE_2__* FUNC_3 (TYPE_3__*,int *,int *,int ,int ) ;
 int FUNC_4 (char const*,int ,int ,int ,int *) ;
 int FUNC_5 (int const*,char*,char const**,int **,int **,int *) ;
 char* FUNC_6 (char const*,int *) ;
 int FUNC_7 (char const*) ;

__attribute__((used)) static svn_error_t *
FUNC_8(svn_ra_svn_conn_t *VAR_3,
                        apr_pool_t *VAR_4,
                        const svn_ra_svn__list_t *VAR_5,
                        ra_svn_driver_state_t *VAR_6)
{
  const char *VAR_7;
  svn_string_t *VAR_8, *VAR_9;
  svn_revnum_t VAR_10;
  ra_svn_token_entry_t *VAR_11, *VAR_12;

  FUNC_1(FUNC_5(VAR_5, "css(?r)", &VAR_7, &VAR_8,
                                  &VAR_9, &VAR_10));
  FUNC_1(FUNC_2(VAR_6, VAR_8, VAR_0, &VAR_11));
  VAR_6->file_refs++;


  if (!FUNC_7(VAR_7))
    VAR_7 = FUNC_6(VAR_7, VAR_4);

  VAR_12 = FUNC_3(VAR_6, ((void*)0), VAR_9, VAR_2, VAR_6->file_pool);
  FUNC_0(VAR_6->editor->open_file(VAR_7, VAR_11->baton, VAR_10, VAR_6->file_pool,
                                    &VAR_12->baton));
  return VAR_1;
}
