
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void* prejfile; void* conflict_wrk; void* conflict_new; void* conflict_old; void* checksum; void* copyfrom_url; scalar_t__ lock; void* last_changed_author; void* repos_UUID; void* repos_root_URL; void* URL; } ;
typedef TYPE_1__ svn_info_t ;
typedef int apr_pool_t ;


 TYPE_1__* FUNC_0 (int *,int) ;
 void* FUNC_1 (int *,void*) ;
 scalar_t__ FUNC_2 (scalar_t__,int *) ;

svn_info_t *
FUNC_3(const svn_info_t *VAR_0, apr_pool_t *VAR_1)
{
  svn_info_t *VAR_2 = FUNC_0(VAR_1, sizeof(*VAR_2));


  *VAR_2 = *VAR_0;


  if (VAR_0->URL)
    VAR_2->URL = FUNC_1(VAR_1, VAR_0->URL);
  if (VAR_0->repos_root_URL)
    VAR_2->repos_root_URL = FUNC_1(VAR_1, VAR_0->repos_root_URL);
  if (VAR_0->repos_UUID)
    VAR_2->repos_UUID = FUNC_1(VAR_1, VAR_0->repos_UUID);
  if (VAR_0->last_changed_author)
    VAR_2->last_changed_author = FUNC_1(VAR_1,
                                               VAR_0->last_changed_author);
  if (VAR_0->lock)
    VAR_2->lock = FUNC_2(VAR_0->lock, VAR_1);
  if (VAR_0->copyfrom_url)
    VAR_2->copyfrom_url = FUNC_1(VAR_1, VAR_0->copyfrom_url);
  if (VAR_0->checksum)
    VAR_2->checksum = FUNC_1(VAR_1, VAR_0->checksum);
  if (VAR_0->conflict_old)
    VAR_2->conflict_old = FUNC_1(VAR_1, VAR_0->conflict_old);
  if (VAR_0->conflict_new)
    VAR_2->conflict_new = FUNC_1(VAR_1, VAR_0->conflict_new);
  if (VAR_0->conflict_wrk)
    VAR_2->conflict_wrk = FUNC_1(VAR_1, VAR_0->conflict_wrk);
  if (VAR_0->prejfile)
    VAR_2->prejfile = FUNC_1(VAR_1, VAR_0->prejfile);

  return VAR_2;
}
