
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ieee_name_type_hash_entry {struct ieee_name_type* types; } ;
struct TYPE_4__ {int localp; int unsignedp; int size; int indx; } ;
struct ieee_name_type {TYPE_2__ type; } ;
struct ieee_handle {TYPE_1__* type_stack; int typedefs; } ;
typedef int bfd_boolean ;
struct TYPE_3__ {TYPE_2__ type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct ieee_name_type_hash_entry* FUNC_1 (int *,char const*,int ,int ) ;
 int FUNC_2 (struct ieee_handle*,int ,int ,int ,int ) ;

__attribute__((used)) static bfd_boolean
FUNC_3 (void *VAR_2, const char *VAR_3)
{
  struct ieee_handle *VAR_4 = (struct ieee_handle *) VAR_2;
  struct ieee_name_type_hash_entry *VAR_5;
  struct ieee_name_type *VAR_6;

  VAR_5 = FUNC_1 (&VAR_4->typedefs, VAR_3, VAR_0, VAR_0);




  FUNC_0 (VAR_5 != ((void*)0));




  VAR_6 = VAR_5->types;
  if (! FUNC_2 (VAR_4, VAR_6->type.indx, VAR_6->type.size,
   VAR_6->type.unsignedp, VAR_6->type.localp))
    return VAR_0;


  VAR_4->type_stack->type = VAR_6->type;

  return VAR_1;
}
