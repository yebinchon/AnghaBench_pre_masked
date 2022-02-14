
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfd_link_info {int dummy; } ;
typedef int bfd_boolean ;
typedef int bfd ;


 int VAR_0 ;

 int VAR_1 ;
 int FUNC_0 (int *) ;

 int FUNC_1 (int ) ;
 int FUNC_2 (int *,struct bfd_link_info*) ;
 int FUNC_3 (int *,struct bfd_link_info*) ;

bfd_boolean
FUNC_4 (bfd *VAR_2, struct bfd_link_info *VAR_3)
{
  switch (FUNC_0 (VAR_2))
    {
    case 128:
      return FUNC_3 (VAR_2, VAR_3);
    case 129:
      return FUNC_2 (VAR_2, VAR_3);
    default:
      FUNC_1 (VAR_1);
      return VAR_0;
    }
}
