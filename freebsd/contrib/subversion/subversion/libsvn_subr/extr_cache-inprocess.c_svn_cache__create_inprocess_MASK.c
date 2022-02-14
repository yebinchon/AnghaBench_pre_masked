
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_6__ {int pretend_empty; TYPE_3__* cache_internal; int * vtable; } ;
typedef TYPE_2__ svn_cache__t ;
typedef int svn_cache__serialize_func_t ;
typedef int svn_cache__deserialize_func_t ;
typedef int svn_boolean_t ;
struct TYPE_7__ {int klen; int total_pages; int unallocated_pages; int items_per_page; int * cache_pool; int mutex; TYPE_1__* sentinel; int deserialize_func; int serialize_func; int hash; int id; } ;
typedef TYPE_3__ inprocess_cache_t ;
typedef int apr_ssize_t ;
typedef int apr_pool_t ;
typedef int apr_int64_t ;
struct TYPE_5__ {struct TYPE_5__* next; struct TYPE_5__* prev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int * VAR_1 ;
 int FUNC_2 (int *) ;
 void* FUNC_3 (int *,int) ;
 int FUNC_4 (int *,char const*) ;
 int FUNC_5 (char*) ;
 int VAR_2 ;
 int FUNC_6 (int *,int ,int *) ;

svn_error_t *
FUNC_7(svn_cache__t **VAR_3,
                            svn_cache__serialize_func_t VAR_4,
                            svn_cache__deserialize_func_t VAR_5,
                            apr_ssize_t VAR_6,
                            apr_int64_t VAR_7,
                            apr_int64_t VAR_8,
                            svn_boolean_t VAR_9,
                            const char *VAR_10,
                            apr_pool_t *VAR_11)
{
  svn_cache__t *VAR_12 = FUNC_3(VAR_11, sizeof(*VAR_12));
  inprocess_cache_t *VAR_13 = FUNC_3(VAR_11, sizeof(*VAR_13));

  VAR_13->id = FUNC_4(VAR_11, VAR_10);

  FUNC_1(VAR_6 == VAR_0 || VAR_6 >= 1);

  VAR_13->hash = FUNC_2(VAR_11);
  VAR_13->klen = VAR_6;

  VAR_13->serialize_func = VAR_4;
  VAR_13->deserialize_func = VAR_5;

  FUNC_1(VAR_7 >= 1);
  VAR_13->total_pages = VAR_7;
  VAR_13->unallocated_pages = VAR_7;
  FUNC_1(VAR_8 >= 1);
  VAR_13->items_per_page = VAR_8;

  VAR_13->sentinel = FUNC_3(VAR_11, sizeof(*(VAR_13->sentinel)));
  VAR_13->sentinel->prev = VAR_13->sentinel;
  VAR_13->sentinel->next = VAR_13->sentinel;



  FUNC_0(FUNC_6(&VAR_13->mutex, VAR_9, VAR_11));

  VAR_13->cache_pool = VAR_11;

  VAR_12->vtable = &VAR_2;
  VAR_12->cache_internal = VAR_13;
  VAR_12->pretend_empty = !!FUNC_5("SVN_X_DOES_NOT_MARK_THE_SPOT");

  *VAR_3 = VAR_12;
  return VAR_1;
}
