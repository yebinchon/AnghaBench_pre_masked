
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sh_flags; scalar_t__ sh_type; scalar_t__ sh_size; } ;
typedef TYPE_1__ GElf_Shdr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_0(GElf_Shdr *VAR_7)
{
 if (VAR_7 != ((void*)0)) {
  if (!(VAR_7->sh_flags & VAR_0))
   return;
  if ((VAR_7->sh_flags & VAR_0) &&
      ((VAR_7->sh_flags & VAR_1) ||
      !(VAR_7->sh_flags & VAR_2)))
   VAR_6 += VAR_7->sh_size;
  else if ((VAR_7->sh_flags & VAR_0) &&
      (VAR_7->sh_flags & VAR_2) &&
      (VAR_7->sh_type != VAR_3))
   VAR_5 += VAR_7->sh_size;
  else
   VAR_4 += VAR_7->sh_size;
 }
}
