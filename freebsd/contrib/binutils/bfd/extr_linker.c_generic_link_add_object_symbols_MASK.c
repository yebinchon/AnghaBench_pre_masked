
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfd_symbol {int dummy; } ;
struct bfd_link_info {int dummy; } ;
typedef int bfd_size_type ;
typedef int bfd_boolean ;
typedef int bfd ;


 int VAR_0 ;
 struct bfd_symbol** FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct bfd_link_info*,int ,struct bfd_symbol**,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static bfd_boolean
FUNC_4 (bfd *VAR_1,
     struct bfd_link_info *VAR_2,
     bfd_boolean VAR_3)
{
  bfd_size_type VAR_4;
  struct bfd_symbol **VAR_5;

  if (! FUNC_3 (VAR_1))
    return VAR_0;
  VAR_4 = FUNC_1 (VAR_1);
  VAR_5 = FUNC_0 (VAR_1);
  return FUNC_2 (VAR_1, VAR_2, VAR_4, VAR_5, VAR_3);
}
