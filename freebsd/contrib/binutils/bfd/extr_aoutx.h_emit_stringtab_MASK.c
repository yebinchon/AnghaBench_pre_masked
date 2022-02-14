
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfd_strtab_hash {int dummy; } ;
typedef scalar_t__ bfd_size_type ;
typedef int bfd_byte ;
typedef int bfd_boolean ;
typedef int bfd ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,int *) ;
 int FUNC_1 (int *,struct bfd_strtab_hash*) ;
 int FUNC_2 (struct bfd_strtab_hash*) ;
 scalar_t__ FUNC_3 (void*,scalar_t__,int *) ;

__attribute__((used)) static bfd_boolean
FUNC_4 (bfd *VAR_2, struct bfd_strtab_hash *VAR_3)
{
  bfd_byte VAR_4[VAR_0];
  bfd_size_type VAR_5 = VAR_0;


  FUNC_0 (VAR_2, FUNC_2 (VAR_3) + VAR_0, VAR_4);
  if (FUNC_3 ((void *) VAR_4, VAR_5, VAR_2) != VAR_5)
    return VAR_1;

  return FUNC_1 (VAR_2, VAR_3);
}
