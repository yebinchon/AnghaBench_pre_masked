
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfd_link_info {int * notice_hash; int notice_all; } ;
typedef int bfd_vma ;
typedef int bfd_boolean ;
typedef int bfd ;
typedef int asection ;
struct TYPE_2__ {scalar_t__ cref; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,int *,int *,int ) ;
 int * FUNC_1 (int *,char const*,int ,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 TYPE_1__ VAR_2 ;
 int FUNC_3 (char*,int *,char const*) ;
 int FUNC_4 (int *,int ) ;
 int * VAR_3 ;

__attribute__((used)) static bfd_boolean
FUNC_5 (struct bfd_link_info *VAR_4,
 const char *VAR_5,
 bfd *VAR_6,
 asection *VAR_7,
 bfd_vma VAR_8)
{
  if (VAR_5 == ((void*)0))
    {
      if (VAR_2.cref || VAR_3 != ((void*)0))
 return FUNC_4 (VAR_6, VAR_8);
      return VAR_1;
    }

  if (! VAR_4->notice_all
      || (VAR_4->notice_hash != ((void*)0)
   && FUNC_1 (VAR_4->notice_hash, VAR_5, VAR_0, VAR_0) != ((void*)0)))
    {
      if (FUNC_2 (VAR_7))
 FUNC_3 ("%B: reference to %s\n", VAR_6, VAR_5);
      else
 FUNC_3 ("%B: definition of %s\n", VAR_6, VAR_5);
    }

  if (VAR_2.cref || VAR_3 != ((void*)0))
    FUNC_0 (VAR_5, VAR_6, VAR_7, VAR_8);

  return VAR_1;
}
