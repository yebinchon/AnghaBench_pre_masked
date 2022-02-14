
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_node_kind_t ;
typedef int svn_error_t ;
struct svn_wc__shim_fetch_baton_t {int db; int base_abspath; } ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 char* FUNC_1 (int ,char const*,int *) ;
 int FUNC_2 (int *,int ,char const*,int ,int ,int ,int *) ;

svn_error_t *
FUNC_3(svn_node_kind_t *VAR_3,
                        void *VAR_4,
                        const char *VAR_5,
                        svn_revnum_t VAR_6,
                        apr_pool_t *VAR_7)
{
  struct svn_wc__shim_fetch_baton_t *VAR_8 = VAR_4;
  const char *VAR_9 = FUNC_1(VAR_8->base_abspath, VAR_5,
                                              VAR_7);

  FUNC_0(FUNC_2(VAR_3, VAR_8->db, VAR_9,
                               VAR_0 ,
                               VAR_2 ,
                               VAR_0 ,
                               VAR_7));

  return VAR_1;
}
