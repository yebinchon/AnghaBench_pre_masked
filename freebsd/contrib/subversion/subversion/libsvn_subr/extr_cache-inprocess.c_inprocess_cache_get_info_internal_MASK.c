
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_5__ {int used_entries; int total_entries; scalar_t__ total_size; scalar_t__ data_size; scalar_t__ used_size; int id; } ;
typedef TYPE_1__ svn_cache__info_t ;
struct cache_page {int dummy; } ;
struct cache_entry {int dummy; } ;
struct TYPE_6__ {int items_per_page; int total_pages; scalar_t__ data_size; int hash; int id; } ;
typedef TYPE_2__ inprocess_cache_t ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_2(inprocess_cache_t *VAR_1,
                                  svn_cache__info_t *VAR_2,
                                  apr_pool_t *VAR_3)
{
  VAR_2->id = FUNC_1(VAR_3, VAR_1->id);

  VAR_2->used_entries = FUNC_0(VAR_1->hash);
  VAR_2->total_entries = VAR_1->items_per_page * VAR_1->total_pages;

  VAR_2->used_size = VAR_1->data_size;
  VAR_2->data_size = VAR_1->data_size;
  VAR_2->total_size = VAR_1->data_size
                   + VAR_1->items_per_page * sizeof(struct cache_page)
                   + VAR_2->used_entries * sizeof(struct cache_entry);

  return VAR_0;
}
