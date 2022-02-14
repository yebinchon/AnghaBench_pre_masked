
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {void* modified; void* switched; void* sparse_checkout; void* max_rev; void* min_rev; } ;
typedef TYPE_1__ svn_wc_revision_status_t ;
struct TYPE_7__ {int db; } ;
typedef TYPE_2__ svn_wc_context_t ;
typedef int svn_error_t ;
typedef int svn_cancel_func_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 void* VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 void* VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_2 (int *,int) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (void**,void**,void**,void**,void**,int ,char const*,char const*,int ,int *) ;
 int FUNC_5 (void**,int *,int ,char const*,int ,int ,void*,int *) ;

svn_error_t *
FUNC_6(svn_wc_revision_status_t **VAR_4,
                        svn_wc_context_t *VAR_5,
                        const char *VAR_6,
                        const char *VAR_7,
                        svn_boolean_t VAR_8,
                        svn_cancel_func_t VAR_9,
                        void *VAR_10,
                        apr_pool_t *VAR_11,
                        apr_pool_t *VAR_12)
{
  svn_wc_revision_status_t *VAR_13 = FUNC_2(VAR_11, sizeof(*VAR_13));

  *VAR_4 = VAR_13;

  FUNC_1(FUNC_3(VAR_6));


  VAR_13->min_rev = VAR_1;
  VAR_13->max_rev = VAR_1;
  VAR_13->switched = VAR_0;
  VAR_13->modified = VAR_0;
  VAR_13->sparse_checkout = VAR_0;

  FUNC_0(FUNC_4(&VAR_13->min_rev, &VAR_13->max_rev,
                                     &VAR_13->sparse_checkout,
                                     &VAR_13->modified,
                                     &VAR_13->switched,
                                     VAR_5->db, VAR_6, VAR_7,
                                     VAR_8,
                                     VAR_12));

  if (!VAR_13->modified)
    FUNC_0(FUNC_5(&VAR_13->modified, ((void*)0),
                                        VAR_5->db, VAR_6, VAR_3,
                                        VAR_9, VAR_10,
                                        VAR_12));

  return VAR_2;
}
