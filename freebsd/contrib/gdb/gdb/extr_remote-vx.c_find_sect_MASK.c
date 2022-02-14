
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct find_sect_args {void* bss_start; void* data_start; void* text_start; } ;
typedef int bfd ;
typedef int asection ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int *) ;
 void* FUNC_1 (int *,int *) ;

__attribute__((used)) static void
FUNC_2 (bfd *VAR_5, asection *VAR_6, void *VAR_7)
{
  struct find_sect_args *VAR_8 = (struct find_sect_args *) VAR_7;

  if (FUNC_0 (VAR_5, VAR_6) & (VAR_1 & VAR_4))
    VAR_8->text_start = FUNC_1 (VAR_5, VAR_6);
  else if (FUNC_0 (VAR_5, VAR_6) & VAR_0)
    {
      if (FUNC_0 (VAR_5, VAR_6) & VAR_3)
 {


   if (FUNC_0 (VAR_5, VAR_6) & VAR_2)
     VAR_8->data_start = FUNC_1 (VAR_5, VAR_6);
 }
      else
 VAR_8->bss_start = FUNC_1 (VAR_5, VAR_6);
    }
}
