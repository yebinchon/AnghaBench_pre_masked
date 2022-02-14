
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int db; } ;
typedef TYPE_1__ svn_wc_context_t ;
typedef int svn_revnum_t ;
typedef int svn_node_kind_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int * VAR_0 ;
 int FUNC_2 (char const*,int *) ;



 int FUNC_3 (int ,char const*,int,int ,char const*,char const*,char const*,char const*,int ,int ,int *) ;

svn_error_t *
FUNC_4(svn_wc_context_t *VAR_1,
                                  const char *VAR_2,
                                  svn_node_kind_t VAR_3,
                                  const char *VAR_4,
                                  const char *VAR_5,
                                  const char *VAR_6,
                                  const char *VAR_7,
                                  svn_revnum_t VAR_8,
                                  svn_revnum_t VAR_9,
                                  apr_pool_t *VAR_10)
{
  svn_node_kind_t VAR_11;
  switch (VAR_3)
    {
      case 130:
        VAR_11 = 130;
        break;

      case 129:
        VAR_11 = 129;
        break;

      case 128:
        VAR_11 = 128;
        break;

      default:
        FUNC_1();
    }

  FUNC_0(FUNC_3(VAR_1->db, VAR_2,
                                             VAR_11,
                                             FUNC_2(VAR_2,
                                                                VAR_10),
                                             VAR_4, VAR_5,
                                             VAR_6, VAR_7,
                                             VAR_8, VAR_9,
                                             VAR_10));
  return VAR_0;
}
