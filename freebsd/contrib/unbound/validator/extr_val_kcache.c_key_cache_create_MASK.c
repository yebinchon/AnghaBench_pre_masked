
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key_cache {int slab; } ;
struct config_file {size_t key_cache_slabs; size_t key_cache_size; } ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (struct key_cache*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (size_t,size_t,size_t,int *,int *,int *,int *,int *) ;

struct key_cache*
FUNC_4(struct config_file* VAR_5)
{
 struct key_cache* VAR_6 = (struct key_cache*)FUNC_0(1,
  sizeof(*VAR_6));
 size_t VAR_7, VAR_8, VAR_9;
 if(!VAR_6) {
  FUNC_2("malloc failure");
  return ((void*)0);
 }
 VAR_7 = VAR_5->key_cache_slabs;
 VAR_8 = VAR_0;
 VAR_9 = VAR_5->key_cache_size;
 VAR_6->slab = FUNC_3(VAR_7, VAR_8, VAR_9,
  &VAR_4, &VAR_1,
  &VAR_3, &VAR_2, ((void*)0));
 if(!VAR_6->slab) {
  FUNC_2("malloc failure");
  FUNC_1(VAR_6);
  return ((void*)0);
 }
 return VAR_6;
}
