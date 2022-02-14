
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc_context_t ;
typedef int svn_node_kind_t ;
typedef int svn_error_t ;
typedef int svn_cancel_func_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (int ,int *,char const*,int ,int *) ;
 int FUNC_2 (int *,int *,char const*,char const*,int,int ,void*,int *) ;



__attribute__((used)) static svn_error_t *
FUNC_3(svn_boolean_t *VAR_2,
                svn_wc_context_t *VAR_3,
                const char *VAR_4,
                const char *VAR_5,
                svn_node_kind_t VAR_6,
                svn_cancel_func_t VAR_7,
                void *VAR_8,
                apr_pool_t *VAR_9)
{
  *VAR_2 = VAR_0;
  switch (VAR_6)
    {
      case 129:
        FUNC_1(
            FUNC_2(VAR_2,
                             VAR_3, VAR_4,
                             VAR_5, VAR_6,
                             VAR_7, VAR_8,
                             VAR_9),
            VAR_3, VAR_5, VAR_0, VAR_9);
        break;
      case 128:
      default:
        FUNC_0(FUNC_2(VAR_2,
                                 VAR_3, VAR_4,
                                 VAR_5, VAR_6,
                                 VAR_7, VAR_8,
                                 VAR_9));
        break;
    }

  return VAR_1;
}
