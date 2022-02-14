
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_stream_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
typedef int svn_checksum_t ;
typedef int svn_boolean_t ;
struct TYPE_3__ {int pool; } ;
typedef TYPE_1__ config_access_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (int **,int ,char*,int ,int ) ;
 int VAR_2 ;
 int * FUNC_2 (int ,int *,char*,char const*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int * FUNC_3 (int ) ;

__attribute__((used)) static svn_error_t *
FUNC_4(svn_stream_t **VAR_5,
                    svn_checksum_t **VAR_6,
                    config_access_t *VAR_7,
                    const char *VAR_8,
                    svn_boolean_t VAR_9,
                    svn_node_kind_t VAR_10)
{
  if (VAR_10 == VAR_4 && !VAR_9)
    {
      *VAR_5 = FUNC_3(VAR_7->pool);
      FUNC_0(FUNC_1(VAR_6, VAR_2, "", 0, VAR_7->pool));
    }
  else if (VAR_10 != VAR_3)
    {
      return FUNC_2(VAR_0, ((void*)0),
                               "'%s' is not a file", VAR_8);
    }

  return VAR_1;
}
