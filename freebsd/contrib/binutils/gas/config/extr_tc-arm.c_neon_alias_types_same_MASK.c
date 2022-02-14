
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; scalar_t__ size; } ;
struct neon_typed_alias {int defined; scalar_t__ index; TYPE_1__ eltype; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_0 (struct neon_typed_alias *VAR_2, struct neon_typed_alias *VAR_3)
{
  if (!VAR_2 && !VAR_3)
    return 1;

  if (!VAR_2 || !VAR_3)
    return 0;

  if (VAR_2->defined != VAR_3->defined)
    return 0;

  if ((VAR_2->defined & VAR_1) != 0
      && (VAR_2->eltype.type != VAR_3->eltype.type
          || VAR_2->eltype.size != VAR_3->eltype.size))
    return 0;

  if ((VAR_2->defined & VAR_0) != 0
      && (VAR_2->index != VAR_3->index))
    return 0;

  return 1;
}
