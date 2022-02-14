
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct bfd_link_info {int dummy; } ;
struct TYPE_7__ {int flags; scalar_t__ size; struct TYPE_7__* kept_section; } ;
typedef TYPE_1__ asection ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (TYPE_1__*,TYPE_1__*,struct bfd_link_info*) ;

asection *
FUNC_1 (asection *VAR_1, struct bfd_link_info *VAR_2)
{
  asection *VAR_3;

  VAR_3 = VAR_1->kept_section;
  if (VAR_3 != ((void*)0))
    {
      if ((VAR_3->flags & VAR_0) != 0)
 VAR_3 = FUNC_0 (VAR_1, VAR_3, VAR_2);
      if (VAR_3 != ((void*)0) && VAR_1->size != VAR_3->size)
 VAR_3 = ((void*)0);
      VAR_1->kept_section = VAR_3;
    }
  return VAR_3;
}
