
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfd_link_info {int dummy; } ;
typedef int asection ;


 scalar_t__ FUNC_0 (int *,int *,struct bfd_link_info*) ;
 int * FUNC_1 (int *) ;

__attribute__((used)) static asection *
FUNC_2 (asection *VAR_0, asection *VAR_1,
      struct bfd_link_info *VAR_2)
{
  asection *VAR_3 = FUNC_1 (VAR_1);
  asection *VAR_4 = VAR_3;

  while (VAR_4 != ((void*)0))
    {
      if (FUNC_0 (VAR_4, VAR_0, VAR_2))
 return VAR_4;

      VAR_4 = FUNC_1 (VAR_4);
      if (VAR_4 == VAR_3)
 break;
    }

  return ((void*)0);
}
