
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sidtab_node {struct sidtab_node* next; int sid; int context; } ;
struct sidtab {struct sidtab_node** htable; } ;
struct context {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,struct context*) ;

__attribute__((used)) static inline u32 FUNC_1(struct sidtab *VAR_1,
        struct context *VAR_2)
{
 int VAR_3;
 struct sidtab_node *VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_4 = VAR_1->htable[VAR_3];
  while (VAR_4) {
   if (FUNC_0(&VAR_4->context, VAR_2))
    return VAR_4->sid;
   VAR_4 = VAR_4->next;
  }
 }
 return 0;
}
