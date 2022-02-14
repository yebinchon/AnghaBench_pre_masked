
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct context {scalar_t__ len; } ;
struct sidtab_node {scalar_t__ sid; struct context context; struct sidtab_node* next; } ;
struct sidtab {struct sidtab_node** htable; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static struct context *FUNC_1(struct sidtab *VAR_1, u32 VAR_2, int VAR_3)
{
 int VAR_4;
 struct sidtab_node *VAR_5;

 if (!VAR_1)
  return ((void*)0);

 VAR_4 = FUNC_0(VAR_2);
 VAR_5 = VAR_1->htable[VAR_4];
 while (VAR_5 && VAR_2 > VAR_5->sid)
  VAR_5 = VAR_5->next;

 if (VAR_3 && VAR_5 && VAR_2 == VAR_5->sid && VAR_5->context.len)
  return &VAR_5->context;

 if (VAR_5 == ((void*)0) || VAR_2 != VAR_5->sid || VAR_5->context.len) {

  VAR_2 = VAR_0;
  VAR_4 = FUNC_0(VAR_2);
  VAR_5 = VAR_1->htable[VAR_4];
  while (VAR_5 && VAR_2 > VAR_5->sid)
   VAR_5 = VAR_5->next;
  if (!VAR_5 || VAR_2 != VAR_5->sid)
   return ((void*)0);
 }

 return &VAR_5->context;
}
