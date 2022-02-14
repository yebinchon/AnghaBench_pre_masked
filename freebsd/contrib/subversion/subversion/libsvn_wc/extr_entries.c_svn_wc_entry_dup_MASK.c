
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* cachable_props; char* present_props; void* file_external_path; void* tree_conflict_data; void* changelist; void* lock_comment; void* lock_owner; void* lock_token; void* cmt_author; void* checksum; void* prejfile; void* conflict_wrk; void* conflict_new; void* conflict_old; void* copyfrom_url; void* uuid; void* repos; void* url; void* name; } ;
typedef TYPE_1__ svn_wc_entry_t ;
typedef int apr_pool_t ;


 TYPE_1__* FUNC_0 (int *,int) ;
 void* FUNC_1 (int *,void*) ;

svn_wc_entry_t *
FUNC_2(const svn_wc_entry_t *VAR_0, apr_pool_t *VAR_1)
{
  svn_wc_entry_t *VAR_2 = FUNC_0(VAR_1, sizeof(*VAR_2));


  *VAR_2 = *VAR_0;


  if (VAR_0->name)
    VAR_2->name = FUNC_1(VAR_1, VAR_0->name);
  if (VAR_0->url)
    VAR_2->url = FUNC_1(VAR_1, VAR_0->url);
  if (VAR_0->repos)
    VAR_2->repos = FUNC_1(VAR_1, VAR_0->repos);
  if (VAR_0->uuid)
    VAR_2->uuid = FUNC_1(VAR_1, VAR_0->uuid);
  if (VAR_0->copyfrom_url)
    VAR_2->copyfrom_url = FUNC_1(VAR_1, VAR_0->copyfrom_url);
  if (VAR_0->conflict_old)
    VAR_2->conflict_old = FUNC_1(VAR_1, VAR_0->conflict_old);
  if (VAR_0->conflict_new)
    VAR_2->conflict_new = FUNC_1(VAR_1, VAR_0->conflict_new);
  if (VAR_0->conflict_wrk)
    VAR_2->conflict_wrk = FUNC_1(VAR_1, VAR_0->conflict_wrk);
  if (VAR_0->prejfile)
    VAR_2->prejfile = FUNC_1(VAR_1, VAR_0->prejfile);
  if (VAR_0->checksum)
    VAR_2->checksum = FUNC_1(VAR_1, VAR_0->checksum);
  if (VAR_0->cmt_author)
    VAR_2->cmt_author = FUNC_1(VAR_1, VAR_0->cmt_author);
  if (VAR_0->lock_token)
    VAR_2->lock_token = FUNC_1(VAR_1, VAR_0->lock_token);
  if (VAR_0->lock_owner)
    VAR_2->lock_owner = FUNC_1(VAR_1, VAR_0->lock_owner);
  if (VAR_0->lock_comment)
    VAR_2->lock_comment = FUNC_1(VAR_1, VAR_0->lock_comment);
  if (VAR_0->changelist)
    VAR_2->changelist = FUNC_1(VAR_1, VAR_0->changelist);



  VAR_2->cachable_props = "";
  VAR_2->present_props = "";

  if (VAR_0->tree_conflict_data)
    VAR_2->tree_conflict_data = FUNC_1(VAR_1,
                                               VAR_0->tree_conflict_data);
  if (VAR_0->file_external_path)
    VAR_2->file_external_path = FUNC_1(VAR_1,
                                               VAR_0->file_external_path);
  return VAR_2;
}
