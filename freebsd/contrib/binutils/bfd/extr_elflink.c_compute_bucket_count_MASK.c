
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct elf_backend_data {TYPE_1__* s; } ;
struct bfd_link_info {scalar_t__ optimize; } ;
typedef int bfd_size_type ;
typedef int bfd ;
struct TYPE_4__ {size_t dynsymcount; int * dynobj; } ;
struct TYPE_3__ {int sizeof_hash_entry; } ;
typedef unsigned long BFD_HOST_U_64_BIT ;


 unsigned long VAR_0 ;
 unsigned long* FUNC_0 (int) ;
 unsigned long* VAR_1 ;
 TYPE_2__* FUNC_1 (struct bfd_link_info*) ;
 int FUNC_2 (unsigned long*) ;
 struct elf_backend_data* FUNC_3 (int *) ;
 int FUNC_4 (unsigned long*,char,unsigned long) ;

__attribute__((used)) static size_t
FUNC_5 (struct bfd_link_info *VAR_2, unsigned long int *VAR_3,
        unsigned long int VAR_4, int VAR_5)
{
  size_t VAR_6 = FUNC_1 (VAR_2)->dynsymcount;
  size_t VAR_7 = 0;
  unsigned long int VAR_8;
  bfd_size_type VAR_9;
    {



      for (VAR_8 = 0; VAR_1[VAR_8] != 0; VAR_8++)
 {
   VAR_7 = VAR_1[VAR_8];
   if (VAR_4 < VAR_1[VAR_8 + 1])
     break;
 }
      if (VAR_5 && VAR_7 < 2)
 VAR_7 = 2;
    }

  return VAR_7;
}
