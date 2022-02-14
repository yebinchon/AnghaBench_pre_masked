
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfd_link_info {int keep_memory; } ;
typedef scalar_t__ bfd_boolean ;
typedef int bfd ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct bfd_link_info*) ;
 int FUNC_3 (int *,struct bfd_link_info*,scalar_t__*) ;

__attribute__((used)) static bfd_boolean
FUNC_4 (bfd *VAR_2,
     struct bfd_link_info *VAR_3,
     bfd_boolean *VAR_4)
{
  if (! FUNC_1 (VAR_2))
    return VAR_0;

  if (! FUNC_3 (VAR_2, VAR_3, VAR_4))
    return VAR_0;

  if (*VAR_4
      && ! FUNC_2 (VAR_2, VAR_3))
    return VAR_0;

  if ((! VAR_3->keep_memory || ! *VAR_4)
      && ! FUNC_0 (VAR_2))
    return VAR_0;

  return VAR_1;
}
