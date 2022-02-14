
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct section_table {int the_bfd_section; int bfd; } ;
struct s390_prologue_data {int dummy; } ;
struct prologue_value {scalar_t__ kind; int k; } ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct prologue_value*,int ) ;
 int FUNC_2 (struct prologue_value*) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (struct prologue_value*,int ,struct s390_prologue_data*,struct prologue_value**) ;
 struct section_table* FUNC_5 (int *,int ) ;

__attribute__((used)) static void
FUNC_6 (struct prologue_value *VAR_4,
    CORE_ADDR VAR_5,
    struct prologue_value *VAR_6,
    struct s390_prologue_data *VAR_7)
{
  struct prologue_value *VAR_8;






  if (VAR_4->kind == VAR_2)
    {
      struct section_table *VAR_9;
      VAR_9 = FUNC_5 (&VAR_1, VAR_4->k);
      if (VAR_9 != ((void*)0)
          && (FUNC_0 (VAR_9->bfd, VAR_9->the_bfd_section)
              & VAR_0))
 {
          FUNC_1 (VAR_6, FUNC_3 (VAR_4->k, VAR_5));
   return;
 }
    }



  if (FUNC_4 (VAR_4, VAR_5, VAR_7, &VAR_8) == VAR_3)
    {
      *VAR_6 = *VAR_8;
      return;
    }


  FUNC_2 (VAR_6);
}
