
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee_type {int * type; void** pslot; } ;
struct TYPE_2__ {unsigned int alloc; struct ieee_type* types; } ;
struct ieee_info {int dhandle; TYPE_1__ types; } ;
typedef void* debug_type ;
typedef scalar_t__ bfd_boolean ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int * FUNC_0 (int ,void**,char const*) ;
 int FUNC_1 (struct ieee_type*,int ,unsigned int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct ieee_type*,unsigned int) ;

__attribute__((used)) static bfd_boolean
FUNC_4 (struct ieee_info *VAR_3, unsigned int VAR_4, bfd_boolean VAR_5)
{
  unsigned int VAR_6;
  register struct ieee_type *VAR_7;
  struct ieee_type *VAR_8;

  if (VAR_4 >= VAR_3->types.alloc)
    {
      VAR_6 = VAR_3->types.alloc;
      if (VAR_6 == 0)
 VAR_6 = 4;
      while (VAR_4 >= VAR_6)
 VAR_6 *= 2;

      VAR_3->types.types = ((struct ieee_type *)
      FUNC_3 (VAR_3->types.types,
         VAR_6 * sizeof *VAR_3->types.types));

      FUNC_1 (VAR_3->types.types + VAR_3->types.alloc, 0,
       (VAR_6 - VAR_3->types.alloc) * sizeof *VAR_3->types.types);

      VAR_8 = VAR_3->types.types + VAR_6;
      for (VAR_7 = VAR_3->types.types + VAR_3->types.alloc; VAR_7 < VAR_8; VAR_7++)
 VAR_7->type = VAR_0;

      VAR_3->types.alloc = VAR_6;
    }

  if (VAR_5)
    {
      VAR_7 = VAR_3->types.types + VAR_4;
      if (VAR_7->type == ((void*)0))
 {
   VAR_7->pslot = (debug_type *) FUNC_2 (sizeof *VAR_7->pslot);
   *VAR_7->pslot = VAR_0;
   VAR_7->type = FUNC_0 (VAR_3->dhandle, VAR_7->pslot,
           (const char *) ((void*)0));
   if (VAR_7->type == ((void*)0))
     return VAR_1;
 }
    }

  return VAR_2;
}
