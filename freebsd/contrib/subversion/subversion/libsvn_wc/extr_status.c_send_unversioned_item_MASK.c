
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int (* svn_wc_status_func4_t ) (void*,char const*,TYPE_1__*,int *) ;
struct TYPE_6__ {scalar_t__ conflicted; int node_status; } ;
struct TYPE_7__ {TYPE_1__ s; } ;
typedef TYPE_2__ svn_wc__internal_status_t ;
typedef int svn_io_dirent2_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
struct walk_status_baton {int externals; int db; } ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (TYPE_2__**,int ,char const*,int const*,scalar_t__,scalar_t__,int *,int *) ;
 scalar_t__ FUNC_2 (int ,char const*,int *) ;
 int FUNC_3 (void*,char const*,TYPE_1__*,int *) ;
 char* FUNC_4 (char const*,int *) ;
 int * FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (char const*,int const*,int *) ;
 int VAR_2 ;

__attribute__((used)) static svn_error_t *
FUNC_7(const struct walk_status_baton *VAR_3,
                      const char *VAR_4,
                      const svn_io_dirent2_t *VAR_5,
                      svn_boolean_t VAR_6,
                      const apr_array_header_t *VAR_7,
                      svn_boolean_t VAR_8,
                      svn_wc_status_func4_t VAR_9,
                      void *VAR_10,
                      apr_pool_t *VAR_11)
{
  svn_boolean_t VAR_12;
  svn_boolean_t VAR_13;
  svn_wc__internal_status_t *VAR_14;
  const char *VAR_15 = FUNC_4(VAR_4, ((void*)0));

  VAR_12 = FUNC_6(VAR_15, VAR_7, VAR_11);
  FUNC_0(FUNC_1(&VAR_14,
                               VAR_3->db, VAR_4,
                               VAR_5, VAR_6,
                               VAR_12,
                               VAR_11, VAR_11));

  VAR_13 = FUNC_2(VAR_3->externals, VAR_4, VAR_11);
  if (VAR_13)
    VAR_14->s.node_status = VAR_2;




  if (VAR_14->s.conflicted)
    VAR_12 = VAR_0;



  if (VAR_8
      || !VAR_12
      || VAR_13)
    return FUNC_5((*VAR_9)(VAR_10, VAR_4,
                                          &VAR_14->s, VAR_11));

  return VAR_1;
}
