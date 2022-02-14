
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_stream_t ;
typedef int svn_revnum_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_fs_t ;
typedef int svn_fs_root_t ;
typedef int svn_error_t ;
typedef int svn_checksum_t ;
typedef int svn_boolean_t ;
struct TYPE_4__ {int pool; int * repos; } ;
typedef TYPE_1__ config_access_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int **,int **,TYPE_1__*,char const*,int ,scalar_t__) ;
 int * FUNC_2 (int *,char const*,int ) ;
 size_t FUNC_3 (char const*) ;
 int VAR_2 ;
 int FUNC_4 (char const**,char const*,int *) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (char const*,char const*) ;
 int * FUNC_7 (int ) ;
 int FUNC_8 (scalar_t__*,int *,char const*,int *) ;
 int FUNC_9 (int **,int ,int *,char const*,int ,int ) ;
 int FUNC_10 (int **,int *,int ,int ) ;
 int FUNC_11 (int *,int *,int *) ;
 scalar_t__ VAR_3 ;
 char* FUNC_12 (char const*,int *) ;
 int * FUNC_13 (int *) ;
 int FUNC_14 (int **,char const*,int *,int ,int *) ;
 char* FUNC_15 (int *,int *) ;
 int FUNC_16 (char const**,char const*,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_17(svn_stream_t **VAR_4,
                 svn_checksum_t **VAR_5,
                 config_access_t *VAR_6,
                 const char *VAR_7,
                 svn_boolean_t VAR_8,
                 apr_pool_t *VAR_9)
{
  svn_fs_t *VAR_10;
  svn_fs_root_t *VAR_11;
  svn_revnum_t VAR_12;
  svn_node_kind_t VAR_13;
  const char *VAR_14;
  const char *VAR_15;
  const char *VAR_16;

  FUNC_0(FUNC_16(&VAR_14, VAR_7, VAR_6->pool));



  if (VAR_6->repos)
    {
      VAR_16 = FUNC_15(VAR_6->repos, VAR_9);
      if (!FUNC_5(VAR_16))
        FUNC_0(FUNC_4(&VAR_16,
                                        VAR_16,
                                        VAR_9));

      if (!FUNC_6(VAR_16, VAR_14))
        VAR_6->repos = ((void*)0);
    }


  if (!VAR_6->repos)
    {

      VAR_16 = FUNC_12(VAR_14, VAR_9);


      FUNC_0(FUNC_14(&VAR_6->repos, VAR_16, ((void*)0),
                              VAR_6->pool, VAR_9));
    }

  VAR_15 = &VAR_14[FUNC_3(VAR_16)];


  VAR_10 = FUNC_13(VAR_6->repos);


  FUNC_0(FUNC_11(&VAR_12, VAR_10, VAR_9));
  FUNC_0(FUNC_10(&VAR_11, VAR_10, VAR_12, VAR_6->pool));


  FUNC_0(FUNC_8(&VAR_13, VAR_11, VAR_15, VAR_9));
  if (VAR_13 != VAR_3)
    return FUNC_7(FUNC_1(VAR_4, VAR_5, VAR_6,
                                               VAR_7, VAR_8, VAR_13));


  FUNC_0(FUNC_9(VAR_5, VAR_2, VAR_11, VAR_15,
                               VAR_1, VAR_6->pool));

  *VAR_4 = FUNC_2(VAR_11, VAR_15, VAR_6->pool);

  return VAR_0;
}
