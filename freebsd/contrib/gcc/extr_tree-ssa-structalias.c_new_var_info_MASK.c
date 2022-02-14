
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* varinfo_t ;
typedef int tree ;
struct TYPE_4__ {unsigned int id; char const* name; int directly_dereferenced; int is_artificial_var; int is_heap_var; int is_special_var; int is_unknown_size_var; int has_union; int * collapsed_to; int * next; void* oldsolution; void* solution; int decl; } ;


 void* FUNC_0 (int *) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static varinfo_t
FUNC_2 (tree VAR_3, unsigned int VAR_4, const char *VAR_5)
{
  varinfo_t VAR_6 = FUNC_1 (VAR_2);

  VAR_6->id = VAR_4;
  VAR_6->name = VAR_5;
  VAR_6->decl = VAR_3;
  VAR_6->directly_dereferenced = 0;
  VAR_6->is_artificial_var = 0;
  VAR_6->is_heap_var = 0;
  VAR_6->is_special_var = 0;
  VAR_6->is_unknown_size_var = 0;
  VAR_6->has_union = 0;
  VAR_6->solution = FUNC_0 (&VAR_1);
  VAR_6->oldsolution = FUNC_0 (&VAR_0);
  VAR_6->next = ((void*)0);
  VAR_6->collapsed_to = ((void*)0);
  return VAR_6;
}
