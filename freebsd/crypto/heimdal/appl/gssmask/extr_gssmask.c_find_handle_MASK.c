
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct handle {scalar_t__ idx; int type; void* ptr; struct handle* next; } ;
typedef scalar_t__ int32_t ;
typedef enum handle_type { ____Placeholder_handle_type } handle_type ;


 int FUNC_0 (int,char*) ;

__attribute__((used)) static void *
FUNC_1(struct handle *VAR_0, int32_t VAR_1, enum handle_type VAR_2)
{
    if (VAR_1 == 0)
 return ((void*)0);

    while (VAR_0) {
 if (VAR_0->idx == VAR_1) {
     if (VAR_2 == VAR_0->type)
  return VAR_0->ptr;
     FUNC_0(1, "monger switched type on handle!");
 }
 VAR_0 = VAR_0->next;
    }
    return ((void*)0);
}
