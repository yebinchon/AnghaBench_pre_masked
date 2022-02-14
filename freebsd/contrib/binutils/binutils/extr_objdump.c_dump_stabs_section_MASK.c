
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* section_name; char* string_section_name; scalar_t__ string_offset; } ;
typedef TYPE_1__ stab_section_names ;
typedef int bfd ;


 int FUNC_0 (int *,int ,TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int * VAR_1 ;

__attribute__((used)) static void
FUNC_2 (bfd *VAR_2, char *VAR_3, char *VAR_4)
{
  stab_section_names VAR_5;

  VAR_5.section_name = VAR_3;
  VAR_5.string_section_name = VAR_4;
  VAR_5.string_offset = 0;

  FUNC_0 (VAR_2, VAR_0, & VAR_5);

  FUNC_1 (VAR_1);
  VAR_1 = ((void*)0);
}
