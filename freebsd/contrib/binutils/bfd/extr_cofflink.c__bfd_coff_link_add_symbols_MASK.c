
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfd_link_info {int dummy; } ;
typedef int bfd_boolean ;
typedef int bfd ;


 int VAR_0 ;
 int FUNC_0 (int *,struct bfd_link_info*,int ) ;

 int VAR_1 ;
 int FUNC_1 (int *) ;

 int FUNC_2 (int ) ;
 int FUNC_3 (int *,struct bfd_link_info*) ;
 int VAR_2 ;

bfd_boolean
FUNC_4 (bfd *VAR_3, struct bfd_link_info *VAR_4)
{
  switch (FUNC_1 (VAR_3))
    {
    case 128:
      return FUNC_3 (VAR_3, VAR_4);
    case 129:
      return FUNC_0
 (VAR_3, VAR_4, VAR_2);
    default:
      FUNC_2 (VAR_1);
      return VAR_0;
    }
}
