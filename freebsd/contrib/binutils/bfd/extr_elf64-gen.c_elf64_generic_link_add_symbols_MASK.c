
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfd_link_info {int dummy; } ;
typedef scalar_t__ bfd_boolean ;
typedef int bfd ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,struct bfd_link_info*) ;
 int FUNC_1 (int *,int ,scalar_t__*) ;
 int VAR_1 ;

__attribute__((used)) static bfd_boolean
FUNC_2 (bfd *VAR_2, struct bfd_link_info *VAR_3)
{
  bfd_boolean VAR_4 = VAR_0;


  FUNC_1 (VAR_2, VAR_1, & VAR_4);

  if (VAR_4)
    return VAR_0;
  return FUNC_0 (VAR_2, VAR_3);
}
