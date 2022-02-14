
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_ra_svn_conn_t ;
typedef int svn_error_t ;
typedef scalar_t__ apr_status_t ;
typedef int apr_procattr_t ;
struct TYPE_5__ {int in; int out; } ;
typedef TYPE_1__ apr_proc_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (int *,int) ;
 int FUNC_3 (int *,TYPE_1__*,int ) ;
 scalar_t__ FUNC_4 (TYPE_1__*,char const*,char const**,int *,int *,int *) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (int *,int ) ;
 scalar_t__ FUNC_7 (int **,int *) ;
 scalar_t__ FUNC_8 (int *,int,int,int ) ;
 int VAR_8 ;
 int * FUNC_9 (int ,int ,int *) ;
 int * FUNC_10 (int *,int ) ;
 int FUNC_11 (scalar_t__,int ) ;
 int * FUNC_12 (int *,int *) ;
 int * FUNC_13 (int *,int ,int ,int ,int ,int ,int ,int ,int *) ;
 int FUNC_14 (int ,int ,int *) ;

__attribute__((used)) static svn_error_t *FUNC_15(const char **VAR_9, svn_ra_svn_conn_t **VAR_10,
                                apr_pool_t *VAR_11)
{
  apr_status_t VAR_12;
  apr_proc_t *VAR_13;
  apr_procattr_t *VAR_14;
  svn_error_t *VAR_15;

  VAR_12 = FUNC_7(&VAR_14, VAR_11);
  if (VAR_12 == VAR_3)
    VAR_12 = FUNC_8(VAR_14, 1, 1, 0);
  if (VAR_12 == VAR_3)
    VAR_12 = FUNC_6(VAR_14, VAR_2);
  if (VAR_12 == VAR_3)
    VAR_12 = FUNC_5(VAR_14, VAR_8);
  VAR_13 = FUNC_2(VAR_11, sizeof(*VAR_13));
  if (VAR_12 == VAR_3)
    VAR_12 = FUNC_4(VAR_13, *VAR_9, VAR_9, ((void*)0), VAR_14, VAR_11);
  if (VAR_12 != VAR_3)
    return FUNC_9(VAR_6,
                            FUNC_11(VAR_12,
                                               FUNC_0("Can't create tunnel")), ((void*)0));
  FUNC_3(VAR_11, VAR_13, VAR_1);





  FUNC_1(VAR_13->in);
  FUNC_1(VAR_13->out);


  *VAR_10 = FUNC_13(((void*)0),
                                  FUNC_14(VAR_13->out, VAR_4,
                                                           VAR_11),
                                  FUNC_14(VAR_13->in, VAR_4,
                                                           VAR_11),
                                  VAR_5,
                                  0, 0, 0, 0, VAR_11);
  VAR_15 = FUNC_12(*VAR_10, VAR_11);
  if (VAR_15)
    return FUNC_10(
             VAR_15,
             FUNC_0("To better debug SSH connection problems, remove the -q "
               "option from 'ssh' in the [tunnels] section of your "
               "Subversion configuration file."));

  return VAR_7;
}
