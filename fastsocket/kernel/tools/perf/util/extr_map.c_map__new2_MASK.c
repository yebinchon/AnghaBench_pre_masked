
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct map {int dummy; } ;
struct kmap {int dummy; } ;
struct dso {scalar_t__ kernel; } ;
typedef enum map_type { ____Placeholder_map_type } map_type ;


 struct map* FUNC_0 (int,int) ;
 int FUNC_1 (struct map*,int,int ,int ,int ,struct dso*) ;

struct map *FUNC_2(u64 VAR_0, struct dso *VAR_1, enum map_type VAR_2)
{
 struct map *VAR_3 = FUNC_0(1, (sizeof(*VAR_3) +
         (VAR_1->kernel ? sizeof(struct kmap) : 0)));
 if (VAR_3 != ((void*)0)) {



  FUNC_1(VAR_3, VAR_2, VAR_0, 0, 0, VAR_1);
 }

 return VAR_3;
}
