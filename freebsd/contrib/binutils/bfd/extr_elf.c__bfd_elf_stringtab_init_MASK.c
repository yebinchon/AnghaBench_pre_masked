
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfd_strtab_hash {int dummy; } ;
typedef scalar_t__ bfd_size_type ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct bfd_strtab_hash*,char*,int ,int ) ;
 int FUNC_2 (struct bfd_strtab_hash*) ;
 struct bfd_strtab_hash* FUNC_3 () ;

struct bfd_strtab_hash *
FUNC_4 (void)
{
  struct bfd_strtab_hash *VAR_2;

  VAR_2 = FUNC_3 ();
  if (VAR_2 != ((void*)0))
    {
      bfd_size_type VAR_3;

      VAR_3 = FUNC_1 (VAR_2, "", VAR_1, VAR_0);
      FUNC_0 (VAR_3 == 0 || VAR_3 == (bfd_size_type) -1);
      if (VAR_3 == (bfd_size_type) -1)
 {
   FUNC_2 (VAR_2);
   VAR_2 = ((void*)0);
 }
    }
  return VAR_2;
}
