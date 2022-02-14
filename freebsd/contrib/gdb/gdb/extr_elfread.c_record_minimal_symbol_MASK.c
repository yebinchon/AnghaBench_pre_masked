
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct objfile {int dummy; } ;
struct minimal_symbol {int dummy; } ;
typedef enum minimal_symbol_type { ____Placeholder_minimal_symbol_type } minimal_symbol_type ;
struct TYPE_4__ {int index; } ;
typedef TYPE_1__ asection ;
typedef int CORE_ADDR ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct minimal_symbol* FUNC_1 (char*,int ,int,int *,int ,TYPE_1__*,struct objfile*) ;

__attribute__((used)) static struct minimal_symbol *
FUNC_2 (char *VAR_2, CORE_ADDR VAR_3,
         enum minimal_symbol_type VAR_4,
         asection *VAR_5, struct objfile *VAR_6)
{
  if (VAR_4 == VAR_1 || VAR_4 == VAR_0)
    VAR_3 = FUNC_0 (VAR_3);

  return FUNC_1
    (VAR_2, VAR_3, VAR_4, ((void*)0), VAR_5->index, VAR_5, VAR_6);
}
