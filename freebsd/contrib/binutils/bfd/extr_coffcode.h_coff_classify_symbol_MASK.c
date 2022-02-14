
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct internal_syment {int n_sclass; scalar_t__ n_scnum; scalar_t__ n_value; } ;
typedef enum coff_symbol_classification { ____Placeholder_coff_symbol_classification } coff_symbol_classification ;
typedef int bfd ;
typedef int asection ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int VAR_5 ;
 int VAR_6 ;




 int VAR_7 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,struct internal_syment*,char*) ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (int *,int *) ;
 int * FUNC_4 (int *,scalar_t__) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int *,int ) ;

__attribute__((used)) static enum coff_symbol_classification
FUNC_7 (bfd *VAR_8,
        struct internal_syment *VAR_9)
{


  switch (VAR_9->n_sclass)
    {
    case 134:
    case 128:
    case 131:




      if (VAR_9->n_scnum == 0)
 {
   if (VAR_9->n_value == 0)
     return VAR_4;
   else
     return VAR_0;
 }
      return VAR_1;

    default:
      break;
    }
  if (VAR_9->n_scnum == 0)
    {
      char VAR_10[VAR_7 + 1];

      FUNC_2)
 (FUNC_0("warning: %B: local symbol `%s' has no section"),
  VAR_8, FUNC_1 (VAR_8, VAR_9, VAR_10));
    }

  return VAR_2;
}
