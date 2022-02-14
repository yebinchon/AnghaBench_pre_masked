
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
struct TYPE_9__ {int (* add_file ) (char const*,int ,char const*,int ,int ,int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_3__*,int *,int ,TYPE_2__**) ;
 TYPE_2__* FUNC_3 (TYPE_3__*,int *,int *,int ,int ) ;
 int FUNC_4 (char const*,int ,char const*,int ,int ,int *) ;
 char* FUNC_5 (char const*,int *) ;
 scalar_t__ FUNC_6 (char const*) ;
 int FUNC_7 (int const*,char*,char const**,int **,int **,char const**,int *) ;
 char* FUNC_8 (char const*,int *) ;
 int FUNC_9 (char const*) ;
 char* FUNC_10 (char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_11(svn_ra_svn_conn_t *VAR_3,
                       apr_pool_t *VAR_4,
                       const svn_ra_svn__list_t *VAR_5,
                       ra_svn_driver_state_t *VAR_6)
{
  const char *VAR_7, *VAR_8;
  svn_string_t *VAR_9, *VAR_10;
  svn_revnum_t VAR_11;
  ra_svn_token_entry_t *VAR_12, *VAR_13;

  FUNC_1(FUNC_7(VAR_5, "css(?cr)", &VAR_7, &VAR_9,
                                  &VAR_10, &VAR_8, &VAR_11));
  FUNC_1(FUNC_2(VAR_6, VAR_9, VAR_0, &VAR_12));
  VAR_6->file_refs++;


  if (!FUNC_9(VAR_7))
    VAR_7 = FUNC_8(VAR_7, VAR_4);



  if (VAR_8)
    {
      if (FUNC_6(VAR_8))
        VAR_8 = FUNC_10(VAR_8, VAR_4);
      else
        VAR_8 = FUNC_5(VAR_8, VAR_4);
    }

  VAR_13 = FUNC_3(VAR_6, ((void*)0), VAR_10, VAR_2, VAR_6->file_pool);
  FUNC_0(VAR_6->editor->add_file(VAR_7, VAR_12->baton, VAR_8, VAR_11,
                                   VAR_6->file_pool, &VAR_13->baton));
  return VAR_1;
}
