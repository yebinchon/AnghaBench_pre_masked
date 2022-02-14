
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int bfd ;
struct TYPE_3__ {scalar_t__ size; int reloc_count; } ;
typedef TYPE_1__ asection ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 unsigned int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int *,int ) ;

__attribute__((used)) static void
FUNC_3 (bfd *VAR_1, unsigned int VAR_2)
{
  asection *VAR_3;

  VAR_3 = FUNC_2 (VAR_1, VAR_0);
  FUNC_0 (VAR_3 != ((void*)0));

  if (VAR_3->size == 0)
    {

      VAR_3->size += FUNC_1 (VAR_1);
      ++VAR_3->reloc_count;
    }
  VAR_3->size += VAR_2 * FUNC_1 (VAR_1);
}
