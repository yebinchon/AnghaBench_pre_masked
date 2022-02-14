
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfd_link_info {int keep_memory; } ;
typedef int bfd_boolean ;
typedef int bfd ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct bfd_link_info*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static bfd_boolean
FUNC_3 (bfd *VAR_2, struct bfd_link_info *VAR_3)
{
  if (! FUNC_0 (VAR_2))
    return VAR_0;
  if (! FUNC_1 (VAR_2, VAR_3))
    return VAR_0;
  if (! VAR_3->keep_memory)
    {
      if (! FUNC_2 (VAR_2))
 return VAR_0;
    }
  return VAR_1;
}
