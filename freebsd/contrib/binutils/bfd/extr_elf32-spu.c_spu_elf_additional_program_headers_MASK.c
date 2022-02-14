
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct spu_link_hash_table {int num_overlays; } ;
struct bfd_link_info {int dummy; } ;
typedef int bfd ;
struct TYPE_3__ {int flags; } ;
typedef TYPE_1__ asection ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *,char*) ;
 struct spu_link_hash_table* FUNC_1 (struct bfd_link_info*) ;

__attribute__((used)) static int
FUNC_2 (bfd *VAR_1, struct bfd_link_info *VAR_2)
{
  struct spu_link_hash_table *VAR_3 = FUNC_1 (VAR_2);
  int VAR_4 = VAR_3->num_overlays;
  asection *VAR_5;

  if (VAR_4)
    ++VAR_4;

  VAR_5 = FUNC_0 (VAR_1, ".toe");
  if (VAR_5 != ((void*)0) && (VAR_5->flags & VAR_0) != 0)
    ++VAR_4;

  return VAR_4;
}
