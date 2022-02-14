
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee_info {int abfd; int const* bytes; } ;
typedef int bfd_byte ;


 char* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,char*,...) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2 (struct ieee_info *VAR_1, const bfd_byte *VAR_2, const char *VAR_3)
{
  if (VAR_2 != ((void*)0))
    FUNC_1 (VAR_0, "%s: 0x%lx: %s (0x%x)\n", FUNC_0 (VAR_1->abfd),
      (unsigned long) (VAR_2 - VAR_1->bytes), VAR_3, *VAR_2);
  else
    FUNC_1 (VAR_0, "%s: %s\n", FUNC_0 (VAR_1->abfd), VAR_3);
}
