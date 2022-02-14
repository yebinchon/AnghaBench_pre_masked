
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee_modified_type {int dummy; } ;
struct ieee_handle {unsigned int modified_alloc; struct ieee_modified_type* modified; } ;


 int FUNC_0 (struct ieee_modified_type*,int ,unsigned int) ;
 scalar_t__ FUNC_1 (struct ieee_modified_type*,unsigned int) ;

__attribute__((used)) static struct ieee_modified_type *
FUNC_2 (struct ieee_handle *VAR_0, unsigned int VAR_1)
{
  if (VAR_1 >= VAR_0->modified_alloc)
    {
      unsigned int VAR_2;

      VAR_2 = VAR_0->modified_alloc;
      if (VAR_2 == 0)
 VAR_2 = 16;
      while (VAR_1 >= VAR_2)
 VAR_2 *= 2;
      VAR_0->modified = ((struct ieee_modified_type *)
   FUNC_1 (VAR_0->modified,
      VAR_2 * sizeof *VAR_0->modified));
      FUNC_0 (VAR_0->modified + VAR_0->modified_alloc, 0,
       (VAR_2 - VAR_0->modified_alloc) * sizeof *VAR_0->modified);
      VAR_0->modified_alloc = VAR_2;
    }

  return VAR_0->modified + VAR_1;
}
