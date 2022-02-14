
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
 int FUNC_3 (int *,struct bfd_link_info*,int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static bfd_boolean
FUNC_4 (bfd *VAR_4,
     struct bfd_link_info *VAR_5,
     bfd_boolean VAR_6)
{
  bfd_boolean VAR_7;

  switch (FUNC_1 (VAR_4))
    {
    case 128:
      VAR_7 = FUNC_3 (VAR_4, VAR_5, VAR_6);
      break;
    case 129:
      VAR_7 = (FUNC_0
      (VAR_4, VAR_5,
       (VAR_6
        ? VAR_2
        : VAR_3)));
      break;
    default:
      FUNC_2 (VAR_1);
      VAR_7 = VAR_0;
    }

  return VAR_7;
}
