
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfd_link_order {int type; } ;
struct bfd_link_info {int dummy; } ;
typedef int bfd_boolean ;
typedef int bfd ;
typedef int asection ;


 int VAR_0 ;
 int FUNC_0 () ;





 int FUNC_1 (int *,struct bfd_link_info*,int *,struct bfd_link_order*) ;
 int FUNC_2 (int *,struct bfd_link_info*,int *,struct bfd_link_order*,int ) ;

bfd_boolean
FUNC_3 (bfd *VAR_1,
    struct bfd_link_info *VAR_2,
    asection *VAR_3,
    struct bfd_link_order *VAR_4)
{
  switch (VAR_4->type)
    {
    case 128:
    case 130:
    case 129:
    default:
      FUNC_0 ();
    case 131:
      return FUNC_2 (VAR_1, VAR_2, VAR_3, VAR_4,
       VAR_0);
    case 132:
      return FUNC_1 (VAR_1, VAR_2, VAR_3, VAR_4);
    }
}
