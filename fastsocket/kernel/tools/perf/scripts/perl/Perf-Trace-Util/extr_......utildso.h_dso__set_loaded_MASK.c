
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dso {int loaded; } ;
typedef enum map_type { ____Placeholder_map_type } map_type ;



__attribute__((used)) static inline void FUNC_0(struct dso *VAR_0, enum map_type VAR_1)
{
 VAR_0->loaded |= (1 << VAR_1);
}
