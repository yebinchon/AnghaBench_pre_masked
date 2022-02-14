
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt_percpu_cache_s {int dummy; } ;
struct mt_percpu_alloc_s {int dummy; } ;
struct memory_type_list {int mtl_list; } ;
struct memory_type {int mt_allocator; int mt_name; void* mt_percpu_cache; void* mt_percpu_alloc; } ;


 int FUNC_0 (int *,struct memory_type*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct memory_type*,int) ;
 void* FUNC_2 (int) ;
 int VAR_1 ;
 int FUNC_3 (int ,char const*,int ) ;

struct memory_type *
FUNC_4(struct memory_type_list *VAR_2, int VAR_3,
    const char *VAR_4, int VAR_5)
{
 struct memory_type *VAR_6;

 VAR_6 = FUNC_2(sizeof(*VAR_6));
 if (VAR_6 == ((void*)0))
  return (((void*)0));

 FUNC_1(VAR_6, sizeof(*VAR_6));

 VAR_6->mt_allocator = VAR_3;
 VAR_6->mt_percpu_alloc = FUNC_2(sizeof(struct mt_percpu_alloc_s) *
     VAR_5);
 VAR_6->mt_percpu_cache = FUNC_2(sizeof(struct mt_percpu_cache_s) *
     VAR_5);
 FUNC_3(VAR_6->mt_name, VAR_4, VAR_0);
 FUNC_0(&VAR_2->mtl_list, VAR_6, VAR_1);
 return (VAR_6);
}
