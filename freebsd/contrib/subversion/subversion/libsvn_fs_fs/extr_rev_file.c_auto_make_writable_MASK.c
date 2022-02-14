
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
struct TYPE_4__ {int file_path; int * pool; } ;
typedef TYPE_1__ set_read_only_baton_t ;
typedef int apr_pool_t ;
typedef int apr_finfo_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_1 (int *,int) ;
 int VAR_3 ;
 int FUNC_2 (int *,TYPE_1__*,int ,int ) ;
 int FUNC_3 (int *,char const*) ;
 int VAR_4 ;
 int FUNC_4 (scalar_t__*,int *,int *) ;
 int FUNC_5 (char const*,int ,int *) ;
 int FUNC_6 (int *,char const*,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_7(const char *VAR_5,
                   apr_pool_t *VAR_6,
                   apr_pool_t *VAR_7)
{
  svn_boolean_t VAR_8;
  apr_finfo_t VAR_9;

  FUNC_0(FUNC_6(&VAR_9, VAR_5, VAR_2, VAR_7));
  FUNC_0(FUNC_4(&VAR_8, &VAR_9, VAR_7));

  if (VAR_8)
    {


      set_read_only_baton_t *VAR_10 = FUNC_1(VAR_6,
                                                  sizeof(*VAR_10));
      VAR_10->pool = VAR_6;
      VAR_10->file_path = FUNC_3(VAR_6, VAR_5);
      FUNC_2(VAR_6, VAR_10,
                                VAR_4, VAR_3);



      FUNC_0(FUNC_5(VAR_5, VAR_0, VAR_7));
    }

  return VAR_1;
}
