
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ svn_node_kind_t ;
struct TYPE_11__ {int token; } ;
typedef TYPE_1__ svn_lock_t ;
struct TYPE_12__ {int path; } ;
typedef TYPE_2__ svn_fs_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (TYPE_2__*,int ) ;
 int * FUNC_2 (TYPE_2__*,char const*) ;
 int * VAR_0 ;
 int FUNC_3 (char const**,int ,char const*,int *) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *,TYPE_1__**,int ,char const*,int *) ;
 int FUNC_6 (char const*,scalar_t__*,int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_7 (TYPE_2__*,TYPE_1__*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_8(svn_lock_t **VAR_2,
         svn_fs_t *VAR_3,
         const char *VAR_4,
         svn_boolean_t VAR_5,
         svn_boolean_t VAR_6,
         apr_pool_t *VAR_7)
{
  svn_lock_t *VAR_8 = ((void*)0);
  const char *VAR_9;
  svn_node_kind_t VAR_10;

  FUNC_0(FUNC_3(&VAR_9, VAR_3->path, VAR_4, VAR_7));
  FUNC_0(FUNC_6(VAR_9, &VAR_10, VAR_7));

  *VAR_2 = ((void*)0);
  if (VAR_10 != VAR_1)
    FUNC_0(FUNC_5(((void*)0), &VAR_8, VAR_3->path, VAR_9, VAR_7));

  if (! VAR_8)
    return VAR_6 ? FUNC_2(VAR_3, VAR_4) : VAR_0;


  if (FUNC_4(VAR_8))
    {


      if (VAR_5)
        FUNC_0(FUNC_7(VAR_3, VAR_8, VAR_7));
      return FUNC_1(VAR_3, VAR_8->token);
    }

  *VAR_2 = VAR_8;
  return VAR_0;
}
