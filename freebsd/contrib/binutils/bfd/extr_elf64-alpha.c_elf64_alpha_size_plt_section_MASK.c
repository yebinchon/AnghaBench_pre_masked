
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct bfd_link_info {int dummy; } ;
typedef int bfd ;
struct TYPE_5__ {unsigned long size; } ;
typedef TYPE_1__ asection ;
struct TYPE_6__ {int * dynobj; } ;
typedef int Elf64_External_Rela ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (struct bfd_link_info*) ;
 int FUNC_1 (int ,int ,TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int *,char*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_2__* FUNC_3 (struct bfd_link_info*) ;

__attribute__((used)) static void
FUNC_4 (struct bfd_link_info *VAR_6)
{
  asection *VAR_7, *VAR_8, *VAR_9;
  unsigned long VAR_10;
  bfd *VAR_11;

  VAR_11 = FUNC_3(VAR_6)->dynobj;
  VAR_7 = FUNC_2 (VAR_11, ".plt");
  if (VAR_7 == ((void*)0))
    return;

  VAR_7->size = 0;

  FUNC_1 (FUNC_0 (VAR_6),
    VAR_4, VAR_7);


  VAR_8 = FUNC_2 (VAR_11, ".rela.plt");
  VAR_10 = 0;
  if (VAR_7->size)
    {
      if (VAR_5)
 VAR_10 = (VAR_7->size - VAR_1) / VAR_0;
      else
 VAR_10 = (VAR_7->size - VAR_3) / VAR_2;
    }
  VAR_8->size = VAR_10 * sizeof (Elf64_External_Rela);




  if (VAR_5)
    {
      VAR_9 = FUNC_2 (VAR_11, ".got.plt");
      VAR_9->size = VAR_10 ? 16 : 0;
    }
}
