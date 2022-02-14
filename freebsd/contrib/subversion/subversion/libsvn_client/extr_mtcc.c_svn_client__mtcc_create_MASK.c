
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ svn_revnum_t ;
typedef int svn_error_t ;
typedef int svn_client_ctx_t ;
struct TYPE_4__ {scalar_t__ head_revision; scalar_t__ base_revision; int ra_session; int * ctx; int root_op; int * pool; } ;
typedef TYPE_1__ svn_client__mtcc_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*) ;
 TYPE_1__* FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int ,int ,int *) ;
 int FUNC_5 (int *,char const*,int *,int *,int *,int *) ;
 int * FUNC_6 (int ,int *,int ,scalar_t__,scalar_t__) ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (int ,scalar_t__*,int *) ;

svn_error_t *
FUNC_9(svn_client__mtcc_t **VAR_4,
                        const char *VAR_5,
                        svn_revnum_t VAR_6,
                        svn_client_ctx_t *VAR_7,
                        apr_pool_t *VAR_8,
                        apr_pool_t *VAR_9)
{
  apr_pool_t *VAR_10;

  VAR_10 = FUNC_7(VAR_8);

  *VAR_4 = FUNC_3(VAR_10, sizeof(**VAR_4));
  (*VAR_4)->pool = VAR_10;

  (*VAR_4)->root_op = FUNC_4(((void*)0), VAR_0, VAR_3, VAR_10);

  (*VAR_4)->ctx = VAR_7;

  FUNC_0(FUNC_5(&(*VAR_4)->ra_session, VAR_5,
                                      ((void*)0) , VAR_7,
                                      VAR_10, VAR_9));

  FUNC_0(FUNC_8((*VAR_4)->ra_session, &(*VAR_4)->head_revision,
                                   VAR_9));

  if (FUNC_1(VAR_6))
    (*VAR_4)->base_revision = VAR_6;
  else
    (*VAR_4)->base_revision = (*VAR_4)->head_revision;

  if ((*VAR_4)->base_revision > (*VAR_4)->head_revision)
    return FUNC_6(VAR_1, ((void*)0),
                             FUNC_2("No such revision %ld (HEAD is %ld)"),
                             VAR_6, (*VAR_4)->head_revision);

  return VAR_2;
}
